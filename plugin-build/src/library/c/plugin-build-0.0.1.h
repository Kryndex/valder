/* plugin-build-0.0.1.h generated by valac 0.30.1, the Vala compiler, do not modify */


#ifndef __SRC_LIBRARY_C_PLUGIN_BUILD_0_0_1_H__
#define __SRC_LIBRARY_C_PLUGIN_BUILD_0_0_1_H__

#include <glib.h>
#include <bob-0.0.1.h>
#include <stdlib.h>
#include <string.h>
#include <glib-object.h>
#include <vala.h>

G_BEGIN_DECLS


#define BOB_BUILDER_BUILD_PLUGIN_TYPE_BUILD_APPLICATION_PLUGIN (bob_builder_build_plugin_build_application_plugin_get_type ())
#define BOB_BUILDER_BUILD_PLUGIN_BUILD_APPLICATION_PLUGIN(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), BOB_BUILDER_BUILD_PLUGIN_TYPE_BUILD_APPLICATION_PLUGIN, bobbuilderbuildpluginBuildApplicationPlugin))
#define BOB_BUILDER_BUILD_PLUGIN_BUILD_APPLICATION_PLUGIN_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), BOB_BUILDER_BUILD_PLUGIN_TYPE_BUILD_APPLICATION_PLUGIN, bobbuilderbuildpluginBuildApplicationPluginClass))
#define BOB_BUILDER_BUILD_PLUGIN_IS_BUILD_APPLICATION_PLUGIN(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), BOB_BUILDER_BUILD_PLUGIN_TYPE_BUILD_APPLICATION_PLUGIN))
#define BOB_BUILDER_BUILD_PLUGIN_IS_BUILD_APPLICATION_PLUGIN_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), BOB_BUILDER_BUILD_PLUGIN_TYPE_BUILD_APPLICATION_PLUGIN))
#define BOB_BUILDER_BUILD_PLUGIN_BUILD_APPLICATION_PLUGIN_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), BOB_BUILDER_BUILD_PLUGIN_TYPE_BUILD_APPLICATION_PLUGIN, bobbuilderbuildpluginBuildApplicationPluginClass))

typedef struct _bobbuilderbuildpluginBuildApplicationPlugin bobbuilderbuildpluginBuildApplicationPlugin;
typedef struct _bobbuilderbuildpluginBuildApplicationPluginClass bobbuilderbuildpluginBuildApplicationPluginClass;
typedef struct _bobbuilderbuildpluginBuildApplicationPluginPrivate bobbuilderbuildpluginBuildApplicationPluginPrivate;

#define BOB_BUILDER_BUILD_PLUGIN_TYPE_GIR_CONFIGURATION (bob_builder_build_plugin_gir_configuration_get_type ())
typedef struct _bobbuilderbuildpluginGirConfiguration bobbuilderbuildpluginGirConfiguration;

#define BOB_BUILDER_BUILD_PLUGIN_TYPE_VAPI_CONFIGURATION (bob_builder_build_plugin_vapi_configuration_get_type ())
typedef struct _bobbuilderbuildpluginVapiConfiguration bobbuilderbuildpluginVapiConfiguration;

#define BOB_BUILDER_BUILD_PLUGIN_TYPE_BUILD_CONFIGURATION (bob_builder_build_plugin_build_configuration_get_type ())
#define BOB_BUILDER_BUILD_PLUGIN_BUILD_CONFIGURATION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), BOB_BUILDER_BUILD_PLUGIN_TYPE_BUILD_CONFIGURATION, bobbuilderbuildpluginBuildConfiguration))
#define BOB_BUILDER_BUILD_PLUGIN_BUILD_CONFIGURATION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), BOB_BUILDER_BUILD_PLUGIN_TYPE_BUILD_CONFIGURATION, bobbuilderbuildpluginBuildConfigurationClass))
#define BOB_BUILDER_BUILD_PLUGIN_IS_BUILD_CONFIGURATION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), BOB_BUILDER_BUILD_PLUGIN_TYPE_BUILD_CONFIGURATION))
#define BOB_BUILDER_BUILD_PLUGIN_IS_BUILD_CONFIGURATION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), BOB_BUILDER_BUILD_PLUGIN_TYPE_BUILD_CONFIGURATION))
#define BOB_BUILDER_BUILD_PLUGIN_BUILD_CONFIGURATION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), BOB_BUILDER_BUILD_PLUGIN_TYPE_BUILD_CONFIGURATION, bobbuilderbuildpluginBuildConfigurationClass))

typedef struct _bobbuilderbuildpluginBuildConfiguration bobbuilderbuildpluginBuildConfiguration;
typedef struct _bobbuilderbuildpluginBuildConfigurationClass bobbuilderbuildpluginBuildConfigurationClass;
typedef struct _bobbuilderbuildpluginBuildConfigurationPrivate bobbuilderbuildpluginBuildConfigurationPrivate;

#define BOB_BUILDER_BUILD_PLUGIN_TYPE_CC_OPTIONS (bob_builder_build_plugin_cc_options_get_type ())
#define BOB_BUILDER_BUILD_PLUGIN_CC_OPTIONS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), BOB_BUILDER_BUILD_PLUGIN_TYPE_CC_OPTIONS, bobbuilderbuildpluginCCOptions))
#define BOB_BUILDER_BUILD_PLUGIN_CC_OPTIONS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), BOB_BUILDER_BUILD_PLUGIN_TYPE_CC_OPTIONS, bobbuilderbuildpluginCCOptionsClass))
#define BOB_BUILDER_BUILD_PLUGIN_IS_CC_OPTIONS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), BOB_BUILDER_BUILD_PLUGIN_TYPE_CC_OPTIONS))
#define BOB_BUILDER_BUILD_PLUGIN_IS_CC_OPTIONS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), BOB_BUILDER_BUILD_PLUGIN_TYPE_CC_OPTIONS))
#define BOB_BUILDER_BUILD_PLUGIN_CC_OPTIONS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), BOB_BUILDER_BUILD_PLUGIN_TYPE_CC_OPTIONS, bobbuilderbuildpluginCCOptionsClass))

