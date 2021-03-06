using bob.builder.log;
using bob.builder.build.plugin.execute;

namespace bob.builder.build.plugin.dependency {

    public class DpkgPackageResolver {

        public delegate void DpkgPackageResolvedDelegate(string resolvedPackage);

        private Logger LOGGER = Logger.getLogger("DpkgPackageResolver");
        
        private const string COMMAND_DPKG = "dpkg";
        private const string MISSING_ERROR = "Unable to find '%s' command!";

        private string[] _resolvedPackages = new string[0];

        public void initialize() throws DependencyResolverError {
            validateDpkgExists();
        }

        private void validateDpkgExists() throws DependencyResolverError {
            WhichChecker checker = new WhichChecker(COMMAND_DPKG);
            if (!checker.success()) {
                throw new DependencyResolverError.INITIALIZATION_ERROR(MISSING_ERROR.printf(COMMAND_DPKG));
            }
        }

        public void resolveFilePackages(string file) {
            _resolvedPackages = new string[0];

            try {
                LOGGER.logInfo("Resolving '%s' dependency for file: %s.", COMMAND_DPKG, file);

                new PipedExecutableRunner(COMMAND_DPKG, "-S", file).run(output => {
                    new PipedExecutableRunner("awk", "{print substr($1, 0, length($1))}").runWithInput(output.getStream(), finalOutput => {
                        foreach (string package in finalOutput.getText().split("\n")) {
                            if (package == null || package.length == 0) {
                                continue;
                            }
                            _resolvedPackages += package;
                        }
                    });
                });
            } catch (Error e) {
                LOGGER.logError("An error occurred while searching packages for [%s] file: %s.", file, e.message);
            }
        }

        public bool anyFound() {
            return _resolvedPackages.length > 0;
        }

        public void forEachResolved(DpkgPackageResolvedDelegate resolvedDelegate) {
            foreach (string resolvedPackage in _resolvedPackages) {
                resolvedDelegate(resolvedPackage);
            }
        }
    }
}