typedef struct _bobbuilderbuildpluginCCOptions bobbuilderbuildpluginCCOptions;
typedef struct _bobbuilderbuildpluginCCOptionsClass bobbuilderbuildpluginCCOptionsClass;

#define BOB_BUILDER_BUILD_PLUGIN_TYPE_BUILD_CONFIGURATION_BUILDER (bob_builder_build_plugin_build_configuration_builder_get_type ())
#define BOB_BUILDER_BUILD_PLUGIN_BUILD_CONFIGURATION_BUILDER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), BOB_BUILDER_BUILD_PLUGIN_TYPE_BUILD_CONFIGURATION_BUILDER, bobbuilderbuildpluginBuildConfigurationBuilder))
#define BOB_BUILDER_BUILD_PLUGIN_BUILD_CONFIGURATION_BUILDER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), BOB_BUILDER_BUILD_PLUGIN_TYPE_BUILD_CONFIGURATION_BUILDER, bobbuilderbuildpluginBuildConfigurationBuilderClass))
#define BOB_BUILDER_BUILD_PLUGIN_IS_BUILD_CONFIGURATION_BUILDER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), BOB_BUILDER_BUILD_PLUGIN_TYPE_BUILD_CONFIGURATION_BUILDER))
#define BOB_BUILDER_BUILD_PLUGIN_IS_BUILD_CONFIGURATION_BUILDER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), BOB_BUILDER_BUILD_PLUGIN_TYPE_BUILD_CONFIGURATION_BUILDER))
#define BOB_BUILDER_BUILD_PLUGIN_BUILD_CONFIGURATION_BUILDER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), BOB_BUILDER_BUILD_PLUGIN_TYPE_BUILD_CONFIGURATION_BUILDER, bobbuilderbuildpluginBuildConfigurationBuilderClass))

typedef struct _bobbuilderbuildpluginBuildConfigurationBuilder bobbuilderbuildpluginBuildConfigurationBuilder;
typedef struct _bobbuilderbuildpluginBuildConfigurationBuilderClass bobbuilderbuildpluginBuildConfigurationBuilderClass;
typedef struct _bobbuilderbuildpluginBuildConfigurationBuilderPrivate bobbuilderbuildpluginBuildConfigurationBuilderPrivate;

#define BOB_BUILDER_BUILD_PLUGIN_TYPE_BUILD_CONFIGURATION_DEPENDENCY_BUILDER (bob_builder_build_plugin_build_configuration_dependency_builder_get_type ())
#define BOB_BUILDER_BUILD_PLUGIN_BUILD_CONFIGURATION_DEPENDENCY_BUILDER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), BOB_BUILDER_BUILD_PLUGIN_TYPE_BUILD_CONFIGURATION_DEPENDENCY_BUILDER, bobbuilderbuildpluginBuildConfigurationDependencyBuilder))
#define BOB_BUILDER_BUILD_PLUGIN_BUILD_CONFIGURATION_DEPENDENCY_BUILDER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), BOB_BUILDER_BUILD_PLUGIN_TYPE_BUILD_CONFIGURATION_DEPENDENCY_BUILDER, bobbuilderbuildpluginBuildConfigurationDependencyBuilderClass))
#define BOB_BUILDER_BUILD_PLUGIN_IS_BUILD_CONFIGURATION_DEPENDENCY_BUILDER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), BOB_BUILDER_BUILD_PLUGIN_TYPE_BUILD_CONFIGURATION_DEPENDENCY_BUILDER))
#define BOB_BUILDER_BUILD_PLUGIN_IS_BUILD_CONFIGURATION_DEPENDENCY_BUILDER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), BOB_BUILDER_BUILD_PLUGIN_TYPE_BUILD_CONFIGURATION_DEPENDENCY_BUILDER))
#define BOB_BUILDER_BUILD_PLUGIN_BUILD_CONFIGURATION_DEPENDENCY_BUILDER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), BOB_BUILDER_BUILD_PLUGIN_TYPE_BUILD_CONFIGURATION_DEPENDENCY_BUILDER, bobbuilderbuildpluginBuildConfigurationDependencyBuilderClass))

typedef struct _bobbuilderbuildpluginBuildConfigurationDependencyBuilder bobbuilderbuildpluginBuildConfigurationDependencyBuilder;
typedef struct _bobbuilderbuildpluginBuildConfigurationDependencyBuilderClass bobbuilderbuildpluginBuildConfigurationDependencyBuilderClass;

#define BOB_BUILDER_BUILD_PLUGIN_TYPE_BUILD_CONFIGURATION_LIBRARY_USAGE_BUILDER (bob_builder_build_plugin_build_configuration_library_usage_builder_get_type ())
#define BOB_BUILDER_BUILD_PLUGIN_BUILD_CONFIGURATION_LIBRARY_USAGE_BUILDER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), BOB_BUILDER_BUILD_PLUGIN_TYPE_BUILD_CONFIGURATION_LIBRARY_USAGE_BUILDER, bobbuilderbuildpluginBuildConfigurationLibraryUsageBuilder))
#define BOB_BUILDER_BUILD_PLUGIN_BUILD_CONFIGURATION_LIBRARY_USAGE_BUILDER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), BOB_BUILDER_BUILD_PLUGIN_TYPE_BUILD_CONFIGURATION_LIBRARY_USAGE_BUILDER, bobbuilderbuildpluginBuildConfigurationLibraryUsageBuilderClass))
#define BOB_BUILDER_BUILD_PLUGIN_IS_BUILD_CONFIGURATION_LIBRARY_USAGE_BUILDER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), BOB_BUILDER_BUILD_PLUGIN_TYPE_BUILD_CONFIGURATION_LIBRARY_USAGE_BUILDER))
#define BOB_BUILDER_BUILD_PLUGIN_IS_BUILD_CONFIGURATION_LIBRARY_USAGE_BUILDER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), BOB_BUILDER_BUILD_PLUGIN_TYPE_BUILD_CONFIGURATION_LIBRARY_USAGE_BUILDER))
#define BOB_BUILDER_BUILD_PLUGIN_BUILD_CONFIGURATION_LIBRARY_USAGE_BUILDER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), BOB_BUILDER_BUILD_PLUGIN_TYPE_BUILD_CONFIGURATION_LIBRARY_USAGE_BUILDER, bobbuilderbuildpluginBuildConfigurationLibraryUsageBuilderClass))

typedef struct _bobbuilderbuildpluginBuildConfigurationLibraryUsageBuilder bobbuilderbuildpluginBuildConfigurationLibraryUsageBuilder;
typedef struct _bobbuilderbuildpluginBuildConfigurationLibraryUsageBuilderClass bobbuilderbuildpluginBuildConfigurationLibraryUsageBuilderClass;
typedef struct _bobbuilderbuildpluginBuildConfigurationLibraryUsageBuilderPrivate bobbuilderbuildpluginBuildConfigurationLibraryUsageBuilderPrivate;

#define BOB_BUILDER_BUILD_PLUGIN_TYPE_VALA_CODE_COMPILER (bob_builder_build_plugin_vala_code_compiler_get_type ())
#define BOB_BUILDER_BUILD_PLUGIN_VALA_CODE_COMPILER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), BOB_BUILDER_BUILD_PLUGIN_TYPE_VALA_CODE_COMPILER, bobbuilderbuildpluginValaCodeCompiler))
#define BOB_BUILDER_BUILD_PLUGIN_VALA_CODE_COMPILER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), BOB_BUILDER_BUILD_PLUGIN_TYPE_VALA_CODE_COMPILER, bobbuilderbuildpluginValaCodeCompilerClass))
#define BOB_BUILDER_BUILD_PLUGIN_IS_VALA_CODE_COMPILER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), BOB_BUILDER_BUILD_PLUGIN_TYPE_VALA_CODE_COMPILER))
#define BOB_BUILDER_BUILD_PLUGIN_IS_VALA_CODE_COMPILER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), BOB_BUILDER_BUILD_PLUGIN_TYPE_VALA_CODE_COMPILER))
#define BOB_BUILDER_BUILD_PLUGIN_VALA_CODE_COMPILER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), BOB_BUILDER_BUILD_PLUGIN_TYPE_VALA_CODE_COMPILER, bobbuilderbuildpluginValaCodeCompilerClass))

typedef struct _bobbuilderbuildpluginValaCodeCompiler bobbuilderbuildpluginValaCodeCompiler;
typedef struct _bobbuilderbuildpluginValaCodeCompilerClass bobbuilderbuildpluginValaCodeCompilerClass;
typedef struct _bobbuilderbuildpluginValaCodeCompilerPrivate bobbuilderbuildpluginValaCodeCompilerPrivate;

#define BOB_BUILDER_BUILD_PLUGIN_TYPE_VALA_CODE_COMPILER_OUTCOME (bob_builder_build_plugin_vala_code_compiler_outcome_get_type ())
#define BOB_BUILDER_BUILD_PLUGIN_VALA_CODE_COMPILER_OUTCOME(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), BOB_BUILDER_BUILD_PLUGIN_TYPE_VALA_CODE_COMPILER_OUTCOME, bobbuilderbuildpluginValaCodeCompilerOutcome))
#define BOB_BUILDER_BUILD_PLUGIN_VALA_CODE_COMPILER_OUTCOME_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), BOB_BUILDER_BUILD_PLUGIN_TYPE_VALA_CODE_COMPILER_OUTCOME, bobbuilderbuildpluginValaCodeCompilerOutcomeClass))
#define BOB_BUILDER_BUILD_PLUGIN_IS_VALA_CODE_COMPILER_OUTCOME(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), BOB_BUILDER_BUILD_PLUGIN_TYPE_VALA_CODE_COMPILER_OUTCOME))
#define BOB_BUILDER_BUILD_PLUGIN_IS_VALA_CODE_COMPILER_OUTCOME_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), BOB_BUILDER_BUILD_PLUGIN_TYPE_VALA_CODE_COMPILER_OUTCOME))
#define BOB_BUILDER_BUILD_PLUGIN_VALA_CODE_COMPILER_OUTCOME_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), BOB_BUILDER_BUILD_PLUGIN_TYPE_VALA_CODE_COMPILER_OUTCOME, bobbuilderbuildpluginValaCodeCompilerOutcomeClass))

typedef struct _bobbuilderbuildpluginValaCodeCompilerOutcome bobbuilderbuildpluginValaCodeCompilerOutcome;
typedef struct _bobbuilderbuildpluginValaCodeCompilerOutcomeClass bobbuilderbuildpluginValaCodeCompilerOutcomeClass;
typedef struct _bobbuilderbuildpluginValaCodeCompilerOutcomePrivate bobbuilderbuildpluginValaCodeCompilerOutcomePrivate;
typedef struct _bobbuilderbuildpluginBuildConfigurationDependencyBuilderPrivate bobbuilderbuildpluginBuildConfigurationDependencyBuilderPrivate;
typedef struct _bobbuilderbuildpluginCCOptionsPrivate bobbuilderbuildpluginCCOptionsPrivate;

#define BOB_BUILDER_BUILD_PLUGIN_TYPE_GIR_GENERATOR (bob_builder_build_plugin_gir_generator_get_type ())
#define BOB_BUILDER_BUILD_PLUGIN_GIR_GENERATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), BOB_BUILDER_BUILD_PLUGIN_TYPE_GIR_GENERATOR, bobbuilderbuildpluginGIRGenerator))
#define BOB_BUILDER_BUILD_PLUGIN_GIR_GENERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), BOB_BUILDER_BUILD_PLUGIN_TYPE_GIR_GENERATOR, bobbuilderbuildpluginGIRGeneratorClass))
#define BOB_BUILDER_BUILD_PLUGIN_IS_GIR_GENERATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), BOB_BUILDER_BUILD_PLUGIN_TYPE_GIR_GENERATOR))
#define BOB_BUILDER_BUILD_PLUGIN_IS_GIR_GENERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), BOB_BUILDER_BUILD_PLUGIN_TYPE_GIR_GENERATOR))
#define BOB_BUILDER_BUILD_PLUGIN_GIR_GENERATOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), BOB_BUILDER_BUILD_PLUGIN_TYPE_GIR_GENERATOR, bobbuilderbuildpluginGIRGeneratorClass))

typedef struct _bobbuilderbuildpluginGIRGenerator bobbuilderbuildpluginGIRGenerator;
typedef struct _bobbuilderbuildpluginGIRGeneratorClass bobbuilderbuildpluginGIRGeneratorClass;
typedef struct _bobbuilderbuildpluginGIRGeneratorPrivate bobbuilderbuildpluginGIRGeneratorPrivate;

struct _bobbuilderbuildpluginBuildApplicationPlugin {
	bobbuilderbuildpluginAbstractBobBuildPlugin parent_instance;
	bobbuilderbuildpluginBuildApplicationPluginPrivate * priv;
};

struct _bobbuilderbuildpluginBuildApplicationPluginClass {
	bobbuilderbuildpluginAbstractBobBuildPluginClass parent_class;
};

struct _bobbuilderbuildpluginGirConfiguration {
	gboolean generateGir;
	gchar* libraryName;
	gchar* libraryVersion;
	gchar* outputDirectory;
};

struct _bobbuilderbuildpluginVapiConfiguration {
	gboolean generateVapi;
	gchar* outputVapiFile;
};

struct _bobbuilderbuildpluginBuildConfiguration {
	GTypeInstance parent_instance;
	volatile int ref_count;
	bobbuilderbuildpluginBuildConfigurationPrivate * priv;
};

struct _bobbuilderbuildpluginBuildConfigurationClass {
	GTypeClass parent_class;
	void (*finalize) (bobbuilderbuildpluginBuildConfiguration *self);
};

struct _bobbuilderbuildpluginBuildConfigurationBuilder {
	GTypeInstance parent_instance;
	volatile int ref_count;
	bobbuilderbuildpluginBuildConfigurationBuilderPrivate * priv;
};

struct _bobbuilderbuildpluginBuildConfigurationBuilderClass {
	GTypeClass parent_class;
	void (*finalize) (bobbuilderbuildpluginBuildConfigurationBuilder *self);
};

typedef void (*bobbuilderbuildpluginBuildConfigurationBuilderBuildConfigurationDependencyBuilderDelegate) (bobbuilderbuildpluginBuildConfigurationDependencyBuilder* dependencyBuilder, void* user_data);
typedef void (*bobbuilderbuildpluginBuildConfigurationBuilderBuildConfigurationLibraryUsageBuilderDelegate) (bobbuilderbuildpluginBuildConfigurationLibraryUsageBuilder* libraryUsageBuilder, void* user_data);
struct _bobbuilderbuildpluginBuildConfigurationLibraryUsageBuilder {
	GTypeInstance parent_instance;
	volatile int ref_count;
	bobbuilderbuildpluginBuildConfigurationLibraryUsageBuilderPrivate * priv;
};

struct _bobbuilderbuildpluginBuildConfigurationLibraryUsageBuilderClass {
	GTypeClass parent_class;
	void (*finalize) (bobbuilderbuildpluginBuildConfigurationLibraryUsageBuilder *self);
};

typedef enum  {
	BOB_BUILDER_BUILD_PLUGIN_COMPILATION_ERROR_PARSING_ERROR,
	BOB_BUILDER_BUILD_PLUGIN_COMPILATION_ERROR_CCOMPILATION_ERROR
} bobbuilderbuildpluginCompilationError;
#define BOB_BUILDER_BUILD_PLUGIN_COMPILATION_ERROR bob_builder_build_plugin_compilation_error_quark ()
struct _bobbuilderbuildpluginValaCodeCompiler {
	ValaCodeVisitor parent_instance;
	bobbuilderbuildpluginValaCodeCompilerPrivate * priv;
};

struct _bobbuilderbuildpluginValaCodeCompilerClass {
	ValaCodeVisitorClass parent_class;
};

struct _bobbuilderbuildpluginValaCodeCompilerOutcome {
	GTypeInstance parent_instance;
	volatile int ref_count;
	bobbuilderbuildpluginValaCodeCompilerOutcomePrivate * priv;
};

struct _bobbuilderbuildpluginValaCodeCompilerOutcomeClass {
	GTypeClass parent_class;
	void (*finalize) (bobbuilderbuildpluginValaCodeCompilerOutcome *self);
};

struct _bobbuilderbuildpluginBuildConfigurationDependencyBuilder {
	GTypeInstance parent_instance;
	volatile int ref_count;
	bobbuilderbuildpluginBuildConfigurationDependencyBuilderPrivate * priv;
};

struct _bobbuilderbuildpluginBuildConfigurationDependencyBuilderClass {
	GTypeClass parent_class;
	void (*finalize) (bobbuilderbuildpluginBuildConfigurationDependencyBuilder *self);
};

struct _bobbuilderbuildpluginCCOptions {
	GTypeInstance parent_instance;
	volatile int ref_count;
	bobbuilderbuildpluginCCOptionsPrivate * priv;
};

struct _bobbuilderbuildpluginCCOptionsClass {
	GTypeClass parent_class;
	void (*finalize) (bobbuilderbuildpluginCCOptions *self);
};

struct _bobbuilderbuildpluginGIRGenerator {
	GTypeInstance parent_instance;
	volatile int ref_count;
	bobbuilderbuildpluginGIRGeneratorPrivate * priv;
};

struct _bobbuilderbuildpluginGIRGeneratorClass {
	GTypeClass parent_class;
	void (*finalize) (bobbuilderbuildpluginGIRGenerator *self);
};


GType bob_builder_build_plugin_build_application_plugin_get_type (void) G_GNUC_CONST;
bobbuilderbuildpluginBuildApplicationPlugin* bob_builder_build_plugin_build_application_plugin_new (void);
bobbuilderbuildpluginBuildApplicationPlugin* bob_builder_build_plugin_build_application_plugin_construct (GType object_type);
GType bob_builder_build_plugin_gir_configuration_get_type (void) G_GNUC_CONST;
bobbuilderbuildpluginGirConfiguration* bob_builder_build_plugin_gir_configuration_dup (const bobbuilderbuildpluginGirConfiguration* self);
void bob_builder_build_plugin_gir_configuration_free (bobbuilderbuildpluginGirConfiguration* self);
void bob_builder_build_plugin_gir_configuration_copy (const bobbuilderbuildpluginGirConfiguration* self, bobbuilderbuildpluginGirConfiguration* dest);
void bob_builder_build_plugin_gir_configuration_destroy (bobbuilderbuildpluginGirConfiguration* self);
GType bob_builder_build_plugin_vapi_configuration_get_type (void) G_GNUC_CONST;
bobbuilderbuildpluginVapiConfiguration* bob_builder_build_plugin_vapi_configuration_dup (const bobbuilderbuildpluginVapiConfiguration* self);
void bob_builder_build_plugin_vapi_configuration_free (bobbuilderbuildpluginVapiConfiguration* self);
void bob_builder_build_plugin_vapi_configuration_copy (const bobbuilderbuildpluginVapiConfiguration* self, bobbuilderbuildpluginVapiConfiguration* dest);
void bob_builder_build_plugin_vapi_configuration_destroy (bobbuilderbuildpluginVapiConfiguration* self);
gpointer bob_builder_build_plugin_build_configuration_ref (gpointer instance);
void bob_builder_build_plugin_build_configuration_unref (gpointer instance);
GParamSpec* bob_builder_build_plugin_param_spec_build_configuration (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void bob_builder_build_plugin_value_set_build_configuration (GValue* value, gpointer v_object);
void bob_builder_build_plugin_value_take_build_configuration (GValue* value, gpointer v_object);
gpointer bob_builder_build_plugin_value_get_build_configuration (const GValue* value);
GType bob_builder_build_plugin_build_configuration_get_type (void) G_GNUC_CONST;
void bob_builder_build_plugin_build_configuration_addCcOption (bobbuilderbuildpluginBuildConfiguration* self, const gchar* ccOption);
void bob_builder_build_plugin_build_configuration_addDependency (bobbuilderbuildpluginBuildConfiguration* self, bobbuilderrecipeprojectBobBuildProjectDependency* dependency);
void bob_builder_build_plugin_build_configuration_addSource (bobbuilderbuildpluginBuildConfiguration* self, bobbuilderrecipeprojectBobBuildProjectSourceFile* source);
gboolean bob_builder_build_plugin_build_configuration_hasAnySources (bobbuilderbuildpluginBuildConfiguration* self, const gchar* fileSuffix);
bobbuilderbuildpluginBuildConfiguration* bob_builder_build_plugin_build_configuration_new (void);
bobbuilderbuildpluginBuildConfiguration* bob_builder_build_plugin_build_configuration_construct (GType object_type);
const gchar* bob_builder_build_plugin_build_configuration_get_targetFile (bobbuilderbuildpluginBuildConfiguration* self);
void bob_builder_build_plugin_build_configuration_set_targetFile (bobbuilderbuildpluginBuildConfiguration* self, const gchar* value);
void bob_builder_build_plugin_build_configuration_get_girConfiguration (bobbuilderbuildpluginBuildConfiguration* self, bobbuilderbuildpluginGirConfiguration* result);
void bob_builder_build_plugin_build_configuration_set_girConfiguration (bobbuilderbuildpluginBuildConfiguration* self, bobbuilderbuildpluginGirConfiguration* value);
void bob_builder_build_plugin_build_configuration_get_vapiConfiguration (bobbuilderbuildpluginBuildConfiguration* self, bobbuilderbuildpluginVapiConfiguration* result);
void bob_builder_build_plugin_build_configuration_set_vapiConfiguration (bobbuilderbuildpluginBuildConfiguration* self, bobbuilderbuildpluginVapiConfiguration* value);
const gchar* bob_builder_build_plugin_build_configuration_get_outputHFile (bobbuilderbuildpluginBuildConfiguration* self);
void bob_builder_build_plugin_build_configuration_set_outputHFile (bobbuilderbuildpluginBuildConfiguration* self, const gchar* value);
gboolean bob_builder_build_plugin_build_configuration_get_verbose (bobbuilderbuildpluginBuildConfiguration* self);
void bob_builder_build_plugin_build_configuration_set_verbose (bobbuilderbuildpluginBuildConfiguration* self, gboolean value);
gboolean bob_builder_build_plugin_build_configuration_get_debug (bobbuilderbuildpluginBuildConfiguration* self);
void bob_builder_build_plugin_build_configuration_set_debug (bobbuilderbuildpluginBuildConfiguration* self, gboolean value);
bobbuilderrecipeprojectBobBuildProjectDependencyScope bob_builder_build_plugin_build_configuration_get_scope (bobbuilderbuildpluginBuildConfiguration* self);
void bob_builder_build_plugin_build_configuration_set_scope (bobbuilderbuildpluginBuildConfiguration* self, bobbuilderrecipeprojectBobBuildProjectDependencyScope value);
gpointer bob_builder_build_plugin_cc_options_ref (gpointer instance);
void bob_builder_build_plugin_cc_options_unref (gpointer instance);
GParamSpec* bob_builder_build_plugin_param_spec_cc_options (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void bob_builder_build_plugin_value_set_cc_options (GValue* value, gpointer v_object);
void bob_builder_build_plugin_value_take_cc_options (GValue* value, gpointer v_object);
gpointer bob_builder_build_plugin_value_get_cc_options (const GValue* value);
GType bob_builder_build_plugin_cc_options_get_type (void) G_GNUC_CONST;
bobbuilderbuildpluginCCOptions* bob_builder_build_plugin_build_configuration_get_ccOptions (bobbuilderbuildpluginBuildConfiguration* self);
void bob_builder_build_plugin_build_configuration_set_ccOptions (bobbuilderbuildpluginBuildConfiguration* self, bobbuilderbuildpluginCCOptions* value);
GList* bob_builder_build_plugin_build_configuration_get_dependencies (bobbuilderbuildpluginBuildConfiguration* self);
GList* bob_builder_build_plugin_build_configuration_get_sources (bobbuilderbuildpluginBuildConfiguration* self);
gpointer bob_builder_build_plugin_build_configuration_builder_ref (gpointer instance);
void bob_builder_build_plugin_build_configuration_builder_unref (gpointer instance);
GParamSpec* bob_builder_build_plugin_param_spec_build_configuration_builder (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void bob_builder_build_plugin_value_set_build_configuration_builder (GValue* value, gpointer v_object);
void bob_builder_build_plugin_value_take_build_configuration_builder (GValue* value, gpointer v_object);
gpointer bob_builder_build_plugin_value_get_build_configuration_builder (const GValue* value);
GType bob_builder_build_plugin_build_configuration_builder_get_type (void) G_GNUC_CONST;
bobbuilderbuildpluginBuildConfigurationBuilder* bob_builder_build_plugin_build_configuration_builder_new_fromJSONObject (bobbuilderjsonJsonObject* jsonObject);
bobbuilderbuildpluginBuildConfigurationBuilder* bob_builder_build_plugin_build_configuration_builder_construct_fromJSONObject (GType object_type, bobbuilderjsonJsonObject* jsonObject);
bobbuilderbuildpluginBuildConfigurationBuilder* bob_builder_build_plugin_build_configuration_builder_sources (bobbuilderbuildpluginBuildConfigurationBuilder* self, GList* sources);
bobbuilderbuildpluginBuildConfigurationBuilder* bob_builder_build_plugin_build_configuration_builder_runtimeScope (bobbuilderbuildpluginBuildConfigurationBuilder* self);
bobbuilderbuildpluginBuildConfigurationBuilder* bob_builder_build_plugin_build_configuration_builder_libraryScope (bobbuilderbuildpluginBuildConfigurationBuilder* self);
gpointer bob_builder_build_plugin_build_configuration_dependency_builder_ref (gpointer instance);
void bob_builder_build_plugin_build_configuration_dependency_builder_unref (gpointer instance);
GParamSpec* bob_builder_build_plugin_param_spec_build_configuration_dependency_builder (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void bob_builder_build_plugin_value_set_build_configuration_dependency_builder (GValue* value, gpointer v_object);
void bob_builder_build_plugin_value_take_build_configuration_dependency_builder (GValue* value, gpointer v_object);
gpointer bob_builder_build_plugin_value_get_build_configuration_dependency_builder (const GValue* value);
GType bob_builder_build_plugin_build_configuration_dependency_builder_get_type (void) G_GNUC_CONST;
bobbuilderbuildpluginBuildConfigurationBuilder* bob_builder_build_plugin_build_configuration_builder_dependency (bobbuilderbuildpluginBuildConfigurationBuilder* self, bobbuilderbuildpluginBuildConfigurationBuilderBuildConfigurationDependencyBuilderDelegate dependencyBuilderDelegate, void* dependencyBuilderDelegate_target);
bobbuilderbuildpluginBuildConfigurationBuilder* bob_builder_build_plugin_build_configuration_builder_dependencies (bobbuilderbuildpluginBuildConfigurationBuilder* self, GList* dependencies);
bobbuilderbuildpluginBuildConfigurationBuilder* bob_builder_build_plugin_build_configuration_builder_targetDirectory (bobbuilderbuildpluginBuildConfigurationBuilder* self, const gchar* targetDirectory);
bobbuilderbuildpluginBuildConfigurationBuilder* bob_builder_build_plugin_build_configuration_builder_targetFileName (bobbuilderbuildpluginBuildConfigurationBuilder* self, const gchar* targetFileName);
bobbuilderbuildpluginBuildConfigurationBuilder* bob_builder_build_plugin_build_configuration_builder_girOutputDirectory (bobbuilderbuildpluginBuildConfigurationBuilder* self, const gchar* girOutputDirectory);
bobbuilderbuildpluginBuildConfigurationBuilder* bob_builder_build_plugin_build_configuration_builder_girLibraryName (bobbuilderbuildpluginBuildConfigurationBuilder* self, const gchar* girLibraryName);
bobbuilderbuildpluginBuildConfigurationBuilder* bob_builder_build_plugin_build_configuration_builder_girLibraryVersion (bobbuilderbuildpluginBuildConfigurationBuilder* self, const gchar* girLibraryVersion);
bobbuilderbuildpluginBuildConfigurationBuilder* bob_builder_build_plugin_build_configuration_builder_generateVapiAndC (bobbuilderbuildpluginBuildConfigurationBuilder* self);
bobbuilderbuildpluginBuildConfigurationBuilder* bob_builder_build_plugin_build_configuration_builder_vapiOutputDirectory (bobbuilderbuildpluginBuildConfigurationBuilder* self, const gchar* vapiOutputDirectory);
bobbuilderbuildpluginBuildConfigurationBuilder* bob_builder_build_plugin_build_configuration_builder_vapiOutputFileName (bobbuilderbuildpluginBuildConfigurationBuilder* self, const gchar* vapiOutputFileName);
bobbuilderbuildpluginBuildConfigurationBuilder* bob_builder_build_plugin_build_configuration_builder_ccOption (bobbuilderbuildpluginBuildConfigurationBuilder* self, const gchar* ccOption);
bobbuilderbuildpluginBuildConfigurationBuilder* bob_builder_build_plugin_build_configuration_builder_cOutputDirectory (bobbuilderbuildpluginBuildConfigurationBuilder* self, const gchar* cOutputDirectory);
bobbuilderbuildpluginBuildConfigurationBuilder* bob_builder_build_plugin_build_configuration_builder_cHeaderFileName (bobbuilderbuildpluginBuildConfigurationBuilder* self, const gchar* cHeaderFileName);
gpointer bob_builder_build_plugin_build_configuration_library_usage_builder_ref (gpointer instance);
void bob_builder_build_plugin_build_configuration_library_usage_builder_unref (gpointer instance);
GParamSpec* bob_builder_build_plugin_param_spec_build_configuration_library_usage_builder (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void bob_builder_build_plugin_value_set_build_configuration_library_usage_builder (GValue* value, gpointer v_object);
void bob_builder_build_plugin_value_take_build_configuration_library_usage_builder (GValue* value, gpointer v_object);
gpointer bob_builder_build_plugin_value_get_build_configuration_library_usage_builder (const GValue* value);
GType bob_builder_build_plugin_build_configuration_library_usage_builder_get_type (void) G_GNUC_CONST;
bobbuilderbuildpluginBuildConfigurationBuilder* bob_builder_build_plugin_build_configuration_builder_useLibrary (bobbuilderbuildpluginBuildConfigurationBuilder* self, bobbuilderbuildpluginBuildConfigurationBuilderBuildConfigurationLibraryUsageBuilderDelegate libraryUsageDelegate, void* libraryUsageDelegate_target);
bobbuilderbuildpluginBuildConfiguration* bob_builder_build_plugin_build_configuration_builder_build (bobbuilderbuildpluginBuildConfigurationBuilder* self);
bobbuilderbuildpluginBuildConfigurationBuilder* bob_builder_build_plugin_build_configuration_builder_new (void);
bobbuilderbuildpluginBuildConfigurationBuilder* bob_builder_build_plugin_build_configuration_builder_construct (GType object_type);
void bob_builder_build_plugin_build_configuration_library_usage_builder_addLibraryUsageCcOptions (bobbuilderbuildpluginBuildConfigurationLibraryUsageBuilder* self, bobbuilderbuildpluginBuildConfigurationBuilder* buildConfigurationBuilder);
bobbuilderbuildpluginBuildConfigurationLibraryUsageBuilder* bob_builder_build_plugin_build_configuration_library_usage_builder_new (void);
bobbuilderbuildpluginBuildConfigurationLibraryUsageBuilder* bob_builder_build_plugin_build_configuration_library_usage_builder_construct (GType object_type);
const gchar* bob_builder_build_plugin_build_configuration_library_usage_builder_get_name (bobbuilderbuildpluginBuildConfigurationLibraryUsageBuilder* self);
void bob_builder_build_plugin_build_configuration_library_usage_builder_set_name (bobbuilderbuildpluginBuildConfigurationLibraryUsageBuilder* self, const gchar* value);
const gchar* bob_builder_build_plugin_build_configuration_library_usage_builder_get_version (bobbuilderbuildpluginBuildConfigurationLibraryUsageBuilder* self);
void bob_builder_build_plugin_build_configuration_library_usage_builder_set_version (bobbuilderbuildpluginBuildConfigurationLibraryUsageBuilder* self, const gchar* value);
const gchar* bob_builder_build_plugin_build_configuration_library_usage_builder_get_cHeadersDirectory (bobbuilderbuildpluginBuildConfigurationLibraryUsageBuilder* self);
void bob_builder_build_plugin_build_configuration_library_usage_builder_set_cHeadersDirectory (bobbuilderbuildpluginBuildConfigurationLibraryUsageBuilder* self, const gchar* value);
const gchar* bob_builder_build_plugin_build_configuration_library_usage_builder_get_vapiDirectory (bobbuilderbuildpluginBuildConfigurationLibraryUsageBuilder* self);
void bob_builder_build_plugin_build_configuration_library_usage_builder_set_vapiDirectory (bobbuilderbuildpluginBuildConfigurationLibraryUsageBuilder* self, const gchar* value);
bobbuilderrecipeprojectBobBuildProjectDependencyScope bob_builder_build_plugin_build_configuration_library_usage_builder_get_scope (bobbuilderbuildpluginBuildConfigurationLibraryUsageBuilder* self);
void bob_builder_build_plugin_build_configuration_library_usage_builder_set_scope (bobbuilderbuildpluginBuildConfigurationLibraryUsageBuilder* self, bobbuilderrecipeprojectBobBuildProjectDependencyScope value);
GQuark bob_builder_build_plugin_compilation_error_quark (void);
GType bob_builder_build_plugin_vala_code_compiler_get_type (void) G_GNUC_CONST;
bobbuilderbuildpluginValaCodeCompiler* bob_builder_build_plugin_vala_code_compiler_new (bobbuilderbuildpluginBuildConfiguration* buildConfiguration);
bobbuilderbuildpluginValaCodeCompiler* bob_builder_build_plugin_vala_code_compiler_construct (GType object_type, bobbuilderbuildpluginBuildConfiguration* buildConfiguration);
gpointer bob_builder_build_plugin_vala_code_compiler_outcome_ref (gpointer instance);
void bob_builder_build_plugin_vala_code_compiler_outcome_unref (gpointer instance);
GParamSpec* bob_builder_build_plugin_param_spec_vala_code_compiler_outcome (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void bob_builder_build_plugin_value_set_vala_code_compiler_outcome (GValue* value, gpointer v_object);
void bob_builder_build_plugin_value_take_vala_code_compiler_outcome (GValue* value, gpointer v_object);
gpointer bob_builder_build_plugin_value_get_vala_code_compiler_outcome (const GValue* value);
GType bob_builder_build_plugin_vala_code_compiler_outcome_get_type (void) G_GNUC_CONST;
bobbuilderbuildpluginValaCodeCompilerOutcome* bob_builder_build_plugin_vala_code_compiler_compile (bobbuilderbuildpluginValaCodeCompiler* self, GError** error);
bobbuilderbuildpluginValaCodeCompilerOutcome* bob_builder_build_plugin_vala_code_compiler_outcome_new_default (void);
bobbuilderbuildpluginValaCodeCompilerOutcome* bob_builder_build_plugin_vala_code_compiler_outcome_construct_default (GType object_type);
bobbuilderbuildpluginValaCodeCompilerOutcome* bob_builder_build_plugin_vala_code_compiler_outcome_new_noBinaryGenerated (void);
bobbuilderbuildpluginValaCodeCompilerOutcome* bob_builder_build_plugin_vala_code_compiler_outcome_construct_noBinaryGenerated (GType object_type);
bobbuilderbuildpluginValaCodeCompilerOutcome* bob_builder_build_plugin_vala_code_compiler_outcome_new (void);
bobbuilderbuildpluginValaCodeCompilerOutcome* bob_builder_build_plugin_vala_code_compiler_outcome_construct (GType object_type);
gboolean bob_builder_build_plugin_vala_code_compiler_outcome_get_binaryGenerated (bobbuilderbuildpluginValaCodeCompilerOutcome* self);
void bob_builder_build_plugin_vala_code_compiler_outcome_set_binaryGenerated (bobbuilderbuildpluginValaCodeCompilerOutcome* self, gboolean value);
void initializePlugin (bobbuilderbuildpluginBobBuildPluginLoader* pluginLoader);
gchar** getDependencies (int* result_length1);
bobbuilderrecipeprojectBobBuildProjectDependency* bob_builder_build_plugin_build_configuration_dependency_builder_build (bobbuilderbuildpluginBuildConfigurationDependencyBuilder* self);
bobbuilderbuildpluginBuildConfigurationDependencyBuilder* bob_builder_build_plugin_build_configuration_dependency_builder_new (void);
bobbuilderbuildpluginBuildConfigurationDependencyBuilder* bob_builder_build_plugin_build_configuration_dependency_builder_construct (GType object_type);
const gchar* bob_builder_build_plugin_build_configuration_dependency_builder_get_name (bobbuilderbuildpluginBuildConfigurationDependencyBuilder* self);
void bob_builder_build_plugin_build_configuration_dependency_builder_set_name (bobbuilderbuildpluginBuildConfigurationDependencyBuilder* self, const gchar* value);
const gchar* bob_builder_build_plugin_build_configuration_dependency_builder_get_version (bobbuilderbuildpluginBuildConfigurationDependencyBuilder* self);
void bob_builder_build_plugin_build_configuration_dependency_builder_set_version (bobbuilderbuildpluginBuildConfigurationDependencyBuilder* self, const gchar* value);
const gchar* bob_builder_build_plugin_build_configuration_dependency_builder_get_vapiDirectory (bobbuilderbuildpluginBuildConfigurationDependencyBuilder* self);
void bob_builder_build_plugin_build_configuration_dependency_builder_set_vapiDirectory (bobbuilderbuildpluginBuildConfigurationDependencyBuilder* self, const gchar* value);
const gchar* bob_builder_build_plugin_build_configuration_dependency_builder_get_cHeadersDirectory (bobbuilderbuildpluginBuildConfigurationDependencyBuilder* self);
void bob_builder_build_plugin_build_configuration_dependency_builder_set_cHeadersDirectory (bobbuilderbuildpluginBuildConfigurationDependencyBuilder* self, const gchar* value);
void bob_builder_build_plugin_cc_options_addCcOption (bobbuilderbuildpluginCCOptions* self, const gchar* ccOption);
void bob_builder_build_plugin_cc_options_addCHeadersDirectoryLocation (bobbuilderbuildpluginCCOptions* self, const gchar* cHeadersDirectoryLocation);
void bob_builder_build_plugin_cc_options_useLibrary (bobbuilderbuildpluginCCOptions* self, const gchar* name);
void bob_builder_build_plugin_cc_options_addDebugFlag (bobbuilderbuildpluginCCOptions* self);
gchar** bob_builder_build_plugin_cc_options_getCcOptions (bobbuilderbuildpluginCCOptions* self, int* result_length1);
bobbuilderbuildpluginCCOptions* bob_builder_build_plugin_cc_options_new (void);
bobbuilderbuildpluginCCOptions* bob_builder_build_plugin_cc_options_construct (GType object_type);
gpointer bob_builder_build_plugin_gir_generator_ref (gpointer instance);
void bob_builder_build_plugin_gir_generator_unref (gpointer instance);
GParamSpec* bob_builder_build_plugin_param_spec_gir_generator (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void bob_builder_build_plugin_value_set_gir_generator (GValue* value, gpointer v_object);
void bob_builder_build_plugin_value_take_gir_generator (GValue* value, gpointer v_object);
gpointer bob_builder_build_plugin_value_get_gir_generator (const GValue* value);
GType bob_builder_build_plugin_gir_generator_get_type (void) G_GNUC_CONST;
void bob_builder_build_plugin_gir_generator_generateGIRRepositoryFile (bobbuilderbuildpluginGIRGenerator* self, ValaCodeContext* codeContext, bobbuilderbuildpluginGirConfiguration* girConfiguration);
bobbuilderbuildpluginGIRGenerator* bob_builder_build_plugin_gir_generator_new (void);
bobbuilderbuildpluginGIRGenerator* bob_builder_build_plugin_gir_generator_construct (GType object_type);


G_END_DECLS

#endif
