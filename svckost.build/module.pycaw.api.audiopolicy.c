/* Generated code for Python module 'pycaw$api$audiopolicy'
 * created by Nuitka version 1.9.6
 *
 * This code is in part copyright 2023 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_pycaw$api$audiopolicy" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pycaw$api$audiopolicy;
PyDictObject *moduledict_pycaw$api$audiopolicy;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[134];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[134];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("pycaw.api.audiopolicy"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 134; i++) {
            mod_consts_hash[i] = DEEP_HASH(tstate, mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(PyThreadState *tstate) {
    createModuleConstants(tstate);
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pycaw$api$audiopolicy(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 134; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_f3032e207776cc2cba16b96bd593de83;
static PyCodeObject *codeobj_18fe58054bccefc50a9857a792ea4762;
static PyCodeObject *codeobj_f8abcfa470378899223e1c72de85e63c;
static PyCodeObject *codeobj_8357ac692b636db57f8eab41835e3e7f;
static PyCodeObject *codeobj_c6b000d107d6583016dd8b565f506ce3;
static PyCodeObject *codeobj_2f0a6777673fd6630c66993c4adcd48d;
static PyCodeObject *codeobj_5a834c15c28241975d908a247950ddd8;
static PyCodeObject *codeobj_fc5bde29450440689e5e4fc3be08c980;
static PyCodeObject *codeobj_a97c8625a76175b0185582f2a633cad9;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[130]); CHECK_OBJECT(module_filename_obj);
    codeobj_f3032e207776cc2cba16b96bd593de83 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[131], mod_consts[131], NULL, NULL, 0, 0, 0);
    codeobj_18fe58054bccefc50a9857a792ea4762 = MAKE_CODE_OBJECT(module_filename_obj, 79, 0, mod_consts[70], mod_consts[70], mod_consts[132], NULL, 0, 0, 0);
    codeobj_f8abcfa470378899223e1c72de85e63c = MAKE_CODE_OBJECT(module_filename_obj, 139, 0, mod_consts[86], mod_consts[86], mod_consts[132], NULL, 0, 0, 0);
    codeobj_8357ac692b636db57f8eab41835e3e7f = MAKE_CODE_OBJECT(module_filename_obj, 162, 0, mod_consts[94], mod_consts[94], mod_consts[132], NULL, 0, 0, 0);
    codeobj_c6b000d107d6583016dd8b565f506ce3 = MAKE_CODE_OBJECT(module_filename_obj, 9, 0, mod_consts[38], mod_consts[38], mod_consts[132], NULL, 0, 0, 0);
    codeobj_2f0a6777673fd6630c66993c4adcd48d = MAKE_CODE_OBJECT(module_filename_obj, 180, 0, mod_consts[100], mod_consts[100], mod_consts[132], NULL, 0, 0, 0);
    codeobj_5a834c15c28241975d908a247950ddd8 = MAKE_CODE_OBJECT(module_filename_obj, 249, 0, mod_consts[119], mod_consts[119], mod_consts[132], NULL, 0, 0, 0);
    codeobj_fc5bde29450440689e5e4fc3be08c980 = MAKE_CODE_OBJECT(module_filename_obj, 210, 0, mod_consts[109], mod_consts[109], mod_consts[132], NULL, 0, 0, 0);
    codeobj_a97c8625a76175b0185582f2a633cad9 = MAKE_CODE_OBJECT(module_filename_obj, 225, 0, mod_consts[113], mod_consts[113], mod_consts[132], NULL, 0, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


// The module function definitions.


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(PyThreadState *tstate, char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

static function_impl_code const function_table_pycaw$api$audiopolicy[] = {

    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTuple(args, "O:reduce_compiled_function", &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_pycaw$api$audiopolicy);

    if (unlikely(offset == -1)) {
        PyThreadState *tstate = PyThreadState_GET();
#if 0
        PRINT_STRING("Looking for:");
        PRINT_ITEM(func);
        PRINT_NEW_LINE();
#endif
        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);


    PyObject *result = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
#if PYTHON_VERSION >= 0x300
    PyTuple_SET_ITEM0(result, 3, function->m_kwdefaults ? function->m_kwdefaults : Py_None);
#else
    PyTuple_SET_ITEM0(result, 3, Py_None);
#endif
    PyTuple_SET_ITEM0(result, 4, function->m_doc != NULL ? function->m_doc : Py_None);

    if (offset == -5) {
        CHECK_OBJECT(function->m_constant_return_value);
        PyTuple_SET_ITEM0(result, 5, function->m_constant_return_value);
    } else {
        PyTuple_SET_ITEM0(result, 5, Py_None);
    }

#if PYTHON_VERSION >= 0x300
    PyTuple_SET_ITEM0(result, 6, function->m_qualname);
#else
    PyTuple_SET_ITEM0(result, 6, Py_None);
#endif

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS, NULL};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *function_index;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *kw_defaults;
    PyObject *doc;
    PyObject *constant_return_value;
    PyObject *function_qualname;

    if (!PyArg_ParseTuple(args, "OOOOOO:create_compiled_function", &function_index, &code_object_desc, &defaults, &kw_defaults, &doc, &constant_return_value, &function_qualname, NULL)) {
        return NULL;
    }

#if PYTHON_VERSION >= 0x300
    if (kw_defaults == Py_None) {
        kw_defaults = NULL;
    }
#endif

    return (PyObject *)Nuitka_Function_CreateFunctionViaCodeIndex(
        module_pycaw$api$audiopolicy,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        function_table_pycaw$api$audiopolicy,
        sizeof(function_table_pycaw$api$audiopolicy) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_pycaw$api$audiopolicy(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pycaw$api$audiopolicy");

    // Store the module for future use.
    module_pycaw$api$audiopolicy = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants(tstate);

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("pycaw$api$audiopolicy: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pycaw$api$audiopolicy: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

#if defined(_NUITKA_MODULE) && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "pycaw.api.audiopolicy" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initpycaw$api$audiopolicy\n");

    moduledict_pycaw$api$audiopolicy = MODULE_DICT(module_pycaw$api$audiopolicy);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pycaw$api$audiopolicy,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pycaw$api$audiopolicy,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[133]
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pycaw$api$audiopolicy,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pycaw$api$audiopolicy,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pycaw$api$audiopolicy,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pycaw$api$audiopolicy);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pycaw$api$audiopolicy);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *outline_5_var___class__ = NULL;
    PyObject *outline_6_var___class__ = NULL;
    PyObject *outline_7_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__bases_orig = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__bases_orig = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__bases_orig = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_class_creation_6__bases = NULL;
    PyObject *tmp_class_creation_6__bases_orig = NULL;
    PyObject *tmp_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_6__prepared = NULL;
    PyObject *tmp_class_creation_7__bases = NULL;
    PyObject *tmp_class_creation_7__bases_orig = NULL;
    PyObject *tmp_class_creation_7__class_decl_dict = NULL;
    PyObject *tmp_class_creation_7__metaclass = NULL;
    PyObject *tmp_class_creation_7__prepared = NULL;
    PyObject *tmp_class_creation_8__bases = NULL;
    PyObject *tmp_class_creation_8__bases_orig = NULL;
    PyObject *tmp_class_creation_8__class_decl_dict = NULL;
    PyObject *tmp_class_creation_8__metaclass = NULL;
    PyObject *tmp_class_creation_8__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_f3032e207776cc2cba16b96bd593de83;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    int tmp_res;
    PyObject *locals_pycaw$api$audiopolicy$$$class__1_IAudioSessionEvents_9 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_c6b000d107d6583016dd8b565f506ce3_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *locals_pycaw$api$audiopolicy$$$class__2_IAudioSessionControl_79 = NULL;
    struct Nuitka_FrameObject *frame_18fe58054bccefc50a9857a792ea4762_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *locals_pycaw$api$audiopolicy$$$class__3_IAudioSessionControl2_139 = NULL;
    struct Nuitka_FrameObject *frame_f8abcfa470378899223e1c72de85e63c_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *locals_pycaw$api$audiopolicy$$$class__4_IAudioSessionEnumerator_162 = NULL;
    struct Nuitka_FrameObject *frame_8357ac692b636db57f8eab41835e3e7f_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *locals_pycaw$api$audiopolicy$$$class__5_IAudioSessionManager_180 = NULL;
    struct Nuitka_FrameObject *frame_2f0a6777673fd6630c66993c4adcd48d_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *locals_pycaw$api$audiopolicy$$$class__6_IAudioSessionNotification_210 = NULL;
    struct Nuitka_FrameObject *frame_fc5bde29450440689e5e4fc3be08c980_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *locals_pycaw$api$audiopolicy$$$class__7_IAudioVolumeDuckNotification_225 = NULL;
    struct Nuitka_FrameObject *frame_a97c8625a76175b0185582f2a633cad9_8;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *locals_pycaw$api$audiopolicy$$$class__8_IAudioSessionManager2_249 = NULL;
    struct Nuitka_FrameObject *frame_5a834c15c28241975d908a247950ddd8_9;
    NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_2);
    }
    frame_f3032e207776cc2cba16b96bd593de83 = MAKE_MODULE_FRAME(codeobj_f3032e207776cc2cba16b96bd593de83, module_pycaw$api$audiopolicy);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f3032e207776cc2cba16b96bd593de83);
    assert(Py_REFCNT(frame_f3032e207776cc2cba16b96bd593de83) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        frame_f3032e207776cc2cba16b96bd593de83->m_frame.f_lineno = 1;
        {
            PyObject *hard_module = IMPORT_HARD_OS();
            if (likely(hard_module != NULL)) {
                tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[2]);


            } else {
                tmp_expression_value_1 = NULL;
            }
        }
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[3]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = module_filename_obj;
        frame_f3032e207776cc2cba16b96bd593de83->m_frame.f_lineno = 1;
        tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_list_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_LIST_EMPTY(4);
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_called_value_3;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_called_value_4;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_called_value_5;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_called_value_6;
            PyObject *tmp_expression_value_6;
            PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_1);
            frame_f3032e207776cc2cba16b96bd593de83->m_frame.f_lineno = 1;
            {
                PyObject *hard_module = IMPORT_HARD_OS();
                if (likely(hard_module != NULL)) {
                    tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[2]);


                } else {
                    tmp_expression_value_2 = NULL;
                }
            }
            if (tmp_expression_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[4]);
            Py_DECREF(tmp_expression_value_2);
            if (tmp_called_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            frame_f3032e207776cc2cba16b96bd593de83->m_frame.f_lineno = 1;
            {
                PyObject *hard_module = IMPORT_HARD_OS();
                if (likely(hard_module != NULL)) {
                    tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[5]);


                } else {
                    tmp_expression_value_3 = NULL;
                }
            }
            if (tmp_expression_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_2);

                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[6]);
            Py_DECREF(tmp_expression_value_3);
            if (tmp_called_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_2);

                exception_lineno = 1;

                goto list_build_exception_1;
            }
            frame_f3032e207776cc2cba16b96bd593de83->m_frame.f_lineno = 1;
            tmp_args_element_value_2 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_3, mod_consts[7]);

            Py_DECREF(tmp_called_value_3);
            if (tmp_args_element_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_2);

                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_args_element_value_3 = mod_consts[8];
            frame_f3032e207776cc2cba16b96bd593de83->m_frame.f_lineno = 1;
            {
                PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
                tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
            }

            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_3, 1, tmp_list_element_1);
            frame_f3032e207776cc2cba16b96bd593de83->m_frame.f_lineno = 1;
            {
                PyObject *hard_module = IMPORT_HARD_OS();
                if (likely(hard_module != NULL)) {
                    tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[2]);


                } else {
                    tmp_expression_value_4 = NULL;
                }
            }
            if (tmp_expression_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[4]);
            Py_DECREF(tmp_expression_value_4);
            if (tmp_called_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            frame_f3032e207776cc2cba16b96bd593de83->m_frame.f_lineno = 1;
            {
                PyObject *hard_module = IMPORT_HARD_OS();
                if (likely(hard_module != NULL)) {
                    tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[5]);


                } else {
                    tmp_expression_value_5 = NULL;
                }
            }
            if (tmp_expression_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_4);

                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[6]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_called_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_4);

                exception_lineno = 1;

                goto list_build_exception_1;
            }
            frame_f3032e207776cc2cba16b96bd593de83->m_frame.f_lineno = 1;
            tmp_args_element_value_4 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_5, mod_consts[9]);

            Py_DECREF(tmp_called_value_5);
            if (tmp_args_element_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_4);

                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_args_element_value_5 = mod_consts[10];
            frame_f3032e207776cc2cba16b96bd593de83->m_frame.f_lineno = 1;
            {
                PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
                tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
            }

            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_3, 2, tmp_list_element_1);
            frame_f3032e207776cc2cba16b96bd593de83->m_frame.f_lineno = 1;
            {
                PyObject *hard_module = IMPORT_HARD_OS();
                if (likely(hard_module != NULL)) {
                    tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[5]);


                } else {
                    tmp_expression_value_6 = NULL;
                }
            }
            if (tmp_expression_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[6]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_called_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            frame_f3032e207776cc2cba16b96bd593de83->m_frame.f_lineno = 1;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_6, mod_consts[11]);

            Py_DECREF(tmp_called_value_6);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_3, 3, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assign_source_3);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[14], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[15], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_assattr_value_3 == NULL)) {
            tmp_assattr_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        if (tmp_assattr_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_3 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_assattr_target_3 == NULL)) {
            tmp_assattr_target_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        assert(!(tmp_assattr_target_3 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[16], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = IMPORT_HARD_CTYPES();
        assert(!(tmp_assign_source_5 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_5);
        tmp_import_from_1__module = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_pycaw$api$audiopolicy,
                mod_consts[18],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[18]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_pycaw$api$audiopolicy,
                mod_consts[20],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[20]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_pycaw$api$audiopolicy,
                mod_consts[21],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[21]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_pycaw$api$audiopolicy,
                mod_consts[22],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[22]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_9);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = IMPORT_HARD_CTYPES__WINTYPES();
        assert(!(tmp_assign_source_10 == NULL));
        assert(tmp_import_from_2__module == NULL);
        Py_INCREF(tmp_assign_source_10);
        tmp_import_from_2__module = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_pycaw$api$audiopolicy,
                mod_consts[23],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[23]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_pycaw$api$audiopolicy,
                mod_consts[24],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[24]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_7,
                (PyObject *)moduledict_pycaw$api$audiopolicy,
                mod_consts[25],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[25]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_8,
                (PyObject *)moduledict_pycaw$api$audiopolicy,
                mod_consts[26],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[26]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_9 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_9,
                (PyObject *)moduledict_pycaw$api$audiopolicy,
                mod_consts[27],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts[27]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_15);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[28];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pycaw$api$audiopolicy;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[29];
        tmp_level_value_1 = mod_consts[19];
        frame_f3032e207776cc2cba16b96bd593de83->m_frame.f_lineno = 4;
        tmp_assign_source_16 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_16;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_10 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_10,
                (PyObject *)moduledict_pycaw$api$audiopolicy,
                mod_consts[30],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts[30]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_11 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_11,
                (PyObject *)moduledict_pycaw$api$audiopolicy,
                mod_consts[31],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts[31]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_12 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_12,
                (PyObject *)moduledict_pycaw$api$audiopolicy,
                mod_consts[32],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts[32]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_19);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_13;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[33];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_pycaw$api$audiopolicy;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[34];
        tmp_level_value_2 = mod_consts[35];
        frame_f3032e207776cc2cba16b96bd593de83->m_frame.f_lineno = 6;
        tmp_import_name_from_13 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_13,
                (PyObject *)moduledict_pycaw$api$audiopolicy,
                mod_consts[36],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts[36]);
        }

        Py_DECREF(tmp_import_name_from_13);
        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_20);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_4;
        }
        tmp_assign_source_21 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_21, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_22 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_4;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_7 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[19];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_4;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_4;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_24 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_24;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_8 = tmp_class_creation_1__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_8, mod_consts[37]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_4;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_9 = tmp_class_creation_1__metaclass;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[37]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_4;
        }
        tmp_tuple_element_2 = mod_consts[38];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_f3032e207776cc2cba16b96bd593de83->m_frame.f_lineno = 9;
        tmp_assign_source_25 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_25;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_10 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_10, mod_consts[39]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_4;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_name_value_3;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[40];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_11 = tmp_class_creation_1__metaclass;
        tmp_name_value_3 = mod_consts[41];
        tmp_default_value_1 = mod_consts[42];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_11, tmp_name_value_3, tmp_default_value_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_4;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_12;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_12 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_12 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[41]);
            Py_DECREF(tmp_expression_value_12);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 9;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 9;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_26;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_27;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_pycaw$api$audiopolicy$$$class__1_IAudioSessionEvents_9 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[43];
        tmp_res = PyObject_SetItem(locals_pycaw$api$audiopolicy$$$class__1_IAudioSessionEvents_9, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[38];
        tmp_res = PyObject_SetItem(locals_pycaw$api$audiopolicy$$$class__1_IAudioSessionEvents_9, mod_consts[45], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_6;
        }
        frame_c6b000d107d6583016dd8b565f506ce3_2 = MAKE_CLASS_FRAME(tstate, codeobj_c6b000d107d6583016dd8b565f506ce3, module_pycaw$api$audiopolicy, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_c6b000d107d6583016dd8b565f506ce3_2);
        assert(Py_REFCNT(frame_c6b000d107d6583016dd8b565f506ce3_2) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_8;
            tmp_called_value_8 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__1_IAudioSessionEvents_9, mod_consts[31]);

            if (tmp_called_value_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[31]);

                    if (unlikely(tmp_called_value_8 == NULL)) {
                        tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
                    }

                    if (tmp_called_value_8 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 10;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_8);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_c6b000d107d6583016dd8b565f506ce3_2->m_frame.f_lineno = 10;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_8, mod_consts[46]);

            Py_DECREF(tmp_called_value_8);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 10;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pycaw$api$audiopolicy$$$class__1_IAudioSessionEvents_9, mod_consts[47], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 10;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_args_element_value_10;
            PyObject *tmp_tuple_element_6;
            tmp_called_value_9 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__1_IAudioSessionEvents_9, mod_consts[30]);

            if (tmp_called_value_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[30]);

                    if (unlikely(tmp_called_value_9 == NULL)) {
                        tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
                    }

                    if (tmp_called_value_9 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 15;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_9);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_element_value_6 = MAKE_LIST_EMPTY(0);
            tmp_args_element_value_7 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__1_IAudioSessionEvents_9, mod_consts[18]);

            if (tmp_args_element_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_args_element_value_7 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_args_element_value_7 == NULL)) {
                        tmp_args_element_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                    }

                    if (tmp_args_element_value_7 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_9);
                        Py_DECREF(tmp_args_element_value_6);

                        exception_lineno = 17;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_args_element_value_7);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_element_value_8 = mod_consts[48];
            tmp_tuple_element_5 = MAKE_LIST1(mod_consts[49]);
            tmp_args_element_value_9 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM(tmp_args_element_value_9, 0, tmp_tuple_element_5);
            tmp_tuple_element_5 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__1_IAudioSessionEvents_9, mod_consts[26]);

            if (tmp_tuple_element_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[26]);

                    if (unlikely(tmp_tuple_element_5 == NULL)) {
                        tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
                    }

                    if (tmp_tuple_element_5 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 19;
                        type_description_2 = "o";
                        goto tuple_build_exception_2;
                    }
                    Py_INCREF(tmp_tuple_element_5);
                } else {
                    goto tuple_build_exception_2;
                }
            }

            PyTuple_SET_ITEM(tmp_args_element_value_9, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = mod_consts[50];
            PyTuple_SET_ITEM0(tmp_args_element_value_9, 2, tmp_tuple_element_5);
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_9);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_tuple_element_6 = MAKE_LIST1(mod_consts[49]);
            tmp_args_element_value_10 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_called_value_10;
                PyObject *tmp_args_element_value_11;
                PyTuple_SET_ITEM(tmp_args_element_value_10, 0, tmp_tuple_element_6);
                tmp_called_value_10 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__1_IAudioSessionEvents_9, mod_consts[20]);

                if (tmp_called_value_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[20]);

                        if (unlikely(tmp_called_value_10 == NULL)) {
                            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                        }

                        if (tmp_called_value_10 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 20;
                            type_description_2 = "o";
                            goto tuple_build_exception_3;
                        }
                        Py_INCREF(tmp_called_value_10);
                    } else {
                        goto tuple_build_exception_3;
                    }
                }

                tmp_args_element_value_11 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__1_IAudioSessionEvents_9, mod_consts[31]);

                if (tmp_args_element_value_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_11 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[31]);

                        if (unlikely(tmp_args_element_value_11 == NULL)) {
                            tmp_args_element_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
                        }

                        if (tmp_args_element_value_11 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_10);

                            exception_lineno = 20;
                            type_description_2 = "o";
                            goto tuple_build_exception_3;
                        }
                        Py_INCREF(tmp_args_element_value_11);
                    } else {
                        goto tuple_build_exception_3;
                    }
                }

                frame_c6b000d107d6583016dd8b565f506ce3_2->m_frame.f_lineno = 20;
                tmp_tuple_element_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_11);
                Py_DECREF(tmp_called_value_10);
                Py_DECREF(tmp_args_element_value_11);
                if (tmp_tuple_element_6 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 20;
                    type_description_2 = "o";
                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_args_element_value_10, 1, tmp_tuple_element_6);
                tmp_tuple_element_6 = mod_consts[51];
                PyTuple_SET_ITEM0(tmp_args_element_value_10, 2, tmp_tuple_element_6);
            }
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            frame_c6b000d107d6583016dd8b565f506ce3_2->m_frame.f_lineno = 15;
            {
                PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_9, call_args);
            }

            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_10);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dictset_value = MAKE_TUPLE_EMPTY(7);
            {
                PyObject *tmp_called_value_11;
                PyObject *tmp_args_element_value_12;
                PyObject *tmp_args_element_value_13;
                PyObject *tmp_args_element_value_14;
                PyObject *tmp_args_element_value_15;
                PyObject *tmp_tuple_element_7;
                PyObject *tmp_args_element_value_16;
                PyObject *tmp_tuple_element_8;
                PyObject *tmp_called_value_13;
                PyObject *tmp_args_element_value_18;
                PyObject *tmp_args_element_value_19;
                PyObject *tmp_args_element_value_20;
                PyObject *tmp_args_element_value_21;
                PyObject *tmp_tuple_element_9;
                PyObject *tmp_args_element_value_22;
                PyObject *tmp_tuple_element_10;
                PyObject *tmp_args_element_value_23;
                PyObject *tmp_tuple_element_11;
                PyObject *tmp_called_value_15;
                PyObject *tmp_args_element_value_25;
                PyObject *tmp_args_element_value_26;
                PyObject *tmp_args_element_value_27;
                PyObject *tmp_args_element_value_28;
                PyObject *tmp_tuple_element_12;
                PyObject *tmp_args_element_value_29;
                PyObject *tmp_tuple_element_13;
                PyObject *tmp_args_element_value_30;
                PyObject *tmp_tuple_element_14;
                PyObject *tmp_args_element_value_31;
                PyObject *tmp_tuple_element_15;
                PyObject *tmp_called_value_17;
                PyObject *tmp_args_element_value_33;
                PyObject *tmp_args_element_value_34;
                PyObject *tmp_args_element_value_35;
                PyObject *tmp_args_element_value_36;
                PyObject *tmp_tuple_element_16;
                PyObject *tmp_args_element_value_38;
                PyObject *tmp_tuple_element_17;
                PyObject *tmp_called_value_20;
                PyObject *tmp_args_element_value_40;
                PyObject *tmp_args_element_value_41;
                PyObject *tmp_args_element_value_42;
                PyObject *tmp_args_element_value_43;
                PyObject *tmp_tuple_element_18;
                PyObject *tmp_called_value_21;
                PyObject *tmp_args_element_value_44;
                PyObject *tmp_args_element_value_45;
                PyObject *tmp_args_element_value_46;
                PyObject *tmp_args_element_value_47;
                PyObject *tmp_tuple_element_19;
                PyTuple_SET_ITEM(tmp_dictset_value, 0, tmp_tuple_element_4);
                tmp_called_value_11 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__1_IAudioSessionEvents_9, mod_consts[30]);

                if (tmp_called_value_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[30]);

                        if (unlikely(tmp_called_value_11 == NULL)) {
                            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
                        }

                        if (tmp_called_value_11 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 25;
                            type_description_2 = "o";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_called_value_11);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                tmp_args_element_value_12 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_13 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__1_IAudioSessionEvents_9, mod_consts[18]);

                if (tmp_args_element_value_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_13 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[18]);

                        if (unlikely(tmp_args_element_value_13 == NULL)) {
                            tmp_args_element_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                        }

                        if (tmp_args_element_value_13 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_11);
                            Py_DECREF(tmp_args_element_value_12);

                            exception_lineno = 27;
                            type_description_2 = "o";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_args_element_value_13);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                tmp_args_element_value_14 = mod_consts[52];
                tmp_tuple_element_7 = MAKE_LIST1(mod_consts[49]);
                tmp_args_element_value_15 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM(tmp_args_element_value_15, 0, tmp_tuple_element_7);
                tmp_tuple_element_7 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__1_IAudioSessionEvents_9, mod_consts[26]);

                if (tmp_tuple_element_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[26]);

                        if (unlikely(tmp_tuple_element_7 == NULL)) {
                            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
                        }

                        if (tmp_tuple_element_7 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 29;
                            type_description_2 = "o";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_tuple_element_7);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_element_value_15, 1, tmp_tuple_element_7);
                tmp_tuple_element_7 = mod_consts[53];
                PyTuple_SET_ITEM0(tmp_args_element_value_15, 2, tmp_tuple_element_7);
                goto tuple_build_noexception_4;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_5:;
                Py_DECREF(tmp_called_value_11);
                Py_DECREF(tmp_args_element_value_12);
                Py_DECREF(tmp_args_element_value_13);
                Py_DECREF(tmp_args_element_value_15);
                goto tuple_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_4:;
                tmp_tuple_element_8 = MAKE_LIST1(mod_consts[49]);
                tmp_args_element_value_16 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_12;
                    PyObject *tmp_args_element_value_17;
                    PyTuple_SET_ITEM(tmp_args_element_value_16, 0, tmp_tuple_element_8);
                    tmp_called_value_12 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__1_IAudioSessionEvents_9, mod_consts[20]);

                    if (tmp_called_value_12 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[20]);

                            if (unlikely(tmp_called_value_12 == NULL)) {
                                tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                            }

                            if (tmp_called_value_12 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 30;
                                type_description_2 = "o";
                                goto tuple_build_exception_6;
                            }
                            Py_INCREF(tmp_called_value_12);
                        } else {
                            goto tuple_build_exception_6;
                        }
                    }

                    tmp_args_element_value_17 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__1_IAudioSessionEvents_9, mod_consts[31]);

                    if (tmp_args_element_value_17 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_17 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[31]);

                            if (unlikely(tmp_args_element_value_17 == NULL)) {
                                tmp_args_element_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
                            }

                            if (tmp_args_element_value_17 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_12);

                                exception_lineno = 30;
                                type_description_2 = "o";
                                goto tuple_build_exception_6;
                            }
                            Py_INCREF(tmp_args_element_value_17);
                        } else {
                            goto tuple_build_exception_6;
                        }
                    }

                    frame_c6b000d107d6583016dd8b565f506ce3_2->m_frame.f_lineno = 30;
                    tmp_tuple_element_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_17);
                    Py_DECREF(tmp_called_value_12);
                    Py_DECREF(tmp_args_element_value_17);
                    if (tmp_tuple_element_8 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 30;
                        type_description_2 = "o";
                        goto tuple_build_exception_6;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_16, 1, tmp_tuple_element_8);
                    tmp_tuple_element_8 = mod_consts[51];
                    PyTuple_SET_ITEM0(tmp_args_element_value_16, 2, tmp_tuple_element_8);
                }
                goto tuple_build_noexception_5;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_6:;
                Py_DECREF(tmp_called_value_11);
                Py_DECREF(tmp_args_element_value_12);
                Py_DECREF(tmp_args_element_value_13);
                Py_DECREF(tmp_args_element_value_15);
                Py_DECREF(tmp_args_element_value_16);
                goto tuple_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_5:;
                frame_c6b000d107d6583016dd8b565f506ce3_2->m_frame.f_lineno = 25;
                {
                    PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16};
                    tmp_tuple_element_4 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_11, call_args);
                }

                Py_DECREF(tmp_called_value_11);
                Py_DECREF(tmp_args_element_value_12);
                Py_DECREF(tmp_args_element_value_13);
                Py_DECREF(tmp_args_element_value_15);
                Py_DECREF(tmp_args_element_value_16);
                if (tmp_tuple_element_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 25;
                    type_description_2 = "o";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 1, tmp_tuple_element_4);
                tmp_called_value_13 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__1_IAudioSessionEvents_9, mod_consts[30]);

                if (tmp_called_value_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[30]);

                        if (unlikely(tmp_called_value_13 == NULL)) {
                            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
                        }

                        if (tmp_called_value_13 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 36;
                            type_description_2 = "o";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_called_value_13);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                tmp_args_element_value_18 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_19 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__1_IAudioSessionEvents_9, mod_consts[18]);

                if (tmp_args_element_value_19 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_19 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[18]);

                        if (unlikely(tmp_args_element_value_19 == NULL)) {
                            tmp_args_element_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                        }

                        if (tmp_args_element_value_19 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_13);
                            Py_DECREF(tmp_args_element_value_18);

                            exception_lineno = 38;
                            type_description_2 = "o";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_args_element_value_19);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                tmp_args_element_value_20 = mod_consts[54];
                tmp_tuple_element_9 = MAKE_LIST1(mod_consts[49]);
                tmp_args_element_value_21 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM(tmp_args_element_value_21, 0, tmp_tuple_element_9);
                tmp_tuple_element_9 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__1_IAudioSessionEvents_9, mod_consts[21]);

                if (tmp_tuple_element_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[21]);

                        if (unlikely(tmp_tuple_element_9 == NULL)) {
                            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
                        }

                        if (tmp_tuple_element_9 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 40;
                            type_description_2 = "o";
                            goto tuple_build_exception_7;
                        }
                        Py_INCREF(tmp_tuple_element_9);
                    } else {
                        goto tuple_build_exception_7;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_element_value_21, 1, tmp_tuple_element_9);
                tmp_tuple_element_9 = mod_consts[55];
                PyTuple_SET_ITEM0(tmp_args_element_value_21, 2, tmp_tuple_element_9);
                goto tuple_build_noexception_6;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_7:;
                Py_DECREF(tmp_called_value_13);
                Py_DECREF(tmp_args_element_value_18);
                Py_DECREF(tmp_args_element_value_19);
                Py_DECREF(tmp_args_element_value_21);
                goto tuple_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_6:;
                tmp_tuple_element_10 = MAKE_LIST1(mod_consts[49]);
                tmp_args_element_value_22 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM(tmp_args_element_value_22, 0, tmp_tuple_element_10);
                tmp_tuple_element_10 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__1_IAudioSessionEvents_9, mod_consts[23]);

                if (tmp_tuple_element_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[23]);

                        if (unlikely(tmp_tuple_element_10 == NULL)) {
                            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
                        }

                        if (tmp_tuple_element_10 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 41;
                            type_description_2 = "o";
                            goto tuple_build_exception_8;
                        }
                        Py_INCREF(tmp_tuple_element_10);
                    } else {
                        goto tuple_build_exception_8;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_element_value_22, 1, tmp_tuple_element_10);
                tmp_tuple_element_10 = mod_consts[56];
                PyTuple_SET_ITEM0(tmp_args_element_value_22, 2, tmp_tuple_element_10);
                goto tuple_build_noexception_7;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_8:;
                Py_DECREF(tmp_called_value_13);
                Py_DECREF(tmp_args_element_value_18);
                Py_DECREF(tmp_args_element_value_19);
                Py_DECREF(tmp_args_element_value_21);
                Py_DECREF(tmp_args_element_value_22);
                goto tuple_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_7:;
                tmp_tuple_element_11 = MAKE_LIST1(mod_consts[49]);
                tmp_args_element_value_23 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_14;
                    PyObject *tmp_args_element_value_24;
                    PyTuple_SET_ITEM(tmp_args_element_value_23, 0, tmp_tuple_element_11);
                    tmp_called_value_14 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__1_IAudioSessionEvents_9, mod_consts[20]);

                    if (tmp_called_value_14 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[20]);

                            if (unlikely(tmp_called_value_14 == NULL)) {
                                tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                            }

                            if (tmp_called_value_14 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 42;
                                type_description_2 = "o";
                                goto tuple_build_exception_9;
                            }
                            Py_INCREF(tmp_called_value_14);
                        } else {
                            goto tuple_build_exception_9;
                        }
                    }

                    tmp_args_element_value_24 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__1_IAudioSessionEvents_9, mod_consts[31]);

                    if (tmp_args_element_value_24 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_24 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[31]);

                            if (unlikely(tmp_args_element_value_24 == NULL)) {
                                tmp_args_element_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
                            }

                            if (tmp_args_element_value_24 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_14);

                                exception_lineno = 42;
                                type_description_2 = "o";
                                goto tuple_build_exception_9;
                            }
                            Py_INCREF(tmp_args_element_value_24);
                        } else {
                            goto tuple_build_exception_9;
                        }
                    }

                    frame_c6b000d107d6583016dd8b565f506ce3_2->m_frame.f_lineno = 42;
                    tmp_tuple_element_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_24);
                    Py_DECREF(tmp_called_value_14);
                    Py_DECREF(tmp_args_element_value_24);
                    if (tmp_tuple_element_11 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 42;
                        type_description_2 = "o";
                        goto tuple_build_exception_9;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_23, 1, tmp_tuple_element_11);
                    tmp_tuple_element_11 = mod_consts[51];
                    PyTuple_SET_ITEM0(tmp_args_element_value_23, 2, tmp_tuple_element_11);
                }
                goto tuple_build_noexception_8;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_9:;
                Py_DECREF(tmp_called_value_13);
                Py_DECREF(tmp_args_element_value_18);
                Py_DECREF(tmp_args_element_value_19);
                Py_DECREF(tmp_args_element_value_21);
                Py_DECREF(tmp_args_element_value_22);
                Py_DECREF(tmp_args_element_value_23);
                goto tuple_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_8:;
                frame_c6b000d107d6583016dd8b565f506ce3_2->m_frame.f_lineno = 36;
                {
                    PyObject *call_args[] = {tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21, tmp_args_element_value_22, tmp_args_element_value_23};
                    tmp_tuple_element_4 = CALL_FUNCTION_WITH_ARGS6(tstate, tmp_called_value_13, call_args);
                }

                Py_DECREF(tmp_called_value_13);
                Py_DECREF(tmp_args_element_value_18);
                Py_DECREF(tmp_args_element_value_19);
                Py_DECREF(tmp_args_element_value_21);
                Py_DECREF(tmp_args_element_value_22);
                Py_DECREF(tmp_args_element_value_23);
                if (tmp_tuple_element_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 36;
                    type_description_2 = "o";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 2, tmp_tuple_element_4);
                tmp_called_value_15 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__1_IAudioSessionEvents_9, mod_consts[30]);

                if (tmp_called_value_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[30]);

                        if (unlikely(tmp_called_value_15 == NULL)) {
                            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
                        }

                        if (tmp_called_value_15 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 49;
                            type_description_2 = "o";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_called_value_15);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                tmp_args_element_value_25 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_26 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__1_IAudioSessionEvents_9, mod_consts[18]);

                if (tmp_args_element_value_26 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_26 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[18]);

                        if (unlikely(tmp_args_element_value_26 == NULL)) {
                            tmp_args_element_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                        }

                        if (tmp_args_element_value_26 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_15);
                            Py_DECREF(tmp_args_element_value_25);

                            exception_lineno = 51;
                            type_description_2 = "o";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_args_element_value_26);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                tmp_args_element_value_27 = mod_consts[57];
                tmp_tuple_element_12 = MAKE_LIST1(mod_consts[49]);
                tmp_args_element_value_28 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM(tmp_args_element_value_28, 0, tmp_tuple_element_12);
                tmp_tuple_element_12 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__1_IAudioSessionEvents_9, mod_consts[24]);

                if (tmp_tuple_element_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[24]);

                        if (unlikely(tmp_tuple_element_12 == NULL)) {
                            tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                        }

                        if (tmp_tuple_element_12 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 53;
                            type_description_2 = "o";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_tuple_element_12);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_element_value_28, 1, tmp_tuple_element_12);
                tmp_tuple_element_12 = mod_consts[58];
                PyTuple_SET_ITEM0(tmp_args_element_value_28, 2, tmp_tuple_element_12);
                goto tuple_build_noexception_9;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_10:;
                Py_DECREF(tmp_called_value_15);
                Py_DECREF(tmp_args_element_value_25);
                Py_DECREF(tmp_args_element_value_26);
                Py_DECREF(tmp_args_element_value_28);
                goto tuple_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_9:;
                tmp_tuple_element_13 = MAKE_LIST1(mod_consts[49]);
                tmp_args_element_value_29 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_mult_expr_left_1;
                    PyObject *tmp_mult_expr_right_1;
                    PyTuple_SET_ITEM(tmp_args_element_value_29, 0, tmp_tuple_element_13);
                    tmp_mult_expr_left_1 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__1_IAudioSessionEvents_9, mod_consts[21]);

                    if (tmp_mult_expr_left_1 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_mult_expr_left_1 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[21]);

                            if (unlikely(tmp_mult_expr_left_1 == NULL)) {
                                tmp_mult_expr_left_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
                            }

                            if (tmp_mult_expr_left_1 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 54;
                                type_description_2 = "o";
                                goto tuple_build_exception_11;
                            }
                            Py_INCREF(tmp_mult_expr_left_1);
                        } else {
                            goto tuple_build_exception_11;
                        }
                    }

                    tmp_mult_expr_right_1 = mod_consts[59];
                    tmp_tuple_element_13 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
                    Py_DECREF(tmp_mult_expr_left_1);
                    if (tmp_tuple_element_13 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 54;
                        type_description_2 = "o";
                        goto tuple_build_exception_11;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_29, 1, tmp_tuple_element_13);
                    tmp_tuple_element_13 = mod_consts[60];
                    PyTuple_SET_ITEM0(tmp_args_element_value_29, 2, tmp_tuple_element_13);
                }
                goto tuple_build_noexception_10;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_11:;
                Py_DECREF(tmp_called_value_15);
                Py_DECREF(tmp_args_element_value_25);
                Py_DECREF(tmp_args_element_value_26);
                Py_DECREF(tmp_args_element_value_28);
                Py_DECREF(tmp_args_element_value_29);
                goto tuple_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_10:;
                tmp_tuple_element_14 = MAKE_LIST1(mod_consts[49]);
                tmp_args_element_value_30 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM(tmp_args_element_value_30, 0, tmp_tuple_element_14);
                tmp_tuple_element_14 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__1_IAudioSessionEvents_9, mod_consts[24]);

                if (tmp_tuple_element_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_14 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[24]);

                        if (unlikely(tmp_tuple_element_14 == NULL)) {
                            tmp_tuple_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                        }

                        if (tmp_tuple_element_14 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 55;
                            type_description_2 = "o";
                            goto tuple_build_exception_12;
                        }
                        Py_INCREF(tmp_tuple_element_14);
                    } else {
                        goto tuple_build_exception_12;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_element_value_30, 1, tmp_tuple_element_14);
                tmp_tuple_element_14 = mod_consts[61];
                PyTuple_SET_ITEM0(tmp_args_element_value_30, 2, tmp_tuple_element_14);
                goto tuple_build_noexception_11;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_12:;
                Py_DECREF(tmp_called_value_15);
                Py_DECREF(tmp_args_element_value_25);
                Py_DECREF(tmp_args_element_value_26);
                Py_DECREF(tmp_args_element_value_28);
                Py_DECREF(tmp_args_element_value_29);
                Py_DECREF(tmp_args_element_value_30);
                goto tuple_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_11:;
                tmp_tuple_element_15 = MAKE_LIST1(mod_consts[49]);
                tmp_args_element_value_31 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_16;
                    PyObject *tmp_args_element_value_32;
                    PyTuple_SET_ITEM(tmp_args_element_value_31, 0, tmp_tuple_element_15);
                    tmp_called_value_16 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__1_IAudioSessionEvents_9, mod_consts[20]);

                    if (tmp_called_value_16 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[20]);

                            if (unlikely(tmp_called_value_16 == NULL)) {
                                tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                            }

                            if (tmp_called_value_16 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 56;
                                type_description_2 = "o";
                                goto tuple_build_exception_13;
                            }
                            Py_INCREF(tmp_called_value_16);
                        } else {
                            goto tuple_build_exception_13;
                        }
                    }

                    tmp_args_element_value_32 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__1_IAudioSessionEvents_9, mod_consts[31]);

                    if (tmp_args_element_value_32 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_32 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[31]);

                            if (unlikely(tmp_args_element_value_32 == NULL)) {
                                tmp_args_element_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
                            }

                            if (tmp_args_element_value_32 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_16);

                                exception_lineno = 56;
                                type_description_2 = "o";
                                goto tuple_build_exception_13;
                            }
                            Py_INCREF(tmp_args_element_value_32);
                        } else {
                            goto tuple_build_exception_13;
                        }
                    }

                    frame_c6b000d107d6583016dd8b565f506ce3_2->m_frame.f_lineno = 56;
                    tmp_tuple_element_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_32);
                    Py_DECREF(tmp_called_value_16);
                    Py_DECREF(tmp_args_element_value_32);
                    if (tmp_tuple_element_15 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 56;
                        type_description_2 = "o";
                        goto tuple_build_exception_13;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_31, 1, tmp_tuple_element_15);
                    tmp_tuple_element_15 = mod_consts[51];
                    PyTuple_SET_ITEM0(tmp_args_element_value_31, 2, tmp_tuple_element_15);
                }
                goto tuple_build_noexception_12;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_13:;
                Py_DECREF(tmp_called_value_15);
                Py_DECREF(tmp_args_element_value_25);
                Py_DECREF(tmp_args_element_value_26);
                Py_DECREF(tmp_args_element_value_28);
                Py_DECREF(tmp_args_element_value_29);
                Py_DECREF(tmp_args_element_value_30);
                Py_DECREF(tmp_args_element_value_31);
                goto tuple_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_12:;
                frame_c6b000d107d6583016dd8b565f506ce3_2->m_frame.f_lineno = 49;
                {
                    PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_26, tmp_args_element_value_27, tmp_args_element_value_28, tmp_args_element_value_29, tmp_args_element_value_30, tmp_args_element_value_31};
                    tmp_tuple_element_4 = CALL_FUNCTION_WITH_ARGS7(tstate, tmp_called_value_15, call_args);
                }

                Py_DECREF(tmp_called_value_15);
                Py_DECREF(tmp_args_element_value_25);
                Py_DECREF(tmp_args_element_value_26);
                Py_DECREF(tmp_args_element_value_28);
                Py_DECREF(tmp_args_element_value_29);
                Py_DECREF(tmp_args_element_value_30);
                Py_DECREF(tmp_args_element_value_31);
                if (tmp_tuple_element_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 49;
                    type_description_2 = "o";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 3, tmp_tuple_element_4);
                tmp_called_value_17 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__1_IAudioSessionEvents_9, mod_consts[30]);

                if (tmp_called_value_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[30]);

                        if (unlikely(tmp_called_value_17 == NULL)) {
                            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
                        }

                        if (tmp_called_value_17 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 61;
                            type_description_2 = "o";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_called_value_17);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                tmp_args_element_value_33 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_34 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__1_IAudioSessionEvents_9, mod_consts[18]);

                if (tmp_args_element_value_34 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_34 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[18]);

                        if (unlikely(tmp_args_element_value_34 == NULL)) {
                            tmp_args_element_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                        }

                        if (tmp_args_element_value_34 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_17);
                            Py_DECREF(tmp_args_element_value_33);

                            exception_lineno = 63;
                            type_description_2 = "o";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_args_element_value_34);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                tmp_args_element_value_35 = mod_consts[62];
                tmp_tuple_element_16 = MAKE_LIST1(mod_consts[49]);
                tmp_args_element_value_36 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_18;
                    PyObject *tmp_args_element_value_37;
                    PyTuple_SET_ITEM(tmp_args_element_value_36, 0, tmp_tuple_element_16);
                    tmp_called_value_18 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__1_IAudioSessionEvents_9, mod_consts[20]);

                    if (tmp_called_value_18 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[20]);

                            if (unlikely(tmp_called_value_18 == NULL)) {
                                tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                            }

                            if (tmp_called_value_18 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 65;
                                type_description_2 = "o";
                                goto tuple_build_exception_14;
                            }
                            Py_INCREF(tmp_called_value_18);
                        } else {
                            goto tuple_build_exception_14;
                        }
                    }

                    tmp_args_element_value_37 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__1_IAudioSessionEvents_9, mod_consts[31]);

                    if (tmp_args_element_value_37 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_37 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[31]);

                            if (unlikely(tmp_args_element_value_37 == NULL)) {
                                tmp_args_element_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
                            }

                            if (tmp_args_element_value_37 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_18);

                                exception_lineno = 65;
                                type_description_2 = "o";
                                goto tuple_build_exception_14;
                            }
                            Py_INCREF(tmp_args_element_value_37);
                        } else {
                            goto tuple_build_exception_14;
                        }
                    }

                    frame_c6b000d107d6583016dd8b565f506ce3_2->m_frame.f_lineno = 65;
                    tmp_tuple_element_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_37);
                    Py_DECREF(tmp_called_value_18);
                    Py_DECREF(tmp_args_element_value_37);
                    if (tmp_tuple_element_16 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 65;
                        type_description_2 = "o";
                        goto tuple_build_exception_14;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_36, 1, tmp_tuple_element_16);
                    tmp_tuple_element_16 = mod_consts[63];
                    PyTuple_SET_ITEM0(tmp_args_element_value_36, 2, tmp_tuple_element_16);
                }
                goto tuple_build_noexception_13;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_14:;
                Py_DECREF(tmp_called_value_17);
                Py_DECREF(tmp_args_element_value_33);
                Py_DECREF(tmp_args_element_value_34);
                Py_DECREF(tmp_args_element_value_36);
                goto tuple_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_13:;
                tmp_tuple_element_17 = MAKE_LIST1(mod_consts[49]);
                tmp_args_element_value_38 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_19;
                    PyObject *tmp_args_element_value_39;
                    PyTuple_SET_ITEM(tmp_args_element_value_38, 0, tmp_tuple_element_17);
                    tmp_called_value_19 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__1_IAudioSessionEvents_9, mod_consts[20]);

                    if (tmp_called_value_19 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[20]);

                            if (unlikely(tmp_called_value_19 == NULL)) {
                                tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                            }

                            if (tmp_called_value_19 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 66;
                                type_description_2 = "o";
                                goto tuple_build_exception_15;
                            }
                            Py_INCREF(tmp_called_value_19);
                        } else {
                            goto tuple_build_exception_15;
                        }
                    }

                    tmp_args_element_value_39 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__1_IAudioSessionEvents_9, mod_consts[31]);

                    if (tmp_args_element_value_39 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_39 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[31]);

                            if (unlikely(tmp_args_element_value_39 == NULL)) {
                                tmp_args_element_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
                            }

                            if (tmp_args_element_value_39 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_19);

                                exception_lineno = 66;
                                type_description_2 = "o";
                                goto tuple_build_exception_15;
                            }
                            Py_INCREF(tmp_args_element_value_39);
                        } else {
                            goto tuple_build_exception_15;
                        }
                    }

                    frame_c6b000d107d6583016dd8b565f506ce3_2->m_frame.f_lineno = 66;
                    tmp_tuple_element_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_39);
                    Py_DECREF(tmp_called_value_19);
                    Py_DECREF(tmp_args_element_value_39);
                    if (tmp_tuple_element_17 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 66;
                        type_description_2 = "o";
                        goto tuple_build_exception_15;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_38, 1, tmp_tuple_element_17);
                    tmp_tuple_element_17 = mod_consts[51];
                    PyTuple_SET_ITEM0(tmp_args_element_value_38, 2, tmp_tuple_element_17);
                }
                goto tuple_build_noexception_14;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_15:;
                Py_DECREF(tmp_called_value_17);
                Py_DECREF(tmp_args_element_value_33);
                Py_DECREF(tmp_args_element_value_34);
                Py_DECREF(tmp_args_element_value_36);
                Py_DECREF(tmp_args_element_value_38);
                goto tuple_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_14:;
                frame_c6b000d107d6583016dd8b565f506ce3_2->m_frame.f_lineno = 61;
                {
                    PyObject *call_args[] = {tmp_args_element_value_33, tmp_args_element_value_34, tmp_args_element_value_35, tmp_args_element_value_36, tmp_args_element_value_38};
                    tmp_tuple_element_4 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_17, call_args);
                }

                Py_DECREF(tmp_called_value_17);
                Py_DECREF(tmp_args_element_value_33);
                Py_DECREF(tmp_args_element_value_34);
                Py_DECREF(tmp_args_element_value_36);
                Py_DECREF(tmp_args_element_value_38);
                if (tmp_tuple_element_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 61;
                    type_description_2 = "o";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 4, tmp_tuple_element_4);
                tmp_called_value_20 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__1_IAudioSessionEvents_9, mod_consts[30]);

                if (tmp_called_value_20 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[30]);

                        if (unlikely(tmp_called_value_20 == NULL)) {
                            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
                        }

                        if (tmp_called_value_20 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 70;
                            type_description_2 = "o";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_called_value_20);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                tmp_args_element_value_40 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_41 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__1_IAudioSessionEvents_9, mod_consts[18]);

                if (tmp_args_element_value_41 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_41 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[18]);

                        if (unlikely(tmp_args_element_value_41 == NULL)) {
                            tmp_args_element_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                        }

                        if (tmp_args_element_value_41 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_20);
                            Py_DECREF(tmp_args_element_value_40);

                            exception_lineno = 70;
                            type_description_2 = "o";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_args_element_value_41);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                tmp_args_element_value_42 = mod_consts[64];
                tmp_tuple_element_18 = MAKE_LIST1(mod_consts[49]);
                tmp_args_element_value_43 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM(tmp_args_element_value_43, 0, tmp_tuple_element_18);
                tmp_tuple_element_18 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__1_IAudioSessionEvents_9, mod_consts[24]);

                if (tmp_tuple_element_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_18 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[24]);

                        if (unlikely(tmp_tuple_element_18 == NULL)) {
                            tmp_tuple_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                        }

                        if (tmp_tuple_element_18 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 70;
                            type_description_2 = "o";
                            goto tuple_build_exception_16;
                        }
                        Py_INCREF(tmp_tuple_element_18);
                    } else {
                        goto tuple_build_exception_16;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_element_value_43, 1, tmp_tuple_element_18);
                tmp_tuple_element_18 = mod_consts[65];
                PyTuple_SET_ITEM0(tmp_args_element_value_43, 2, tmp_tuple_element_18);
                goto tuple_build_noexception_15;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_16:;
                Py_DECREF(tmp_called_value_20);
                Py_DECREF(tmp_args_element_value_40);
                Py_DECREF(tmp_args_element_value_41);
                Py_DECREF(tmp_args_element_value_43);
                goto tuple_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_15:;
                frame_c6b000d107d6583016dd8b565f506ce3_2->m_frame.f_lineno = 70;
                {
                    PyObject *call_args[] = {tmp_args_element_value_40, tmp_args_element_value_41, tmp_args_element_value_42, tmp_args_element_value_43};
                    tmp_tuple_element_4 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_20, call_args);
                }

                Py_DECREF(tmp_called_value_20);
                Py_DECREF(tmp_args_element_value_40);
                Py_DECREF(tmp_args_element_value_41);
                Py_DECREF(tmp_args_element_value_43);
                if (tmp_tuple_element_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 70;
                    type_description_2 = "o";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 5, tmp_tuple_element_4);
                tmp_called_value_21 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__1_IAudioSessionEvents_9, mod_consts[30]);

                if (tmp_called_value_21 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[30]);

                        if (unlikely(tmp_called_value_21 == NULL)) {
                            tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
                        }

                        if (tmp_called_value_21 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 73;
                            type_description_2 = "o";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_called_value_21);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                tmp_args_element_value_44 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_45 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__1_IAudioSessionEvents_9, mod_consts[18]);

                if (tmp_args_element_value_45 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_45 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[18]);

                        if (unlikely(tmp_args_element_value_45 == NULL)) {
                            tmp_args_element_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                        }

                        if (tmp_args_element_value_45 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_21);
                            Py_DECREF(tmp_args_element_value_44);

                            exception_lineno = 74;
                            type_description_2 = "o";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_args_element_value_45);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                tmp_args_element_value_46 = mod_consts[66];
                tmp_tuple_element_19 = MAKE_LIST1(mod_consts[49]);
                tmp_args_element_value_47 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM(tmp_args_element_value_47, 0, tmp_tuple_element_19);
                tmp_tuple_element_19 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__1_IAudioSessionEvents_9, mod_consts[24]);

                if (tmp_tuple_element_19 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_19 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[24]);

                        if (unlikely(tmp_tuple_element_19 == NULL)) {
                            tmp_tuple_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                        }

                        if (tmp_tuple_element_19 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 74;
                            type_description_2 = "o";
                            goto tuple_build_exception_17;
                        }
                        Py_INCREF(tmp_tuple_element_19);
                    } else {
                        goto tuple_build_exception_17;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_element_value_47, 1, tmp_tuple_element_19);
                tmp_tuple_element_19 = mod_consts[67];
                PyTuple_SET_ITEM0(tmp_args_element_value_47, 2, tmp_tuple_element_19);
                goto tuple_build_noexception_16;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_17:;
                Py_DECREF(tmp_called_value_21);
                Py_DECREF(tmp_args_element_value_44);
                Py_DECREF(tmp_args_element_value_45);
                Py_DECREF(tmp_args_element_value_47);
                goto tuple_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_16:;
                frame_c6b000d107d6583016dd8b565f506ce3_2->m_frame.f_lineno = 73;
                {
                    PyObject *call_args[] = {tmp_args_element_value_44, tmp_args_element_value_45, tmp_args_element_value_46, tmp_args_element_value_47};
                    tmp_tuple_element_4 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_21, call_args);
                }

                Py_DECREF(tmp_called_value_21);
                Py_DECREF(tmp_args_element_value_44);
                Py_DECREF(tmp_args_element_value_45);
                Py_DECREF(tmp_args_element_value_47);
                if (tmp_tuple_element_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 73;
                    type_description_2 = "o";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 6, tmp_tuple_element_4);
            }
            goto tuple_build_noexception_17;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_4:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_17:;
            tmp_res = PyObject_SetItem(locals_pycaw$api$audiopolicy$$$class__1_IAudioSessionEvents_9, mod_consts[68], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 11;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c6b000d107d6583016dd8b565f506ce3_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c6b000d107d6583016dd8b565f506ce3_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c6b000d107d6583016dd8b565f506ce3_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c6b000d107d6583016dd8b565f506ce3_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_c6b000d107d6583016dd8b565f506ce3_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_6;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 9;

                goto try_except_handler_6;
            }
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_pycaw$api$audiopolicy$$$class__1_IAudioSessionEvents_9, mod_consts[69], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_6;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_called_value_22;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_20;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_22 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_20 = mod_consts[38];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_20);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_20 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_20);
            tmp_tuple_element_20 = locals_pycaw$api$audiopolicy$$$class__1_IAudioSessionEvents_9;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_20);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_f3032e207776cc2cba16b96bd593de83->m_frame.f_lineno = 9;
            tmp_assign_source_28 = CALL_FUNCTION(tstate, tmp_called_value_22, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 9;

                goto try_except_handler_6;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_28;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_27 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_27);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_pycaw$api$audiopolicy$$$class__1_IAudioSessionEvents_9);
        locals_pycaw$api$audiopolicy$$$class__1_IAudioSessionEvents_9 = NULL;
        goto try_return_handler_5;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pycaw$api$audiopolicy$$$class__1_IAudioSessionEvents_9);
        locals_pycaw$api$audiopolicy$$$class__1_IAudioSessionEvents_9 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 9;
        goto try_except_handler_4;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_27);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_class_creation_1__bases_orig);
    Py_DECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_1__bases);
    Py_DECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_tuple_element_21;
        tmp_tuple_element_21 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_tuple_element_21 == NULL)) {
            tmp_tuple_element_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_tuple_element_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_7;
        }
        tmp_assign_source_29 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_29, 0, tmp_tuple_element_21);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_30 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_7;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_13 = tmp_class_creation_2__bases;
        tmp_subscript_value_2 = mod_consts[19];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_13, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_7;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_7;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_32 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_32;
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_14 = tmp_class_creation_2__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_14, mod_consts[37]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_7;
        }
        tmp_condition_result_6 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_22;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_15 = tmp_class_creation_2__metaclass;
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[37]);
        if (tmp_called_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_7;
        }
        tmp_tuple_element_22 = mod_consts[70];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_22);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_22 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_22);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_f3032e207776cc2cba16b96bd593de83->m_frame.f_lineno = 79;
        tmp_assign_source_33 = CALL_FUNCTION(tstate, tmp_called_value_23, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_33;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_16 = tmp_class_creation_2__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_16, mod_consts[39]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_7;
        }
        tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_7 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_23;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_name_value_4;
        PyObject *tmp_default_value_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[40];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_17 = tmp_class_creation_2__metaclass;
        tmp_name_value_4 = mod_consts[41];
        tmp_default_value_2 = mod_consts[42];
        tmp_tuple_element_23 = BUILTIN_GETATTR(tstate, tmp_expression_value_17, tmp_name_value_4, tmp_default_value_2);
        if (tmp_tuple_element_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_7;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_18;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_23);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_18 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_18 == NULL));
            tmp_tuple_element_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[41]);
            Py_DECREF(tmp_expression_value_18);
            if (tmp_tuple_element_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;

                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_23);
        }
        goto tuple_build_noexception_18;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_18:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_18:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_7;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 79;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_7;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_34;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_35;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_pycaw$api$audiopolicy$$$class__2_IAudioSessionControl_79 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[43];
        tmp_res = PyObject_SetItem(locals_pycaw$api$audiopolicy$$$class__2_IAudioSessionControl_79, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[70];
        tmp_res = PyObject_SetItem(locals_pycaw$api$audiopolicy$$$class__2_IAudioSessionControl_79, mod_consts[45], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_9;
        }
        frame_18fe58054bccefc50a9857a792ea4762_3 = MAKE_CLASS_FRAME(tstate, codeobj_18fe58054bccefc50a9857a792ea4762, module_pycaw$api$audiopolicy, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_18fe58054bccefc50a9857a792ea4762_3);
        assert(Py_REFCNT(frame_18fe58054bccefc50a9857a792ea4762_3) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_24;
            tmp_called_value_24 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__2_IAudioSessionControl_79, mod_consts[31]);

            if (tmp_called_value_24 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[31]);

                    if (unlikely(tmp_called_value_24 == NULL)) {
                        tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
                    }

                    if (tmp_called_value_24 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 80;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_value_24);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            frame_18fe58054bccefc50a9857a792ea4762_3->m_frame.f_lineno = 80;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_24, mod_consts[71]);

            Py_DECREF(tmp_called_value_24);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_pycaw$api$audiopolicy$$$class__2_IAudioSessionControl_79, mod_consts[47], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_tuple_element_24;
            PyObject *tmp_called_value_25;
            PyObject *tmp_args_element_value_48;
            PyObject *tmp_args_element_value_49;
            PyObject *tmp_args_element_value_50;
            PyObject *tmp_args_element_value_51;
            PyObject *tmp_tuple_element_25;
            tmp_called_value_25 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__2_IAudioSessionControl_79, mod_consts[30]);

            if (tmp_called_value_25 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[30]);

                    if (unlikely(tmp_called_value_25 == NULL)) {
                        tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
                    }

                    if (tmp_called_value_25 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 83;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_value_25);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_args_element_value_48 = MAKE_LIST_EMPTY(0);
            tmp_args_element_value_49 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__2_IAudioSessionControl_79, mod_consts[18]);

            if (tmp_args_element_value_49 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_args_element_value_49 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_args_element_value_49 == NULL)) {
                        tmp_args_element_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                    }

                    if (tmp_args_element_value_49 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_25);
                        Py_DECREF(tmp_args_element_value_48);

                        exception_lineno = 83;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_args_element_value_49);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_args_element_value_50 = mod_consts[72];
            tmp_tuple_element_25 = MAKE_LIST1(mod_consts[73]);
            tmp_args_element_value_51 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_called_value_26;
                PyObject *tmp_args_element_value_52;
                PyTuple_SET_ITEM(tmp_args_element_value_51, 0, tmp_tuple_element_25);
                tmp_called_value_26 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__2_IAudioSessionControl_79, mod_consts[20]);

                if (tmp_called_value_26 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[20]);

                        if (unlikely(tmp_called_value_26 == NULL)) {
                            tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                        }

                        if (tmp_called_value_26 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 83;
                            type_description_2 = "o";
                            goto tuple_build_exception_19;
                        }
                        Py_INCREF(tmp_called_value_26);
                    } else {
                        goto tuple_build_exception_19;
                    }
                }

                tmp_args_element_value_52 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__2_IAudioSessionControl_79, mod_consts[24]);

                if (tmp_args_element_value_52 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_52 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[24]);

                        if (unlikely(tmp_args_element_value_52 == NULL)) {
                            tmp_args_element_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                        }

                        if (tmp_args_element_value_52 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_26);

                            exception_lineno = 83;
                            type_description_2 = "o";
                            goto tuple_build_exception_19;
                        }
                        Py_INCREF(tmp_args_element_value_52);
                    } else {
                        goto tuple_build_exception_19;
                    }
                }

                frame_18fe58054bccefc50a9857a792ea4762_3->m_frame.f_lineno = 83;
                tmp_tuple_element_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_26, tmp_args_element_value_52);
                Py_DECREF(tmp_called_value_26);
                Py_DECREF(tmp_args_element_value_52);
                if (tmp_tuple_element_25 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 83;
                    type_description_2 = "o";
                    goto tuple_build_exception_19;
                }
                PyTuple_SET_ITEM(tmp_args_element_value_51, 1, tmp_tuple_element_25);
                tmp_tuple_element_25 = mod_consts[74];
                PyTuple_SET_ITEM0(tmp_args_element_value_51, 2, tmp_tuple_element_25);
            }
            goto tuple_build_noexception_19;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_19:;
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_args_element_value_48);
            Py_DECREF(tmp_args_element_value_49);
            Py_DECREF(tmp_args_element_value_51);
            goto frame_exception_exit_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_19:;
            frame_18fe58054bccefc50a9857a792ea4762_3->m_frame.f_lineno = 83;
            {
                PyObject *call_args[] = {tmp_args_element_value_48, tmp_args_element_value_49, tmp_args_element_value_50, tmp_args_element_value_51};
                tmp_tuple_element_24 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_25, call_args);
            }

            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_args_element_value_48);
            Py_DECREF(tmp_args_element_value_49);
            Py_DECREF(tmp_args_element_value_51);
            if (tmp_tuple_element_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_dictset_value = MAKE_TUPLE_EMPTY(9);
            {
                PyObject *tmp_called_value_27;
                PyObject *tmp_args_element_value_53;
                PyObject *tmp_args_element_value_54;
                PyObject *tmp_args_element_value_55;
                PyObject *tmp_args_element_value_56;
                PyObject *tmp_tuple_element_26;
                PyObject *tmp_called_value_29;
                PyObject *tmp_args_element_value_58;
                PyObject *tmp_args_element_value_59;
                PyObject *tmp_args_element_value_60;
                PyObject *tmp_args_element_value_61;
                PyObject *tmp_tuple_element_27;
                PyObject *tmp_args_element_value_62;
                PyObject *tmp_tuple_element_28;
                PyObject *tmp_called_value_31;
                PyObject *tmp_args_element_value_64;
                PyObject *tmp_args_element_value_65;
                PyObject *tmp_args_element_value_66;
                PyObject *tmp_args_element_value_67;
                PyObject *tmp_tuple_element_29;
                PyObject *tmp_called_value_33;
                PyObject *tmp_args_element_value_69;
                PyObject *tmp_args_element_value_70;
                PyObject *tmp_args_element_value_71;
                PyObject *tmp_args_element_value_72;
                PyObject *tmp_tuple_element_30;
                PyObject *tmp_args_element_value_73;
                PyObject *tmp_tuple_element_31;
                PyObject *tmp_called_value_35;
                PyObject *tmp_args_element_value_75;
                PyObject *tmp_args_element_value_76;
                PyObject *tmp_args_element_value_77;
                PyObject *tmp_args_element_value_78;
                PyObject *tmp_tuple_element_32;
                PyObject *tmp_called_value_37;
                PyObject *tmp_args_element_value_80;
                PyObject *tmp_args_element_value_81;
                PyObject *tmp_args_element_value_82;
                PyObject *tmp_args_element_value_83;
                PyObject *tmp_tuple_element_33;
                PyObject *tmp_args_element_value_85;
                PyObject *tmp_tuple_element_34;
                PyObject *tmp_called_value_40;
                PyObject *tmp_args_element_value_87;
                PyObject *tmp_args_element_value_88;
                PyObject *tmp_args_element_value_89;
                PyObject *tmp_args_element_value_90;
                PyObject *tmp_tuple_element_35;
                PyObject *tmp_called_value_42;
                PyObject *tmp_args_element_value_92;
                PyObject *tmp_args_element_value_93;
                PyObject *tmp_args_element_value_94;
                PyObject *tmp_args_element_value_95;
                PyObject *tmp_tuple_element_36;
                PyTuple_SET_ITEM(tmp_dictset_value, 0, tmp_tuple_element_24);
                tmp_called_value_27 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__2_IAudioSessionControl_79, mod_consts[30]);

                if (tmp_called_value_27 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[30]);

                        if (unlikely(tmp_called_value_27 == NULL)) {
                            tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
                        }

                        if (tmp_called_value_27 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 85;
                            type_description_2 = "o";
                            goto tuple_build_exception_20;
                        }
                        Py_INCREF(tmp_called_value_27);
                    } else {
                        goto tuple_build_exception_20;
                    }
                }

                tmp_args_element_value_53 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_54 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__2_IAudioSessionControl_79, mod_consts[18]);

                if (tmp_args_element_value_54 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_54 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[18]);

                        if (unlikely(tmp_args_element_value_54 == NULL)) {
                            tmp_args_element_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                        }

                        if (tmp_args_element_value_54 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_27);
                            Py_DECREF(tmp_args_element_value_53);

                            exception_lineno = 85;
                            type_description_2 = "o";
                            goto tuple_build_exception_20;
                        }
                        Py_INCREF(tmp_args_element_value_54);
                    } else {
                        goto tuple_build_exception_20;
                    }
                }

                tmp_args_element_value_55 = mod_consts[75];
                tmp_tuple_element_26 = MAKE_LIST1(mod_consts[73]);
                tmp_args_element_value_56 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_28;
                    PyObject *tmp_args_element_value_57;
                    PyTuple_SET_ITEM(tmp_args_element_value_56, 0, tmp_tuple_element_26);
                    tmp_called_value_28 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__2_IAudioSessionControl_79, mod_consts[20]);

                    if (tmp_called_value_28 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[20]);

                            if (unlikely(tmp_called_value_28 == NULL)) {
                                tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                            }

                            if (tmp_called_value_28 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 85;
                                type_description_2 = "o";
                                goto tuple_build_exception_21;
                            }
                            Py_INCREF(tmp_called_value_28);
                        } else {
                            goto tuple_build_exception_21;
                        }
                    }

                    tmp_args_element_value_57 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__2_IAudioSessionControl_79, mod_consts[27]);

                    if (tmp_args_element_value_57 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_57 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[27]);

                            if (unlikely(tmp_args_element_value_57 == NULL)) {
                                tmp_args_element_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
                            }

                            if (tmp_args_element_value_57 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_28);

                                exception_lineno = 85;
                                type_description_2 = "o";
                                goto tuple_build_exception_21;
                            }
                            Py_INCREF(tmp_args_element_value_57);
                        } else {
                            goto tuple_build_exception_21;
                        }
                    }

                    frame_18fe58054bccefc50a9857a792ea4762_3->m_frame.f_lineno = 85;
                    tmp_tuple_element_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_28, tmp_args_element_value_57);
                    Py_DECREF(tmp_called_value_28);
                    Py_DECREF(tmp_args_element_value_57);
                    if (tmp_tuple_element_26 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 85;
                        type_description_2 = "o";
                        goto tuple_build_exception_21;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_56, 1, tmp_tuple_element_26);
                    tmp_tuple_element_26 = mod_consts[74];
                    PyTuple_SET_ITEM0(tmp_args_element_value_56, 2, tmp_tuple_element_26);
                }
                goto tuple_build_noexception_20;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_21:;
                Py_DECREF(tmp_called_value_27);
                Py_DECREF(tmp_args_element_value_53);
                Py_DECREF(tmp_args_element_value_54);
                Py_DECREF(tmp_args_element_value_56);
                goto tuple_build_exception_20;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_20:;
                frame_18fe58054bccefc50a9857a792ea4762_3->m_frame.f_lineno = 85;
                {
                    PyObject *call_args[] = {tmp_args_element_value_53, tmp_args_element_value_54, tmp_args_element_value_55, tmp_args_element_value_56};
                    tmp_tuple_element_24 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_27, call_args);
                }

                Py_DECREF(tmp_called_value_27);
                Py_DECREF(tmp_args_element_value_53);
                Py_DECREF(tmp_args_element_value_54);
                Py_DECREF(tmp_args_element_value_56);
                if (tmp_tuple_element_24 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 85;
                    type_description_2 = "o";
                    goto tuple_build_exception_20;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 1, tmp_tuple_element_24);
                tmp_called_value_29 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__2_IAudioSessionControl_79, mod_consts[30]);

                if (tmp_called_value_29 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[30]);

                        if (unlikely(tmp_called_value_29 == NULL)) {
                            tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
                        }

                        if (tmp_called_value_29 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 89;
                            type_description_2 = "o";
                            goto tuple_build_exception_20;
                        }
                        Py_INCREF(tmp_called_value_29);
                    } else {
                        goto tuple_build_exception_20;
                    }
                }

                tmp_args_element_value_58 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_59 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__2_IAudioSessionControl_79, mod_consts[18]);

                if (tmp_args_element_value_59 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_59 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[18]);

                        if (unlikely(tmp_args_element_value_59 == NULL)) {
                            tmp_args_element_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                        }

                        if (tmp_args_element_value_59 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_29);
                            Py_DECREF(tmp_args_element_value_58);

                            exception_lineno = 91;
                            type_description_2 = "o";
                            goto tuple_build_exception_20;
                        }
                        Py_INCREF(tmp_args_element_value_59);
                    } else {
                        goto tuple_build_exception_20;
                    }
                }

                tmp_args_element_value_60 = mod_consts[76];
                tmp_tuple_element_27 = MAKE_LIST1(mod_consts[49]);
                tmp_args_element_value_61 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM(tmp_args_element_value_61, 0, tmp_tuple_element_27);
                tmp_tuple_element_27 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__2_IAudioSessionControl_79, mod_consts[26]);

                if (tmp_tuple_element_27 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_27 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[26]);

                        if (unlikely(tmp_tuple_element_27 == NULL)) {
                            tmp_tuple_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
                        }

                        if (tmp_tuple_element_27 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 93;
                            type_description_2 = "o";
                            goto tuple_build_exception_22;
                        }
                        Py_INCREF(tmp_tuple_element_27);
                    } else {
                        goto tuple_build_exception_22;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_element_value_61, 1, tmp_tuple_element_27);
                tmp_tuple_element_27 = mod_consts[77];
                PyTuple_SET_ITEM0(tmp_args_element_value_61, 2, tmp_tuple_element_27);
                goto tuple_build_noexception_21;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_22:;
                Py_DECREF(tmp_called_value_29);
                Py_DECREF(tmp_args_element_value_58);
                Py_DECREF(tmp_args_element_value_59);
                Py_DECREF(tmp_args_element_value_61);
                goto tuple_build_exception_20;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_21:;
                tmp_tuple_element_28 = MAKE_LIST1(mod_consts[49]);
                tmp_args_element_value_62 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_30;
                    PyObject *tmp_args_element_value_63;
                    PyTuple_SET_ITEM(tmp_args_element_value_62, 0, tmp_tuple_element_28);
                    tmp_called_value_30 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__2_IAudioSessionControl_79, mod_consts[20]);

                    if (tmp_called_value_30 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[20]);

                            if (unlikely(tmp_called_value_30 == NULL)) {
                                tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                            }

                            if (tmp_called_value_30 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 94;
                                type_description_2 = "o";
                                goto tuple_build_exception_23;
                            }
                            Py_INCREF(tmp_called_value_30);
                        } else {
                            goto tuple_build_exception_23;
                        }
                    }

                    tmp_args_element_value_63 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__2_IAudioSessionControl_79, mod_consts[31]);

                    if (tmp_args_element_value_63 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_63 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[31]);

                            if (unlikely(tmp_args_element_value_63 == NULL)) {
                                tmp_args_element_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
                            }

                            if (tmp_args_element_value_63 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_30);

                                exception_lineno = 94;
                                type_description_2 = "o";
                                goto tuple_build_exception_23;
                            }
                            Py_INCREF(tmp_args_element_value_63);
                        } else {
                            goto tuple_build_exception_23;
                        }
                    }

                    frame_18fe58054bccefc50a9857a792ea4762_3->m_frame.f_lineno = 94;
                    tmp_tuple_element_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_30, tmp_args_element_value_63);
                    Py_DECREF(tmp_called_value_30);
                    Py_DECREF(tmp_args_element_value_63);
                    if (tmp_tuple_element_28 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 94;
                        type_description_2 = "o";
                        goto tuple_build_exception_23;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_62, 1, tmp_tuple_element_28);
                    tmp_tuple_element_28 = mod_consts[51];
                    PyTuple_SET_ITEM0(tmp_args_element_value_62, 2, tmp_tuple_element_28);
                }
                goto tuple_build_noexception_22;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_23:;
                Py_DECREF(tmp_called_value_29);
                Py_DECREF(tmp_args_element_value_58);
                Py_DECREF(tmp_args_element_value_59);
                Py_DECREF(tmp_args_element_value_61);
                Py_DECREF(tmp_args_element_value_62);
                goto tuple_build_exception_20;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_22:;
                frame_18fe58054bccefc50a9857a792ea4762_3->m_frame.f_lineno = 89;
                {
                    PyObject *call_args[] = {tmp_args_element_value_58, tmp_args_element_value_59, tmp_args_element_value_60, tmp_args_element_value_61, tmp_args_element_value_62};
                    tmp_tuple_element_24 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_29, call_args);
                }

                Py_DECREF(tmp_called_value_29);
                Py_DECREF(tmp_args_element_value_58);
                Py_DECREF(tmp_args_element_value_59);
                Py_DECREF(tmp_args_element_value_61);
                Py_DECREF(tmp_args_element_value_62);
                if (tmp_tuple_element_24 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 89;
                    type_description_2 = "o";
                    goto tuple_build_exception_20;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 2, tmp_tuple_element_24);
                tmp_called_value_31 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__2_IAudioSessionControl_79, mod_consts[30]);

                if (tmp_called_value_31 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[30]);

                        if (unlikely(tmp_called_value_31 == NULL)) {
                            tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
                        }

                        if (tmp_called_value_31 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 97;
                            type_description_2 = "o";
                            goto tuple_build_exception_20;
                        }
                        Py_INCREF(tmp_called_value_31);
                    } else {
                        goto tuple_build_exception_20;
                    }
                }

                tmp_args_element_value_64 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_65 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__2_IAudioSessionControl_79, mod_consts[18]);

                if (tmp_args_element_value_65 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_65 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[18]);

                        if (unlikely(tmp_args_element_value_65 == NULL)) {
                            tmp_args_element_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                        }

                        if (tmp_args_element_value_65 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_31);
                            Py_DECREF(tmp_args_element_value_64);

                            exception_lineno = 97;
                            type_description_2 = "o";
                            goto tuple_build_exception_20;
                        }
                        Py_INCREF(tmp_args_element_value_65);
                    } else {
                        goto tuple_build_exception_20;
                    }
                }

                tmp_args_element_value_66 = mod_consts[78];
                tmp_tuple_element_29 = MAKE_LIST1(mod_consts[73]);
                tmp_args_element_value_67 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_32;
                    PyObject *tmp_args_element_value_68;
                    PyTuple_SET_ITEM(tmp_args_element_value_67, 0, tmp_tuple_element_29);
                    tmp_called_value_32 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__2_IAudioSessionControl_79, mod_consts[20]);

                    if (tmp_called_value_32 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[20]);

                            if (unlikely(tmp_called_value_32 == NULL)) {
                                tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                            }

                            if (tmp_called_value_32 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 97;
                                type_description_2 = "o";
                                goto tuple_build_exception_24;
                            }
                            Py_INCREF(tmp_called_value_32);
                        } else {
                            goto tuple_build_exception_24;
                        }
                    }

                    tmp_args_element_value_68 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__2_IAudioSessionControl_79, mod_consts[27]);

                    if (tmp_args_element_value_68 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_68 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[27]);

                            if (unlikely(tmp_args_element_value_68 == NULL)) {
                                tmp_args_element_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
                            }

                            if (tmp_args_element_value_68 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_32);

                                exception_lineno = 97;
                                type_description_2 = "o";
                                goto tuple_build_exception_24;
                            }
                            Py_INCREF(tmp_args_element_value_68);
                        } else {
                            goto tuple_build_exception_24;
                        }
                    }

                    frame_18fe58054bccefc50a9857a792ea4762_3->m_frame.f_lineno = 97;
                    tmp_tuple_element_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_32, tmp_args_element_value_68);
                    Py_DECREF(tmp_called_value_32);
                    Py_DECREF(tmp_args_element_value_68);
                    if (tmp_tuple_element_29 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 97;
                        type_description_2 = "o";
                        goto tuple_build_exception_24;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_67, 1, tmp_tuple_element_29);
                    tmp_tuple_element_29 = mod_consts[74];
                    PyTuple_SET_ITEM0(tmp_args_element_value_67, 2, tmp_tuple_element_29);
                }
                goto tuple_build_noexception_23;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_24:;
                Py_DECREF(tmp_called_value_31);
                Py_DECREF(tmp_args_element_value_64);
                Py_DECREF(tmp_args_element_value_65);
                Py_DECREF(tmp_args_element_value_67);
                goto tuple_build_exception_20;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_23:;
                frame_18fe58054bccefc50a9857a792ea4762_3->m_frame.f_lineno = 97;
                {
                    PyObject *call_args[] = {tmp_args_element_value_64, tmp_args_element_value_65, tmp_args_element_value_66, tmp_args_element_value_67};
                    tmp_tuple_element_24 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_31, call_args);
                }

                Py_DECREF(tmp_called_value_31);
                Py_DECREF(tmp_args_element_value_64);
                Py_DECREF(tmp_args_element_value_65);
                Py_DECREF(tmp_args_element_value_67);
                if (tmp_tuple_element_24 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 97;
                    type_description_2 = "o";
                    goto tuple_build_exception_20;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 3, tmp_tuple_element_24);
                tmp_called_value_33 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__2_IAudioSessionControl_79, mod_consts[30]);

                if (tmp_called_value_33 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[30]);

                        if (unlikely(tmp_called_value_33 == NULL)) {
                            tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
                        }

                        if (tmp_called_value_33 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 101;
                            type_description_2 = "o";
                            goto tuple_build_exception_20;
                        }
                        Py_INCREF(tmp_called_value_33);
                    } else {
                        goto tuple_build_exception_20;
                    }
                }

                tmp_args_element_value_69 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_70 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__2_IAudioSessionControl_79, mod_consts[18]);

                if (tmp_args_element_value_70 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_70 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[18]);

                        if (unlikely(tmp_args_element_value_70 == NULL)) {
                            tmp_args_element_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                        }

                        if (tmp_args_element_value_70 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_33);
                            Py_DECREF(tmp_args_element_value_69);

                            exception_lineno = 103;
                            type_description_2 = "o";
                            goto tuple_build_exception_20;
                        }
                        Py_INCREF(tmp_args_element_value_70);
                    } else {
                        goto tuple_build_exception_20;
                    }
                }

                tmp_args_element_value_71 = mod_consts[79];
                tmp_tuple_element_30 = MAKE_LIST1(mod_consts[49]);
                tmp_args_element_value_72 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM(tmp_args_element_value_72, 0, tmp_tuple_element_30);
                tmp_tuple_element_30 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__2_IAudioSessionControl_79, mod_consts[26]);

                if (tmp_tuple_element_30 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_30 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[26]);

                        if (unlikely(tmp_tuple_element_30 == NULL)) {
                            tmp_tuple_element_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
                        }

                        if (tmp_tuple_element_30 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 105;
                            type_description_2 = "o";
                            goto tuple_build_exception_25;
                        }
                        Py_INCREF(tmp_tuple_element_30);
                    } else {
                        goto tuple_build_exception_25;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_element_value_72, 1, tmp_tuple_element_30);
                tmp_tuple_element_30 = mod_consts[77];
                PyTuple_SET_ITEM0(tmp_args_element_value_72, 2, tmp_tuple_element_30);
                goto tuple_build_noexception_24;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_25:;
                Py_DECREF(tmp_called_value_33);
                Py_DECREF(tmp_args_element_value_69);
                Py_DECREF(tmp_args_element_value_70);
                Py_DECREF(tmp_args_element_value_72);
                goto tuple_build_exception_20;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_24:;
                tmp_tuple_element_31 = MAKE_LIST1(mod_consts[49]);
                tmp_args_element_value_73 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_34;
                    PyObject *tmp_args_element_value_74;
                    PyTuple_SET_ITEM(tmp_args_element_value_73, 0, tmp_tuple_element_31);
                    tmp_called_value_34 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__2_IAudioSessionControl_79, mod_consts[20]);

                    if (tmp_called_value_34 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[20]);

                            if (unlikely(tmp_called_value_34 == NULL)) {
                                tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                            }

                            if (tmp_called_value_34 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 106;
                                type_description_2 = "o";
                                goto tuple_build_exception_26;
                            }
                            Py_INCREF(tmp_called_value_34);
                        } else {
                            goto tuple_build_exception_26;
                        }
                    }

                    tmp_args_element_value_74 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__2_IAudioSessionControl_79, mod_consts[31]);

                    if (tmp_args_element_value_74 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_74 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[31]);

                            if (unlikely(tmp_args_element_value_74 == NULL)) {
                                tmp_args_element_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
                            }

                            if (tmp_args_element_value_74 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_34);

                                exception_lineno = 106;
                                type_description_2 = "o";
                                goto tuple_build_exception_26;
                            }
                            Py_INCREF(tmp_args_element_value_74);
                        } else {
                            goto tuple_build_exception_26;
                        }
                    }

                    frame_18fe58054bccefc50a9857a792ea4762_3->m_frame.f_lineno = 106;
                    tmp_tuple_element_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_34, tmp_args_element_value_74);
                    Py_DECREF(tmp_called_value_34);
                    Py_DECREF(tmp_args_element_value_74);
                    if (tmp_tuple_element_31 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 106;
                        type_description_2 = "o";
                        goto tuple_build_exception_26;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_73, 1, tmp_tuple_element_31);
                    tmp_tuple_element_31 = mod_consts[51];
                    PyTuple_SET_ITEM0(tmp_args_element_value_73, 2, tmp_tuple_element_31);
                }
                goto tuple_build_noexception_25;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_26:;
                Py_DECREF(tmp_called_value_33);
                Py_DECREF(tmp_args_element_value_69);
                Py_DECREF(tmp_args_element_value_70);
                Py_DECREF(tmp_args_element_value_72);
                Py_DECREF(tmp_args_element_value_73);
                goto tuple_build_exception_20;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_25:;
                frame_18fe58054bccefc50a9857a792ea4762_3->m_frame.f_lineno = 101;
                {
                    PyObject *call_args[] = {tmp_args_element_value_69, tmp_args_element_value_70, tmp_args_element_value_71, tmp_args_element_value_72, tmp_args_element_value_73};
                    tmp_tuple_element_24 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_33, call_args);
                }

                Py_DECREF(tmp_called_value_33);
                Py_DECREF(tmp_args_element_value_69);
                Py_DECREF(tmp_args_element_value_70);
                Py_DECREF(tmp_args_element_value_72);
                Py_DECREF(tmp_args_element_value_73);
                if (tmp_tuple_element_24 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 101;
                    type_description_2 = "o";
                    goto tuple_build_exception_20;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 4, tmp_tuple_element_24);
                tmp_called_value_35 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__2_IAudioSessionControl_79, mod_consts[30]);

                if (tmp_called_value_35 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[30]);

                        if (unlikely(tmp_called_value_35 == NULL)) {
                            tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
                        }

                        if (tmp_called_value_35 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 109;
                            type_description_2 = "o";
                            goto tuple_build_exception_20;
                        }
                        Py_INCREF(tmp_called_value_35);
                    } else {
                        goto tuple_build_exception_20;
                    }
                }

                tmp_args_element_value_75 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_76 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__2_IAudioSessionControl_79, mod_consts[18]);

                if (tmp_args_element_value_76 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_76 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[18]);

                        if (unlikely(tmp_args_element_value_76 == NULL)) {
                            tmp_args_element_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                        }

                        if (tmp_args_element_value_76 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_35);
                            Py_DECREF(tmp_args_element_value_75);

                            exception_lineno = 109;
                            type_description_2 = "o";
                            goto tuple_build_exception_20;
                        }
                        Py_INCREF(tmp_args_element_value_76);
                    } else {
                        goto tuple_build_exception_20;
                    }
                }

                tmp_args_element_value_77 = mod_consts[80];
                tmp_tuple_element_32 = MAKE_LIST1(mod_consts[73]);
                tmp_args_element_value_78 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_36;
                    PyObject *tmp_args_element_value_79;
                    PyTuple_SET_ITEM(tmp_args_element_value_78, 0, tmp_tuple_element_32);
                    tmp_called_value_36 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__2_IAudioSessionControl_79, mod_consts[20]);

                    if (tmp_called_value_36 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[20]);

                            if (unlikely(tmp_called_value_36 == NULL)) {
                                tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                            }

                            if (tmp_called_value_36 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 109;
                                type_description_2 = "o";
                                goto tuple_build_exception_27;
                            }
                            Py_INCREF(tmp_called_value_36);
                        } else {
                            goto tuple_build_exception_27;
                        }
                    }

                    tmp_args_element_value_79 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__2_IAudioSessionControl_79, mod_consts[31]);

                    if (tmp_args_element_value_79 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_79 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[31]);

                            if (unlikely(tmp_args_element_value_79 == NULL)) {
                                tmp_args_element_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
                            }

                            if (tmp_args_element_value_79 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_36);

                                exception_lineno = 109;
                                type_description_2 = "o";
                                goto tuple_build_exception_27;
                            }
                            Py_INCREF(tmp_args_element_value_79);
                        } else {
                            goto tuple_build_exception_27;
                        }
                    }

                    frame_18fe58054bccefc50a9857a792ea4762_3->m_frame.f_lineno = 109;
                    tmp_tuple_element_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_36, tmp_args_element_value_79);
                    Py_DECREF(tmp_called_value_36);
                    Py_DECREF(tmp_args_element_value_79);
                    if (tmp_tuple_element_32 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 109;
                        type_description_2 = "o";
                        goto tuple_build_exception_27;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_78, 1, tmp_tuple_element_32);
                    tmp_tuple_element_32 = mod_consts[74];
                    PyTuple_SET_ITEM0(tmp_args_element_value_78, 2, tmp_tuple_element_32);
                }
                goto tuple_build_noexception_26;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_27:;
                Py_DECREF(tmp_called_value_35);
                Py_DECREF(tmp_args_element_value_75);
                Py_DECREF(tmp_args_element_value_76);
                Py_DECREF(tmp_args_element_value_78);
                goto tuple_build_exception_20;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_26:;
                frame_18fe58054bccefc50a9857a792ea4762_3->m_frame.f_lineno = 109;
                {
                    PyObject *call_args[] = {tmp_args_element_value_75, tmp_args_element_value_76, tmp_args_element_value_77, tmp_args_element_value_78};
                    tmp_tuple_element_24 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_35, call_args);
                }

                Py_DECREF(tmp_called_value_35);
                Py_DECREF(tmp_args_element_value_75);
                Py_DECREF(tmp_args_element_value_76);
                Py_DECREF(tmp_args_element_value_78);
                if (tmp_tuple_element_24 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 109;
                    type_description_2 = "o";
                    goto tuple_build_exception_20;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 5, tmp_tuple_element_24);
                tmp_called_value_37 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__2_IAudioSessionControl_79, mod_consts[30]);

                if (tmp_called_value_37 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[30]);

                        if (unlikely(tmp_called_value_37 == NULL)) {
                            tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
                        }

                        if (tmp_called_value_37 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 113;
                            type_description_2 = "o";
                            goto tuple_build_exception_20;
                        }
                        Py_INCREF(tmp_called_value_37);
                    } else {
                        goto tuple_build_exception_20;
                    }
                }

                tmp_args_element_value_80 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_81 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__2_IAudioSessionControl_79, mod_consts[18]);

                if (tmp_args_element_value_81 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_81 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[18]);

                        if (unlikely(tmp_args_element_value_81 == NULL)) {
                            tmp_args_element_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                        }

                        if (tmp_args_element_value_81 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_37);
                            Py_DECREF(tmp_args_element_value_80);

                            exception_lineno = 115;
                            type_description_2 = "o";
                            goto tuple_build_exception_20;
                        }
                        Py_INCREF(tmp_args_element_value_81);
                    } else {
                        goto tuple_build_exception_20;
                    }
                }

                tmp_args_element_value_82 = mod_consts[81];
                tmp_tuple_element_33 = MAKE_LIST1(mod_consts[49]);
                tmp_args_element_value_83 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_38;
                    PyObject *tmp_args_element_value_84;
                    PyTuple_SET_ITEM(tmp_args_element_value_83, 0, tmp_tuple_element_33);
                    tmp_called_value_38 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__2_IAudioSessionControl_79, mod_consts[20]);

                    if (tmp_called_value_38 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[20]);

                            if (unlikely(tmp_called_value_38 == NULL)) {
                                tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                            }

                            if (tmp_called_value_38 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 117;
                                type_description_2 = "o";
                                goto tuple_build_exception_28;
                            }
                            Py_INCREF(tmp_called_value_38);
                        } else {
                            goto tuple_build_exception_28;
                        }
                    }

                    tmp_args_element_value_84 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__2_IAudioSessionControl_79, mod_consts[31]);

                    if (tmp_args_element_value_84 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_84 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[31]);

                            if (unlikely(tmp_args_element_value_84 == NULL)) {
                                tmp_args_element_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
                            }

                            if (tmp_args_element_value_84 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_38);

                                exception_lineno = 117;
                                type_description_2 = "o";
                                goto tuple_build_exception_28;
                            }
                            Py_INCREF(tmp_args_element_value_84);
                        } else {
                            goto tuple_build_exception_28;
                        }
                    }

                    frame_18fe58054bccefc50a9857a792ea4762_3->m_frame.f_lineno = 117;
                    tmp_tuple_element_33 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_38, tmp_args_element_value_84);
                    Py_DECREF(tmp_called_value_38);
                    Py_DECREF(tmp_args_element_value_84);
                    if (tmp_tuple_element_33 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 117;
                        type_description_2 = "o";
                        goto tuple_build_exception_28;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_83, 1, tmp_tuple_element_33);
                    tmp_tuple_element_33 = mod_consts[82];
                    PyTuple_SET_ITEM0(tmp_args_element_value_83, 2, tmp_tuple_element_33);
                }
                goto tuple_build_noexception_27;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_28:;
                Py_DECREF(tmp_called_value_37);
                Py_DECREF(tmp_args_element_value_80);
                Py_DECREF(tmp_args_element_value_81);
                Py_DECREF(tmp_args_element_value_83);
                goto tuple_build_exception_20;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_27:;
                tmp_tuple_element_34 = MAKE_LIST1(mod_consts[49]);
                tmp_args_element_value_85 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_39;
                    PyObject *tmp_args_element_value_86;
                    PyTuple_SET_ITEM(tmp_args_element_value_85, 0, tmp_tuple_element_34);
                    tmp_called_value_39 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__2_IAudioSessionControl_79, mod_consts[20]);

                    if (tmp_called_value_39 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[20]);

                            if (unlikely(tmp_called_value_39 == NULL)) {
                                tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                            }

                            if (tmp_called_value_39 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 118;
                                type_description_2 = "o";
                                goto tuple_build_exception_29;
                            }
                            Py_INCREF(tmp_called_value_39);
                        } else {
                            goto tuple_build_exception_29;
                        }
                    }

                    tmp_args_element_value_86 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__2_IAudioSessionControl_79, mod_consts[31]);

                    if (tmp_args_element_value_86 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_86 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[31]);

                            if (unlikely(tmp_args_element_value_86 == NULL)) {
                                tmp_args_element_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
                            }

                            if (tmp_args_element_value_86 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_39);

                                exception_lineno = 118;
                                type_description_2 = "o";
                                goto tuple_build_exception_29;
                            }
                            Py_INCREF(tmp_args_element_value_86);
                        } else {
                            goto tuple_build_exception_29;
                        }
                    }

                    frame_18fe58054bccefc50a9857a792ea4762_3->m_frame.f_lineno = 118;
                    tmp_tuple_element_34 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_39, tmp_args_element_value_86);
                    Py_DECREF(tmp_called_value_39);
                    Py_DECREF(tmp_args_element_value_86);
                    if (tmp_tuple_element_34 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 118;
                        type_description_2 = "o";
                        goto tuple_build_exception_29;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_85, 1, tmp_tuple_element_34);
                    tmp_tuple_element_34 = mod_consts[51];
                    PyTuple_SET_ITEM0(tmp_args_element_value_85, 2, tmp_tuple_element_34);
                }
                goto tuple_build_noexception_28;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_29:;
                Py_DECREF(tmp_called_value_37);
                Py_DECREF(tmp_args_element_value_80);
                Py_DECREF(tmp_args_element_value_81);
                Py_DECREF(tmp_args_element_value_83);
                Py_DECREF(tmp_args_element_value_85);
                goto tuple_build_exception_20;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_28:;
                frame_18fe58054bccefc50a9857a792ea4762_3->m_frame.f_lineno = 113;
                {
                    PyObject *call_args[] = {tmp_args_element_value_80, tmp_args_element_value_81, tmp_args_element_value_82, tmp_args_element_value_83, tmp_args_element_value_85};
                    tmp_tuple_element_24 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_37, call_args);
                }

                Py_DECREF(tmp_called_value_37);
                Py_DECREF(tmp_args_element_value_80);
                Py_DECREF(tmp_args_element_value_81);
                Py_DECREF(tmp_args_element_value_83);
                Py_DECREF(tmp_args_element_value_85);
                if (tmp_tuple_element_24 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 113;
                    type_description_2 = "o";
                    goto tuple_build_exception_20;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 6, tmp_tuple_element_24);
                tmp_called_value_40 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__2_IAudioSessionControl_79, mod_consts[30]);

                if (tmp_called_value_40 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[30]);

                        if (unlikely(tmp_called_value_40 == NULL)) {
                            tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
                        }

                        if (tmp_called_value_40 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 122;
                            type_description_2 = "o";
                            goto tuple_build_exception_20;
                        }
                        Py_INCREF(tmp_called_value_40);
                    } else {
                        goto tuple_build_exception_20;
                    }
                }

                tmp_args_element_value_87 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_88 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__2_IAudioSessionControl_79, mod_consts[18]);

                if (tmp_args_element_value_88 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_88 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[18]);

                        if (unlikely(tmp_args_element_value_88 == NULL)) {
                            tmp_args_element_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                        }

                        if (tmp_args_element_value_88 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_40);
                            Py_DECREF(tmp_args_element_value_87);

                            exception_lineno = 124;
                            type_description_2 = "o";
                            goto tuple_build_exception_20;
                        }
                        Py_INCREF(tmp_args_element_value_88);
                    } else {
                        goto tuple_build_exception_20;
                    }
                }

                tmp_args_element_value_89 = mod_consts[83];
                tmp_tuple_element_35 = MAKE_LIST1(mod_consts[49]);
                tmp_args_element_value_90 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_41;
                    PyObject *tmp_args_element_value_91;
                    PyTuple_SET_ITEM(tmp_args_element_value_90, 0, tmp_tuple_element_35);
                    tmp_called_value_41 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__2_IAudioSessionControl_79, mod_consts[20]);

                    if (tmp_called_value_41 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[20]);

                            if (unlikely(tmp_called_value_41 == NULL)) {
                                tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                            }

                            if (tmp_called_value_41 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 126;
                                type_description_2 = "o";
                                goto tuple_build_exception_30;
                            }
                            Py_INCREF(tmp_called_value_41);
                        } else {
                            goto tuple_build_exception_30;
                        }
                    }

                    tmp_args_element_value_91 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__2_IAudioSessionControl_79, mod_consts[38]);

                    if (tmp_args_element_value_91 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_91 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[38]);

                            if (unlikely(tmp_args_element_value_91 == NULL)) {
                                tmp_args_element_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
                            }

                            if (tmp_args_element_value_91 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_41);

                                exception_lineno = 126;
                                type_description_2 = "o";
                                goto tuple_build_exception_30;
                            }
                            Py_INCREF(tmp_args_element_value_91);
                        } else {
                            goto tuple_build_exception_30;
                        }
                    }

                    frame_18fe58054bccefc50a9857a792ea4762_3->m_frame.f_lineno = 126;
                    tmp_tuple_element_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_41, tmp_args_element_value_91);
                    Py_DECREF(tmp_called_value_41);
                    Py_DECREF(tmp_args_element_value_91);
                    if (tmp_tuple_element_35 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 126;
                        type_description_2 = "o";
                        goto tuple_build_exception_30;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_90, 1, tmp_tuple_element_35);
                    tmp_tuple_element_35 = mod_consts[84];
                    PyTuple_SET_ITEM0(tmp_args_element_value_90, 2, tmp_tuple_element_35);
                }
                goto tuple_build_noexception_29;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_30:;
                Py_DECREF(tmp_called_value_40);
                Py_DECREF(tmp_args_element_value_87);
                Py_DECREF(tmp_args_element_value_88);
                Py_DECREF(tmp_args_element_value_90);
                goto tuple_build_exception_20;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_29:;
                frame_18fe58054bccefc50a9857a792ea4762_3->m_frame.f_lineno = 122;
                {
                    PyObject *call_args[] = {tmp_args_element_value_87, tmp_args_element_value_88, tmp_args_element_value_89, tmp_args_element_value_90};
                    tmp_tuple_element_24 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_40, call_args);
                }

                Py_DECREF(tmp_called_value_40);
                Py_DECREF(tmp_args_element_value_87);
                Py_DECREF(tmp_args_element_value_88);
                Py_DECREF(tmp_args_element_value_90);
                if (tmp_tuple_element_24 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 122;
                    type_description_2 = "o";
                    goto tuple_build_exception_20;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 7, tmp_tuple_element_24);
                tmp_called_value_42 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__2_IAudioSessionControl_79, mod_consts[30]);

                if (tmp_called_value_42 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[30]);

                        if (unlikely(tmp_called_value_42 == NULL)) {
                            tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
                        }

                        if (tmp_called_value_42 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 130;
                            type_description_2 = "o";
                            goto tuple_build_exception_20;
                        }
                        Py_INCREF(tmp_called_value_42);
                    } else {
                        goto tuple_build_exception_20;
                    }
                }

                tmp_args_element_value_92 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_93 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__2_IAudioSessionControl_79, mod_consts[18]);

                if (tmp_args_element_value_93 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_93 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[18]);

                        if (unlikely(tmp_args_element_value_93 == NULL)) {
                            tmp_args_element_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                        }

                        if (tmp_args_element_value_93 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_42);
                            Py_DECREF(tmp_args_element_value_92);

                            exception_lineno = 132;
                            type_description_2 = "o";
                            goto tuple_build_exception_20;
                        }
                        Py_INCREF(tmp_args_element_value_93);
                    } else {
                        goto tuple_build_exception_20;
                    }
                }

                tmp_args_element_value_94 = mod_consts[85];
                tmp_tuple_element_36 = MAKE_LIST1(mod_consts[49]);
                tmp_args_element_value_95 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_43;
                    PyObject *tmp_args_element_value_96;
                    PyTuple_SET_ITEM(tmp_args_element_value_95, 0, tmp_tuple_element_36);
                    tmp_called_value_43 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__2_IAudioSessionControl_79, mod_consts[20]);

                    if (tmp_called_value_43 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[20]);

                            if (unlikely(tmp_called_value_43 == NULL)) {
                                tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                            }

                            if (tmp_called_value_43 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 134;
                                type_description_2 = "o";
                                goto tuple_build_exception_31;
                            }
                            Py_INCREF(tmp_called_value_43);
                        } else {
                            goto tuple_build_exception_31;
                        }
                    }

                    tmp_args_element_value_96 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__2_IAudioSessionControl_79, mod_consts[38]);

                    if (tmp_args_element_value_96 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_96 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[38]);

                            if (unlikely(tmp_args_element_value_96 == NULL)) {
                                tmp_args_element_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
                            }

                            if (tmp_args_element_value_96 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_43);

                                exception_lineno = 134;
                                type_description_2 = "o";
                                goto tuple_build_exception_31;
                            }
                            Py_INCREF(tmp_args_element_value_96);
                        } else {
                            goto tuple_build_exception_31;
                        }
                    }

                    frame_18fe58054bccefc50a9857a792ea4762_3->m_frame.f_lineno = 134;
                    tmp_tuple_element_36 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_43, tmp_args_element_value_96);
                    Py_DECREF(tmp_called_value_43);
                    Py_DECREF(tmp_args_element_value_96);
                    if (tmp_tuple_element_36 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 134;
                        type_description_2 = "o";
                        goto tuple_build_exception_31;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_95, 1, tmp_tuple_element_36);
                    tmp_tuple_element_36 = mod_consts[84];
                    PyTuple_SET_ITEM0(tmp_args_element_value_95, 2, tmp_tuple_element_36);
                }
                goto tuple_build_noexception_30;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_31:;
                Py_DECREF(tmp_called_value_42);
                Py_DECREF(tmp_args_element_value_92);
                Py_DECREF(tmp_args_element_value_93);
                Py_DECREF(tmp_args_element_value_95);
                goto tuple_build_exception_20;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_30:;
                frame_18fe58054bccefc50a9857a792ea4762_3->m_frame.f_lineno = 130;
                {
                    PyObject *call_args[] = {tmp_args_element_value_92, tmp_args_element_value_93, tmp_args_element_value_94, tmp_args_element_value_95};
                    tmp_tuple_element_24 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_42, call_args);
                }

                Py_DECREF(tmp_called_value_42);
                Py_DECREF(tmp_args_element_value_92);
                Py_DECREF(tmp_args_element_value_93);
                Py_DECREF(tmp_args_element_value_95);
                if (tmp_tuple_element_24 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 130;
                    type_description_2 = "o";
                    goto tuple_build_exception_20;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 8, tmp_tuple_element_24);
            }
            goto tuple_build_noexception_31;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_20:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_31:;
            tmp_res = PyObject_SetItem(locals_pycaw$api$audiopolicy$$$class__2_IAudioSessionControl_79, mod_consts[68], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_18fe58054bccefc50a9857a792ea4762_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_18fe58054bccefc50a9857a792ea4762_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_18fe58054bccefc50a9857a792ea4762_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_18fe58054bccefc50a9857a792ea4762_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_18fe58054bccefc50a9857a792ea4762_3);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_9;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;

                goto try_except_handler_9;
            }
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_pycaw$api$audiopolicy$$$class__2_IAudioSessionControl_79, mod_consts[69], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_9;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_36;
            PyObject *tmp_called_value_44;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_37;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_44 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_37 = mod_consts[70];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_37);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_37 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_37);
            tmp_tuple_element_37 = locals_pycaw$api$audiopolicy$$$class__2_IAudioSessionControl_79;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_37);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_f3032e207776cc2cba16b96bd593de83->m_frame.f_lineno = 79;
            tmp_assign_source_36 = CALL_FUNCTION(tstate, tmp_called_value_44, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;

                goto try_except_handler_9;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_36;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_35 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_35);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_pycaw$api$audiopolicy$$$class__2_IAudioSessionControl_79);
        locals_pycaw$api$audiopolicy$$$class__2_IAudioSessionControl_79 = NULL;
        goto try_return_handler_8;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pycaw$api$audiopolicy$$$class__2_IAudioSessionControl_79);
        locals_pycaw$api$audiopolicy$$$class__2_IAudioSessionControl_79 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 79;
        goto try_except_handler_7;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_35);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_class_creation_2__bases_orig);
    Py_DECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_2__bases);
    Py_DECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__metaclass);
    Py_DECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_tuple_element_38;
        tmp_tuple_element_38 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_tuple_element_38 == NULL)) {
            tmp_tuple_element_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[70]);
        }

        if (tmp_tuple_element_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_10;
        }
        tmp_assign_source_37 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_37, 0, tmp_tuple_element_38);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_38 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_10;
        }
        tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_19 = tmp_class_creation_3__bases;
        tmp_subscript_value_3 = mod_consts[19];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_19, tmp_subscript_value_3, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_10;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_10;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_40 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_40;
    }
    {
        bool tmp_condition_result_10;
        PyObject *tmp_expression_value_20;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_20 = tmp_class_creation_3__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_20, mod_consts[37]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_10;
        }
        tmp_condition_result_10 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_value_45;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_39;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_21 = tmp_class_creation_3__metaclass;
        tmp_called_value_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[37]);
        if (tmp_called_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_10;
        }
        tmp_tuple_element_39 = mod_consts[86];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_39);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_39 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_39);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_f3032e207776cc2cba16b96bd593de83->m_frame.f_lineno = 139;
        tmp_assign_source_41 = CALL_FUNCTION(tstate, tmp_called_value_45, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_45);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_41;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_22;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_22 = tmp_class_creation_3__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_22, mod_consts[39]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_10;
        }
        tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_11 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_tuple_element_40;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_name_value_5;
        PyObject *tmp_default_value_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[40];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_23 = tmp_class_creation_3__metaclass;
        tmp_name_value_5 = mod_consts[41];
        tmp_default_value_3 = mod_consts[42];
        tmp_tuple_element_40 = BUILTIN_GETATTR(tstate, tmp_expression_value_23, tmp_name_value_5, tmp_default_value_3);
        if (tmp_tuple_element_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_10;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_24;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_40);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_24 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_24 == NULL));
            tmp_tuple_element_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[41]);
            Py_DECREF(tmp_expression_value_24);
            if (tmp_tuple_element_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;

                goto tuple_build_exception_32;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_40);
        }
        goto tuple_build_noexception_32;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_32:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_10;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_32:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_10;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 139;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_10;
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_42;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_43;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_pycaw$api$audiopolicy$$$class__3_IAudioSessionControl2_139 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[43];
        tmp_res = PyObject_SetItem(locals_pycaw$api$audiopolicy$$$class__3_IAudioSessionControl2_139, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_12;
        }
        tmp_dictset_value = mod_consts[86];
        tmp_res = PyObject_SetItem(locals_pycaw$api$audiopolicy$$$class__3_IAudioSessionControl2_139, mod_consts[45], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_12;
        }
        frame_f8abcfa470378899223e1c72de85e63c_4 = MAKE_CLASS_FRAME(tstate, codeobj_f8abcfa470378899223e1c72de85e63c, module_pycaw$api$audiopolicy, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_f8abcfa470378899223e1c72de85e63c_4);
        assert(Py_REFCNT(frame_f8abcfa470378899223e1c72de85e63c_4) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_46;
            tmp_called_value_46 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__3_IAudioSessionControl2_139, mod_consts[31]);

            if (tmp_called_value_46 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[31]);

                    if (unlikely(tmp_called_value_46 == NULL)) {
                        tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
                    }

                    if (tmp_called_value_46 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 140;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_46);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_f8abcfa470378899223e1c72de85e63c_4->m_frame.f_lineno = 140;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_46, mod_consts[87]);

            Py_DECREF(tmp_called_value_46);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_pycaw$api$audiopolicy$$$class__3_IAudioSessionControl2_139, mod_consts[47], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_tuple_element_41;
            PyObject *tmp_called_value_47;
            PyObject *tmp_args_element_value_97;
            PyObject *tmp_args_element_value_98;
            PyObject *tmp_args_element_value_99;
            PyObject *tmp_args_element_value_100;
            PyObject *tmp_tuple_element_42;
            tmp_called_value_47 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__3_IAudioSessionControl2_139, mod_consts[30]);

            if (tmp_called_value_47 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_47 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[30]);

                    if (unlikely(tmp_called_value_47 == NULL)) {
                        tmp_called_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
                    }

                    if (tmp_called_value_47 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 143;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_47);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_97 = MAKE_LIST_EMPTY(0);
            tmp_args_element_value_98 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__3_IAudioSessionControl2_139, mod_consts[18]);

            if (tmp_args_element_value_98 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_args_element_value_98 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_args_element_value_98 == NULL)) {
                        tmp_args_element_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                    }

                    if (tmp_args_element_value_98 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_47);
                        Py_DECREF(tmp_args_element_value_97);

                        exception_lineno = 144;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_args_element_value_98);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_99 = mod_consts[88];
            tmp_tuple_element_42 = MAKE_LIST1(mod_consts[73]);
            tmp_args_element_value_100 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_called_value_48;
                PyObject *tmp_args_element_value_101;
                PyTuple_SET_ITEM(tmp_args_element_value_100, 0, tmp_tuple_element_42);
                tmp_called_value_48 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__3_IAudioSessionControl2_139, mod_consts[20]);

                if (tmp_called_value_48 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_48 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[20]);

                        if (unlikely(tmp_called_value_48 == NULL)) {
                            tmp_called_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                        }

                        if (tmp_called_value_48 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 144;
                            type_description_2 = "o";
                            goto tuple_build_exception_33;
                        }
                        Py_INCREF(tmp_called_value_48);
                    } else {
                        goto tuple_build_exception_33;
                    }
                }

                tmp_args_element_value_101 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__3_IAudioSessionControl2_139, mod_consts[27]);

                if (tmp_args_element_value_101 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_101 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[27]);

                        if (unlikely(tmp_args_element_value_101 == NULL)) {
                            tmp_args_element_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
                        }

                        if (tmp_args_element_value_101 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_48);

                            exception_lineno = 144;
                            type_description_2 = "o";
                            goto tuple_build_exception_33;
                        }
                        Py_INCREF(tmp_args_element_value_101);
                    } else {
                        goto tuple_build_exception_33;
                    }
                }

                frame_f8abcfa470378899223e1c72de85e63c_4->m_frame.f_lineno = 144;
                tmp_tuple_element_42 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_48, tmp_args_element_value_101);
                Py_DECREF(tmp_called_value_48);
                Py_DECREF(tmp_args_element_value_101);
                if (tmp_tuple_element_42 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 144;
                    type_description_2 = "o";
                    goto tuple_build_exception_33;
                }
                PyTuple_SET_ITEM(tmp_args_element_value_100, 1, tmp_tuple_element_42);
                tmp_tuple_element_42 = mod_consts[74];
                PyTuple_SET_ITEM0(tmp_args_element_value_100, 2, tmp_tuple_element_42);
            }
            goto tuple_build_noexception_33;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_33:;
            Py_DECREF(tmp_called_value_47);
            Py_DECREF(tmp_args_element_value_97);
            Py_DECREF(tmp_args_element_value_98);
            Py_DECREF(tmp_args_element_value_100);
            goto frame_exception_exit_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_33:;
            frame_f8abcfa470378899223e1c72de85e63c_4->m_frame.f_lineno = 143;
            {
                PyObject *call_args[] = {tmp_args_element_value_97, tmp_args_element_value_98, tmp_args_element_value_99, tmp_args_element_value_100};
                tmp_tuple_element_41 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_47, call_args);
            }

            Py_DECREF(tmp_called_value_47);
            Py_DECREF(tmp_args_element_value_97);
            Py_DECREF(tmp_args_element_value_98);
            Py_DECREF(tmp_args_element_value_100);
            if (tmp_tuple_element_41 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dictset_value = MAKE_TUPLE_EMPTY(5);
            {
                PyObject *tmp_called_value_49;
                PyObject *tmp_args_element_value_102;
                PyObject *tmp_args_element_value_103;
                PyObject *tmp_args_element_value_104;
                PyObject *tmp_args_element_value_105;
                PyObject *tmp_tuple_element_43;
                PyObject *tmp_called_value_51;
                PyObject *tmp_args_element_value_107;
                PyObject *tmp_args_element_value_108;
                PyObject *tmp_args_element_value_109;
                PyObject *tmp_args_element_value_110;
                PyObject *tmp_tuple_element_44;
                PyObject *tmp_called_value_53;
                PyObject *tmp_args_element_value_112;
                PyObject *tmp_args_element_value_113;
                PyObject *tmp_args_element_value_114;
                PyObject *tmp_called_value_54;
                PyObject *tmp_args_element_value_115;
                PyObject *tmp_args_element_value_116;
                PyObject *tmp_args_element_value_117;
                PyObject *tmp_args_element_value_118;
                PyObject *tmp_tuple_element_45;
                PyTuple_SET_ITEM(tmp_dictset_value, 0, tmp_tuple_element_41);
                tmp_called_value_49 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__3_IAudioSessionControl2_139, mod_consts[30]);

                if (tmp_called_value_49 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_49 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[30]);

                        if (unlikely(tmp_called_value_49 == NULL)) {
                            tmp_called_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
                        }

                        if (tmp_called_value_49 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 147;
                            type_description_2 = "o";
                            goto tuple_build_exception_34;
                        }
                        Py_INCREF(tmp_called_value_49);
                    } else {
                        goto tuple_build_exception_34;
                    }
                }

                tmp_args_element_value_102 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_103 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__3_IAudioSessionControl2_139, mod_consts[18]);

                if (tmp_args_element_value_103 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_103 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[18]);

                        if (unlikely(tmp_args_element_value_103 == NULL)) {
                            tmp_args_element_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                        }

                        if (tmp_args_element_value_103 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_49);
                            Py_DECREF(tmp_args_element_value_102);

                            exception_lineno = 149;
                            type_description_2 = "o";
                            goto tuple_build_exception_34;
                        }
                        Py_INCREF(tmp_args_element_value_103);
                    } else {
                        goto tuple_build_exception_34;
                    }
                }

                tmp_args_element_value_104 = mod_consts[89];
                tmp_tuple_element_43 = MAKE_LIST1(mod_consts[73]);
                tmp_args_element_value_105 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_50;
                    PyObject *tmp_args_element_value_106;
                    PyTuple_SET_ITEM(tmp_args_element_value_105, 0, tmp_tuple_element_43);
                    tmp_called_value_50 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__3_IAudioSessionControl2_139, mod_consts[20]);

                    if (tmp_called_value_50 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_50 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[20]);

                            if (unlikely(tmp_called_value_50 == NULL)) {
                                tmp_called_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                            }

                            if (tmp_called_value_50 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 151;
                                type_description_2 = "o";
                                goto tuple_build_exception_35;
                            }
                            Py_INCREF(tmp_called_value_50);
                        } else {
                            goto tuple_build_exception_35;
                        }
                    }

                    tmp_args_element_value_106 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__3_IAudioSessionControl2_139, mod_consts[27]);

                    if (tmp_args_element_value_106 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_106 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[27]);

                            if (unlikely(tmp_args_element_value_106 == NULL)) {
                                tmp_args_element_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
                            }

                            if (tmp_args_element_value_106 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_50);

                                exception_lineno = 151;
                                type_description_2 = "o";
                                goto tuple_build_exception_35;
                            }
                            Py_INCREF(tmp_args_element_value_106);
                        } else {
                            goto tuple_build_exception_35;
                        }
                    }

                    frame_f8abcfa470378899223e1c72de85e63c_4->m_frame.f_lineno = 151;
                    tmp_tuple_element_43 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_50, tmp_args_element_value_106);
                    Py_DECREF(tmp_called_value_50);
                    Py_DECREF(tmp_args_element_value_106);
                    if (tmp_tuple_element_43 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 151;
                        type_description_2 = "o";
                        goto tuple_build_exception_35;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_105, 1, tmp_tuple_element_43);
                    tmp_tuple_element_43 = mod_consts[74];
                    PyTuple_SET_ITEM0(tmp_args_element_value_105, 2, tmp_tuple_element_43);
                }
                goto tuple_build_noexception_34;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_35:;
                Py_DECREF(tmp_called_value_49);
                Py_DECREF(tmp_args_element_value_102);
                Py_DECREF(tmp_args_element_value_103);
                Py_DECREF(tmp_args_element_value_105);
                goto tuple_build_exception_34;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_34:;
                frame_f8abcfa470378899223e1c72de85e63c_4->m_frame.f_lineno = 147;
                {
                    PyObject *call_args[] = {tmp_args_element_value_102, tmp_args_element_value_103, tmp_args_element_value_104, tmp_args_element_value_105};
                    tmp_tuple_element_41 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_49, call_args);
                }

                Py_DECREF(tmp_called_value_49);
                Py_DECREF(tmp_args_element_value_102);
                Py_DECREF(tmp_args_element_value_103);
                Py_DECREF(tmp_args_element_value_105);
                if (tmp_tuple_element_41 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 147;
                    type_description_2 = "o";
                    goto tuple_build_exception_34;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 1, tmp_tuple_element_41);
                tmp_called_value_51 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__3_IAudioSessionControl2_139, mod_consts[30]);

                if (tmp_called_value_51 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_51 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[30]);

                        if (unlikely(tmp_called_value_51 == NULL)) {
                            tmp_called_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
                        }

                        if (tmp_called_value_51 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 154;
                            type_description_2 = "o";
                            goto tuple_build_exception_34;
                        }
                        Py_INCREF(tmp_called_value_51);
                    } else {
                        goto tuple_build_exception_34;
                    }
                }

                tmp_args_element_value_107 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_108 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__3_IAudioSessionControl2_139, mod_consts[18]);

                if (tmp_args_element_value_108 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_108 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[18]);

                        if (unlikely(tmp_args_element_value_108 == NULL)) {
                            tmp_args_element_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                        }

                        if (tmp_args_element_value_108 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_51);
                            Py_DECREF(tmp_args_element_value_107);

                            exception_lineno = 154;
                            type_description_2 = "o";
                            goto tuple_build_exception_34;
                        }
                        Py_INCREF(tmp_args_element_value_108);
                    } else {
                        goto tuple_build_exception_34;
                    }
                }

                tmp_args_element_value_109 = mod_consts[90];
                tmp_tuple_element_44 = MAKE_LIST1(mod_consts[73]);
                tmp_args_element_value_110 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_52;
                    PyObject *tmp_args_element_value_111;
                    PyTuple_SET_ITEM(tmp_args_element_value_110, 0, tmp_tuple_element_44);
                    tmp_called_value_52 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__3_IAudioSessionControl2_139, mod_consts[20]);

                    if (tmp_called_value_52 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_52 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[20]);

                            if (unlikely(tmp_called_value_52 == NULL)) {
                                tmp_called_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                            }

                            if (tmp_called_value_52 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 154;
                                type_description_2 = "o";
                                goto tuple_build_exception_36;
                            }
                            Py_INCREF(tmp_called_value_52);
                        } else {
                            goto tuple_build_exception_36;
                        }
                    }

                    tmp_args_element_value_111 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__3_IAudioSessionControl2_139, mod_consts[24]);

                    if (tmp_args_element_value_111 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_111 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_args_element_value_111 == NULL)) {
                                tmp_args_element_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_args_element_value_111 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_52);

                                exception_lineno = 154;
                                type_description_2 = "o";
                                goto tuple_build_exception_36;
                            }
                            Py_INCREF(tmp_args_element_value_111);
                        } else {
                            goto tuple_build_exception_36;
                        }
                    }

                    frame_f8abcfa470378899223e1c72de85e63c_4->m_frame.f_lineno = 154;
                    tmp_tuple_element_44 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_52, tmp_args_element_value_111);
                    Py_DECREF(tmp_called_value_52);
                    Py_DECREF(tmp_args_element_value_111);
                    if (tmp_tuple_element_44 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 154;
                        type_description_2 = "o";
                        goto tuple_build_exception_36;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_110, 1, tmp_tuple_element_44);
                    tmp_tuple_element_44 = mod_consts[74];
                    PyTuple_SET_ITEM0(tmp_args_element_value_110, 2, tmp_tuple_element_44);
                }
                goto tuple_build_noexception_35;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_36:;
                Py_DECREF(tmp_called_value_51);
                Py_DECREF(tmp_args_element_value_107);
                Py_DECREF(tmp_args_element_value_108);
                Py_DECREF(tmp_args_element_value_110);
                goto tuple_build_exception_34;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_35:;
                frame_f8abcfa470378899223e1c72de85e63c_4->m_frame.f_lineno = 154;
                {
                    PyObject *call_args[] = {tmp_args_element_value_107, tmp_args_element_value_108, tmp_args_element_value_109, tmp_args_element_value_110};
                    tmp_tuple_element_41 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_51, call_args);
                }

                Py_DECREF(tmp_called_value_51);
                Py_DECREF(tmp_args_element_value_107);
                Py_DECREF(tmp_args_element_value_108);
                Py_DECREF(tmp_args_element_value_110);
                if (tmp_tuple_element_41 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 154;
                    type_description_2 = "o";
                    goto tuple_build_exception_34;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 2, tmp_tuple_element_41);
                tmp_called_value_53 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__3_IAudioSessionControl2_139, mod_consts[30]);

                if (tmp_called_value_53 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_53 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[30]);

                        if (unlikely(tmp_called_value_53 == NULL)) {
                            tmp_called_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
                        }

                        if (tmp_called_value_53 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 156;
                            type_description_2 = "o";
                            goto tuple_build_exception_34;
                        }
                        Py_INCREF(tmp_called_value_53);
                    } else {
                        goto tuple_build_exception_34;
                    }
                }

                tmp_args_element_value_112 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_113 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__3_IAudioSessionControl2_139, mod_consts[18]);

                if (tmp_args_element_value_113 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_113 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[18]);

                        if (unlikely(tmp_args_element_value_113 == NULL)) {
                            tmp_args_element_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                        }

                        if (tmp_args_element_value_113 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_53);
                            Py_DECREF(tmp_args_element_value_112);

                            exception_lineno = 156;
                            type_description_2 = "o";
                            goto tuple_build_exception_34;
                        }
                        Py_INCREF(tmp_args_element_value_113);
                    } else {
                        goto tuple_build_exception_34;
                    }
                }

                tmp_args_element_value_114 = mod_consts[91];
                frame_f8abcfa470378899223e1c72de85e63c_4->m_frame.f_lineno = 156;
                {
                    PyObject *call_args[] = {tmp_args_element_value_112, tmp_args_element_value_113, tmp_args_element_value_114};
                    tmp_tuple_element_41 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_53, call_args);
                }

                Py_DECREF(tmp_called_value_53);
                Py_DECREF(tmp_args_element_value_112);
                Py_DECREF(tmp_args_element_value_113);
                if (tmp_tuple_element_41 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 156;
                    type_description_2 = "o";
                    goto tuple_build_exception_34;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 3, tmp_tuple_element_41);
                tmp_called_value_54 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__3_IAudioSessionControl2_139, mod_consts[30]);

                if (tmp_called_value_54 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_54 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[30]);

                        if (unlikely(tmp_called_value_54 == NULL)) {
                            tmp_called_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
                        }

                        if (tmp_called_value_54 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 158;
                            type_description_2 = "o";
                            goto tuple_build_exception_34;
                        }
                        Py_INCREF(tmp_called_value_54);
                    } else {
                        goto tuple_build_exception_34;
                    }
                }

                tmp_args_element_value_115 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_116 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__3_IAudioSessionControl2_139, mod_consts[18]);

                if (tmp_args_element_value_116 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_116 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[18]);

                        if (unlikely(tmp_args_element_value_116 == NULL)) {
                            tmp_args_element_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                        }

                        if (tmp_args_element_value_116 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_54);
                            Py_DECREF(tmp_args_element_value_115);

                            exception_lineno = 158;
                            type_description_2 = "o";
                            goto tuple_build_exception_34;
                        }
                        Py_INCREF(tmp_args_element_value_116);
                    } else {
                        goto tuple_build_exception_34;
                    }
                }

                tmp_args_element_value_117 = mod_consts[92];
                tmp_tuple_element_45 = MAKE_LIST1(mod_consts[49]);
                tmp_args_element_value_118 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM(tmp_args_element_value_118, 0, tmp_tuple_element_45);
                tmp_tuple_element_45 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__3_IAudioSessionControl2_139, mod_consts[23]);

                if (tmp_tuple_element_45 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_45 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[23]);

                        if (unlikely(tmp_tuple_element_45 == NULL)) {
                            tmp_tuple_element_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
                        }

                        if (tmp_tuple_element_45 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 158;
                            type_description_2 = "o";
                            goto tuple_build_exception_37;
                        }
                        Py_INCREF(tmp_tuple_element_45);
                    } else {
                        goto tuple_build_exception_37;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_element_value_118, 1, tmp_tuple_element_45);
                tmp_tuple_element_45 = mod_consts[93];
                PyTuple_SET_ITEM0(tmp_args_element_value_118, 2, tmp_tuple_element_45);
                goto tuple_build_noexception_36;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_37:;
                Py_DECREF(tmp_called_value_54);
                Py_DECREF(tmp_args_element_value_115);
                Py_DECREF(tmp_args_element_value_116);
                Py_DECREF(tmp_args_element_value_118);
                goto tuple_build_exception_34;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_36:;
                frame_f8abcfa470378899223e1c72de85e63c_4->m_frame.f_lineno = 158;
                {
                    PyObject *call_args[] = {tmp_args_element_value_115, tmp_args_element_value_116, tmp_args_element_value_117, tmp_args_element_value_118};
                    tmp_tuple_element_41 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_54, call_args);
                }

                Py_DECREF(tmp_called_value_54);
                Py_DECREF(tmp_args_element_value_115);
                Py_DECREF(tmp_args_element_value_116);
                Py_DECREF(tmp_args_element_value_118);
                if (tmp_tuple_element_41 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 158;
                    type_description_2 = "o";
                    goto tuple_build_exception_34;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 4, tmp_tuple_element_41);
            }
            goto tuple_build_noexception_37;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_34:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_37:;
            tmp_res = PyObject_SetItem(locals_pycaw$api$audiopolicy$$$class__3_IAudioSessionControl2_139, mod_consts[68], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_f8abcfa470378899223e1c72de85e63c_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_f8abcfa470378899223e1c72de85e63c_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_f8abcfa470378899223e1c72de85e63c_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_f8abcfa470378899223e1c72de85e63c_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_f8abcfa470378899223e1c72de85e63c_4);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_12;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_3 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;

                goto try_except_handler_12;
            }
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
        }
        branch_yes_9:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_pycaw$api$audiopolicy$$$class__3_IAudioSessionControl2_139, mod_consts[69], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_12;
        }
        branch_no_9:;
        {
            PyObject *tmp_assign_source_44;
            PyObject *tmp_called_value_55;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_46;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_55 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_46 = mod_consts[86];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_46);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_46 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_46);
            tmp_tuple_element_46 = locals_pycaw$api$audiopolicy$$$class__3_IAudioSessionControl2_139;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_46);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_f3032e207776cc2cba16b96bd593de83->m_frame.f_lineno = 139;
            tmp_assign_source_44 = CALL_FUNCTION(tstate, tmp_called_value_55, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;

                goto try_except_handler_12;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_44;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_43 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_43);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF(locals_pycaw$api$audiopolicy$$$class__3_IAudioSessionControl2_139);
        locals_pycaw$api$audiopolicy$$$class__3_IAudioSessionControl2_139 = NULL;
        goto try_return_handler_11;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pycaw$api$audiopolicy$$$class__3_IAudioSessionControl2_139);
        locals_pycaw$api$audiopolicy$$$class__3_IAudioSessionControl2_139 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 139;
        goto try_except_handler_10;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_43);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    Py_XDECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_class_creation_3__bases_orig);
    Py_DECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_3__bases);
    Py_DECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__metaclass);
    Py_DECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_tuple_element_47;
        tmp_tuple_element_47 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_tuple_element_47 == NULL)) {
            tmp_tuple_element_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_tuple_element_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_13;
        }
        tmp_assign_source_45 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_45, 0, tmp_tuple_element_47);
        assert(tmp_class_creation_4__bases_orig == NULL);
        tmp_class_creation_4__bases_orig = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_4 = tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_46 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_46;
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_47;
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_metaclass_value_4;
        nuitka_bool tmp_condition_result_13;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_4;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_4 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_13;
        }
        tmp_condition_result_13 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_value_25 = tmp_class_creation_4__bases;
        tmp_subscript_value_4 = mod_consts[19];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_25, tmp_subscript_value_4, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_13;
        }
        tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_13;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_4);
        condexpr_end_4:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_4 = tmp_class_creation_4__bases;
        tmp_assign_source_48 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
        Py_DECREF(tmp_metaclass_value_4);
        if (tmp_assign_source_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_48;
    }
    {
        bool tmp_condition_result_14;
        PyObject *tmp_expression_value_26;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_26 = tmp_class_creation_4__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_26, mod_consts[37]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_13;
        }
        tmp_condition_result_14 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_called_value_56;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_48;
        PyObject *tmp_kwargs_value_7;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_27 = tmp_class_creation_4__metaclass;
        tmp_called_value_56 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[37]);
        if (tmp_called_value_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_13;
        }
        tmp_tuple_element_48 = mod_consts[94];
        tmp_args_value_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_48);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_48 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_48);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_7 = tmp_class_creation_4__class_decl_dict;
        frame_f3032e207776cc2cba16b96bd593de83->m_frame.f_lineno = 162;
        tmp_assign_source_49 = CALL_FUNCTION(tstate, tmp_called_value_56, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_56);
        Py_DECREF(tmp_args_value_7);
        if (tmp_assign_source_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_49;
    }
    {
        bool tmp_condition_result_15;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_28;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_28 = tmp_class_creation_4__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_28, mod_consts[39]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_13;
        }
        tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_15 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_raise_value_4;
        PyObject *tmp_mod_expr_left_4;
        PyObject *tmp_mod_expr_right_4;
        PyObject *tmp_tuple_element_49;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_name_value_6;
        PyObject *tmp_default_value_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_mod_expr_left_4 = mod_consts[40];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_29 = tmp_class_creation_4__metaclass;
        tmp_name_value_6 = mod_consts[41];
        tmp_default_value_4 = mod_consts[42];
        tmp_tuple_element_49 = BUILTIN_GETATTR(tstate, tmp_expression_value_29, tmp_name_value_6, tmp_default_value_4);
        if (tmp_tuple_element_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_13;
        }
        tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_30;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_49);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_8 = tmp_class_creation_4__prepared;
            tmp_expression_value_30 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_value_30 == NULL));
            tmp_tuple_element_49 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[41]);
            Py_DECREF(tmp_expression_value_30);
            if (tmp_tuple_element_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto tuple_build_exception_38;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_49);
        }
        goto tuple_build_noexception_38;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_38:;
        Py_DECREF(tmp_mod_expr_right_4);
        goto try_except_handler_13;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_38:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        Py_DECREF(tmp_mod_expr_right_4);
        if (tmp_raise_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_13;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 162;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_13;
    }
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_50;
    }
    branch_end_10:;
    {
        PyObject *tmp_assign_source_51;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_pycaw$api$audiopolicy$$$class__4_IAudioSessionEnumerator_162 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[43];
        tmp_res = PyObject_SetItem(locals_pycaw$api$audiopolicy$$$class__4_IAudioSessionEnumerator_162, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_15;
        }
        tmp_dictset_value = mod_consts[94];
        tmp_res = PyObject_SetItem(locals_pycaw$api$audiopolicy$$$class__4_IAudioSessionEnumerator_162, mod_consts[45], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_15;
        }
        frame_8357ac692b636db57f8eab41835e3e7f_5 = MAKE_CLASS_FRAME(tstate, codeobj_8357ac692b636db57f8eab41835e3e7f, module_pycaw$api$audiopolicy, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_8357ac692b636db57f8eab41835e3e7f_5);
        assert(Py_REFCNT(frame_8357ac692b636db57f8eab41835e3e7f_5) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_57;
            tmp_called_value_57 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__4_IAudioSessionEnumerator_162, mod_consts[31]);

            if (tmp_called_value_57 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_57 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[31]);

                    if (unlikely(tmp_called_value_57 == NULL)) {
                        tmp_called_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
                    }

                    if (tmp_called_value_57 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 163;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_value_57);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            frame_8357ac692b636db57f8eab41835e3e7f_5->m_frame.f_lineno = 163;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_57, mod_consts[95]);

            Py_DECREF(tmp_called_value_57);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_pycaw$api$audiopolicy$$$class__4_IAudioSessionEnumerator_162, mod_consts[47], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_tuple_element_50;
            PyObject *tmp_called_value_58;
            PyObject *tmp_args_element_value_119;
            PyObject *tmp_args_element_value_120;
            PyObject *tmp_args_element_value_121;
            PyObject *tmp_args_element_value_122;
            PyObject *tmp_tuple_element_51;
            tmp_called_value_58 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__4_IAudioSessionEnumerator_162, mod_consts[30]);

            if (tmp_called_value_58 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_58 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[30]);

                    if (unlikely(tmp_called_value_58 == NULL)) {
                        tmp_called_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
                    }

                    if (tmp_called_value_58 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 166;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_value_58);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_args_element_value_119 = MAKE_LIST_EMPTY(0);
            tmp_args_element_value_120 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__4_IAudioSessionEnumerator_162, mod_consts[18]);

            if (tmp_args_element_value_120 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_args_element_value_120 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_args_element_value_120 == NULL)) {
                        tmp_args_element_value_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                    }

                    if (tmp_args_element_value_120 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_58);
                        Py_DECREF(tmp_args_element_value_119);

                        exception_lineno = 166;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_args_element_value_120);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_args_element_value_121 = mod_consts[96];
            tmp_tuple_element_51 = MAKE_LIST1(mod_consts[73]);
            tmp_args_element_value_122 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_called_value_59;
                PyObject *tmp_args_element_value_123;
                PyTuple_SET_ITEM(tmp_args_element_value_122, 0, tmp_tuple_element_51);
                tmp_called_value_59 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__4_IAudioSessionEnumerator_162, mod_consts[20]);

                if (tmp_called_value_59 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_59 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[20]);

                        if (unlikely(tmp_called_value_59 == NULL)) {
                            tmp_called_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                        }

                        if (tmp_called_value_59 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 166;
                            type_description_2 = "o";
                            goto tuple_build_exception_39;
                        }
                        Py_INCREF(tmp_called_value_59);
                    } else {
                        goto tuple_build_exception_39;
                    }
                }

                tmp_args_element_value_123 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__4_IAudioSessionEnumerator_162, mod_consts[25]);

                if (tmp_args_element_value_123 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_123 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[25]);

                        if (unlikely(tmp_args_element_value_123 == NULL)) {
                            tmp_args_element_value_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
                        }

                        if (tmp_args_element_value_123 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_59);

                            exception_lineno = 166;
                            type_description_2 = "o";
                            goto tuple_build_exception_39;
                        }
                        Py_INCREF(tmp_args_element_value_123);
                    } else {
                        goto tuple_build_exception_39;
                    }
                }

                frame_8357ac692b636db57f8eab41835e3e7f_5->m_frame.f_lineno = 166;
                tmp_tuple_element_51 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_59, tmp_args_element_value_123);
                Py_DECREF(tmp_called_value_59);
                Py_DECREF(tmp_args_element_value_123);
                if (tmp_tuple_element_51 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 166;
                    type_description_2 = "o";
                    goto tuple_build_exception_39;
                }
                PyTuple_SET_ITEM(tmp_args_element_value_122, 1, tmp_tuple_element_51);
                tmp_tuple_element_51 = mod_consts[97];
                PyTuple_SET_ITEM0(tmp_args_element_value_122, 2, tmp_tuple_element_51);
            }
            goto tuple_build_noexception_39;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_39:;
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_args_element_value_119);
            Py_DECREF(tmp_args_element_value_120);
            Py_DECREF(tmp_args_element_value_122);
            goto frame_exception_exit_5;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_39:;
            frame_8357ac692b636db57f8eab41835e3e7f_5->m_frame.f_lineno = 166;
            {
                PyObject *call_args[] = {tmp_args_element_value_119, tmp_args_element_value_120, tmp_args_element_value_121, tmp_args_element_value_122};
                tmp_tuple_element_50 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_58, call_args);
            }

            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_args_element_value_119);
            Py_DECREF(tmp_args_element_value_120);
            Py_DECREF(tmp_args_element_value_122);
            if (tmp_tuple_element_50 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_dictset_value = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_60;
                PyObject *tmp_args_element_value_124;
                PyObject *tmp_args_element_value_125;
                PyObject *tmp_args_element_value_126;
                PyObject *tmp_args_element_value_127;
                PyObject *tmp_tuple_element_52;
                PyObject *tmp_args_element_value_128;
                PyObject *tmp_tuple_element_53;
                PyTuple_SET_ITEM(tmp_dictset_value, 0, tmp_tuple_element_50);
                tmp_called_value_60 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__4_IAudioSessionEnumerator_162, mod_consts[30]);

                if (tmp_called_value_60 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_60 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[30]);

                        if (unlikely(tmp_called_value_60 == NULL)) {
                            tmp_called_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
                        }

                        if (tmp_called_value_60 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 170;
                            type_description_2 = "o";
                            goto tuple_build_exception_40;
                        }
                        Py_INCREF(tmp_called_value_60);
                    } else {
                        goto tuple_build_exception_40;
                    }
                }

                tmp_args_element_value_124 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_125 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__4_IAudioSessionEnumerator_162, mod_consts[18]);

                if (tmp_args_element_value_125 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_125 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[18]);

                        if (unlikely(tmp_args_element_value_125 == NULL)) {
                            tmp_args_element_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                        }

                        if (tmp_args_element_value_125 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_60);
                            Py_DECREF(tmp_args_element_value_124);

                            exception_lineno = 172;
                            type_description_2 = "o";
                            goto tuple_build_exception_40;
                        }
                        Py_INCREF(tmp_args_element_value_125);
                    } else {
                        goto tuple_build_exception_40;
                    }
                }

                tmp_args_element_value_126 = mod_consts[98];
                tmp_tuple_element_52 = MAKE_LIST1(mod_consts[49]);
                tmp_args_element_value_127 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM(tmp_args_element_value_127, 0, tmp_tuple_element_52);
                tmp_tuple_element_52 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__4_IAudioSessionEnumerator_162, mod_consts[25]);

                if (tmp_tuple_element_52 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_52 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[25]);

                        if (unlikely(tmp_tuple_element_52 == NULL)) {
                            tmp_tuple_element_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
                        }

                        if (tmp_tuple_element_52 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 174;
                            type_description_2 = "o";
                            goto tuple_build_exception_41;
                        }
                        Py_INCREF(tmp_tuple_element_52);
                    } else {
                        goto tuple_build_exception_41;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_element_value_127, 1, tmp_tuple_element_52);
                tmp_tuple_element_52 = mod_consts[97];
                PyTuple_SET_ITEM0(tmp_args_element_value_127, 2, tmp_tuple_element_52);
                goto tuple_build_noexception_40;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_41:;
                Py_DECREF(tmp_called_value_60);
                Py_DECREF(tmp_args_element_value_124);
                Py_DECREF(tmp_args_element_value_125);
                Py_DECREF(tmp_args_element_value_127);
                goto tuple_build_exception_40;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_40:;
                tmp_tuple_element_53 = MAKE_LIST1(mod_consts[73]);
                tmp_args_element_value_128 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_61;
                    PyObject *tmp_args_element_value_129;
                    PyObject *tmp_called_value_62;
                    PyObject *tmp_args_element_value_130;
                    PyTuple_SET_ITEM(tmp_args_element_value_128, 0, tmp_tuple_element_53);
                    tmp_called_value_61 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__4_IAudioSessionEnumerator_162, mod_consts[20]);

                    if (tmp_called_value_61 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_61 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[20]);

                            if (unlikely(tmp_called_value_61 == NULL)) {
                                tmp_called_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                            }

                            if (tmp_called_value_61 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 175;
                                type_description_2 = "o";
                                goto tuple_build_exception_42;
                            }
                            Py_INCREF(tmp_called_value_61);
                        } else {
                            goto tuple_build_exception_42;
                        }
                    }

                    tmp_called_value_62 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__4_IAudioSessionEnumerator_162, mod_consts[20]);

                    if (tmp_called_value_62 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_62 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[20]);

                            if (unlikely(tmp_called_value_62 == NULL)) {
                                tmp_called_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                            }

                            if (tmp_called_value_62 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_61);

                                exception_lineno = 175;
                                type_description_2 = "o";
                                goto tuple_build_exception_42;
                            }
                            Py_INCREF(tmp_called_value_62);
                        } else {
                            goto tuple_build_exception_42;
                        }
                    }

                    tmp_args_element_value_130 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__4_IAudioSessionEnumerator_162, mod_consts[70]);

                    if (tmp_args_element_value_130 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_130 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[70]);

                            if (unlikely(tmp_args_element_value_130 == NULL)) {
                                tmp_args_element_value_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[70]);
                            }

                            if (tmp_args_element_value_130 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_61);
                                Py_DECREF(tmp_called_value_62);

                                exception_lineno = 175;
                                type_description_2 = "o";
                                goto tuple_build_exception_42;
                            }
                            Py_INCREF(tmp_args_element_value_130);
                        } else {
                            goto tuple_build_exception_42;
                        }
                    }

                    frame_8357ac692b636db57f8eab41835e3e7f_5->m_frame.f_lineno = 175;
                    tmp_args_element_value_129 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_62, tmp_args_element_value_130);
                    Py_DECREF(tmp_called_value_62);
                    Py_DECREF(tmp_args_element_value_130);
                    if (tmp_args_element_value_129 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_61);

                        exception_lineno = 175;
                        type_description_2 = "o";
                        goto tuple_build_exception_42;
                    }
                    frame_8357ac692b636db57f8eab41835e3e7f_5->m_frame.f_lineno = 175;
                    tmp_tuple_element_53 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_61, tmp_args_element_value_129);
                    Py_DECREF(tmp_called_value_61);
                    Py_DECREF(tmp_args_element_value_129);
                    if (tmp_tuple_element_53 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 175;
                        type_description_2 = "o";
                        goto tuple_build_exception_42;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_128, 1, tmp_tuple_element_53);
                    tmp_tuple_element_53 = mod_consts[99];
                    PyTuple_SET_ITEM0(tmp_args_element_value_128, 2, tmp_tuple_element_53);
                }
                goto tuple_build_noexception_41;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_42:;
                Py_DECREF(tmp_called_value_60);
                Py_DECREF(tmp_args_element_value_124);
                Py_DECREF(tmp_args_element_value_125);
                Py_DECREF(tmp_args_element_value_127);
                Py_DECREF(tmp_args_element_value_128);
                goto tuple_build_exception_40;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_41:;
                frame_8357ac692b636db57f8eab41835e3e7f_5->m_frame.f_lineno = 170;
                {
                    PyObject *call_args[] = {tmp_args_element_value_124, tmp_args_element_value_125, tmp_args_element_value_126, tmp_args_element_value_127, tmp_args_element_value_128};
                    tmp_tuple_element_50 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_60, call_args);
                }

                Py_DECREF(tmp_called_value_60);
                Py_DECREF(tmp_args_element_value_124);
                Py_DECREF(tmp_args_element_value_125);
                Py_DECREF(tmp_args_element_value_127);
                Py_DECREF(tmp_args_element_value_128);
                if (tmp_tuple_element_50 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 170;
                    type_description_2 = "o";
                    goto tuple_build_exception_40;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 1, tmp_tuple_element_50);
            }
            goto tuple_build_noexception_42;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_40:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_5;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_42:;
            tmp_res = PyObject_SetItem(locals_pycaw$api$audiopolicy$$$class__4_IAudioSessionEnumerator_162, mod_consts[68], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_8357ac692b636db57f8eab41835e3e7f_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_8357ac692b636db57f8eab41835e3e7f_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_8357ac692b636db57f8eab41835e3e7f_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_8357ac692b636db57f8eab41835e3e7f_5,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_8357ac692b636db57f8eab41835e3e7f_5);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_15;
        skip_nested_handling_4:;
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_cmp_expr_left_4 = tmp_class_creation_4__bases;
            CHECK_OBJECT(tmp_class_creation_4__bases_orig);
            tmp_cmp_expr_right_4 = tmp_class_creation_4__bases_orig;
            tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto try_except_handler_15;
            }
            if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
        }
        branch_yes_12:;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dictset_value = tmp_class_creation_4__bases_orig;
        tmp_res = PyObject_SetItem(locals_pycaw$api$audiopolicy$$$class__4_IAudioSessionEnumerator_162, mod_consts[69], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto try_except_handler_15;
        }
        branch_no_12:;
        {
            PyObject *tmp_assign_source_52;
            PyObject *tmp_called_value_63;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_54;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_63 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_54 = mod_consts[94];
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_54);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_54 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_54);
            tmp_tuple_element_54 = locals_pycaw$api$audiopolicy$$$class__4_IAudioSessionEnumerator_162;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_54);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_8 = tmp_class_creation_4__class_decl_dict;
            frame_f3032e207776cc2cba16b96bd593de83->m_frame.f_lineno = 162;
            tmp_assign_source_52 = CALL_FUNCTION(tstate, tmp_called_value_63, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto try_except_handler_15;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_52;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_51 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_51);
        goto try_return_handler_15;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        Py_DECREF(locals_pycaw$api$audiopolicy$$$class__4_IAudioSessionEnumerator_162);
        locals_pycaw$api$audiopolicy$$$class__4_IAudioSessionEnumerator_162 = NULL;
        goto try_return_handler_14;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pycaw$api$audiopolicy$$$class__4_IAudioSessionEnumerator_162);
        locals_pycaw$api$audiopolicy$$$class__4_IAudioSessionEnumerator_162 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto try_except_handler_14;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 162;
        goto try_except_handler_13;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_51);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    Py_XDECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT(tmp_class_creation_4__bases_orig);
    Py_DECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_4__bases);
    Py_DECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__metaclass);
    Py_DECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_tuple_element_55;
        tmp_tuple_element_55 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_tuple_element_55 == NULL)) {
            tmp_tuple_element_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_tuple_element_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto try_except_handler_16;
        }
        tmp_assign_source_53 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_53, 0, tmp_tuple_element_55);
        assert(tmp_class_creation_5__bases_orig == NULL);
        tmp_class_creation_5__bases_orig = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_dircall_arg1_5;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dircall_arg1_5 = tmp_class_creation_5__bases_orig;
        Py_INCREF(tmp_dircall_arg1_5);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_assign_source_54 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_5__bases == NULL);
        tmp_class_creation_5__bases = tmp_assign_source_54;
    }
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_55;
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_metaclass_value_5;
        nuitka_bool tmp_condition_result_17;
        int tmp_truth_name_5;
        PyObject *tmp_type_arg_9;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_bases_value_5;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_creation_5__bases);
        if (tmp_truth_name_5 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto try_except_handler_16;
        }
        tmp_condition_result_17 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_expression_value_31 = tmp_class_creation_5__bases;
        tmp_subscript_value_5 = mod_consts[19];
        tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_31, tmp_subscript_value_5, 0);
        if (tmp_type_arg_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto try_except_handler_16;
        }
        tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
        Py_DECREF(tmp_type_arg_9);
        if (tmp_metaclass_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto try_except_handler_16;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_5);
        condexpr_end_5:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_bases_value_5 = tmp_class_creation_5__bases;
        tmp_assign_source_56 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
        Py_DECREF(tmp_metaclass_value_5);
        if (tmp_assign_source_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_56;
    }
    {
        bool tmp_condition_result_18;
        PyObject *tmp_expression_value_32;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_32 = tmp_class_creation_5__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_32, mod_consts[37]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto try_except_handler_16;
        }
        tmp_condition_result_18 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_18 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_called_value_64;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_args_value_9;
        PyObject *tmp_tuple_element_56;
        PyObject *tmp_kwargs_value_9;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_33 = tmp_class_creation_5__metaclass;
        tmp_called_value_64 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[37]);
        if (tmp_called_value_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto try_except_handler_16;
        }
        tmp_tuple_element_56 = mod_consts[100];
        tmp_args_value_9 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_56);
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_tuple_element_56 = tmp_class_creation_5__bases;
        PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_56);
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kwargs_value_9 = tmp_class_creation_5__class_decl_dict;
        frame_f3032e207776cc2cba16b96bd593de83->m_frame.f_lineno = 180;
        tmp_assign_source_57 = CALL_FUNCTION(tstate, tmp_called_value_64, tmp_args_value_9, tmp_kwargs_value_9);
        Py_DECREF(tmp_called_value_64);
        Py_DECREF(tmp_args_value_9);
        if (tmp_assign_source_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_57;
    }
    {
        bool tmp_condition_result_19;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_expression_value_34;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_value_34 = tmp_class_creation_5__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_34, mod_consts[39]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto try_except_handler_16;
        }
        tmp_operand_value_5 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        assert(!(tmp_res == -1));
        tmp_condition_result_19 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_19 != false) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_raise_value_5;
        PyObject *tmp_mod_expr_left_5;
        PyObject *tmp_mod_expr_right_5;
        PyObject *tmp_tuple_element_57;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_name_value_7;
        PyObject *tmp_default_value_5;
        tmp_raise_type_5 = PyExc_TypeError;
        tmp_mod_expr_left_5 = mod_consts[40];
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_35 = tmp_class_creation_5__metaclass;
        tmp_name_value_7 = mod_consts[41];
        tmp_default_value_5 = mod_consts[42];
        tmp_tuple_element_57 = BUILTIN_GETATTR(tstate, tmp_expression_value_35, tmp_name_value_7, tmp_default_value_5);
        if (tmp_tuple_element_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto try_except_handler_16;
        }
        tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_36;
            PyObject *tmp_type_arg_10;
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_57);
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_type_arg_10 = tmp_class_creation_5__prepared;
            tmp_expression_value_36 = BUILTIN_TYPE1(tmp_type_arg_10);
            assert(!(tmp_expression_value_36 == NULL));
            tmp_tuple_element_57 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[41]);
            Py_DECREF(tmp_expression_value_36);
            if (tmp_tuple_element_57 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;

                goto tuple_build_exception_43;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_57);
        }
        goto tuple_build_noexception_43;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_43:;
        Py_DECREF(tmp_mod_expr_right_5);
        goto try_except_handler_16;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_43:;
        tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
        Py_DECREF(tmp_mod_expr_right_5);
        if (tmp_raise_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto try_except_handler_16;
        }
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_5;
        exception_lineno = 180;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_16;
    }
    branch_no_14:;
    goto branch_end_13;
    branch_no_13:;
    {
        PyObject *tmp_assign_source_58;
        tmp_assign_source_58 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_58;
    }
    branch_end_13:;
    {
        PyObject *tmp_assign_source_59;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_pycaw$api$audiopolicy$$$class__5_IAudioSessionManager_180 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[43];
        tmp_res = PyObject_SetItem(locals_pycaw$api$audiopolicy$$$class__5_IAudioSessionManager_180, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto try_except_handler_18;
        }
        tmp_dictset_value = mod_consts[100];
        tmp_res = PyObject_SetItem(locals_pycaw$api$audiopolicy$$$class__5_IAudioSessionManager_180, mod_consts[45], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto try_except_handler_18;
        }
        frame_2f0a6777673fd6630c66993c4adcd48d_6 = MAKE_CLASS_FRAME(tstate, codeobj_2f0a6777673fd6630c66993c4adcd48d, module_pycaw$api$audiopolicy, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_2f0a6777673fd6630c66993c4adcd48d_6);
        assert(Py_REFCNT(frame_2f0a6777673fd6630c66993c4adcd48d_6) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_65;
            tmp_called_value_65 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__5_IAudioSessionManager_180, mod_consts[31]);

            if (tmp_called_value_65 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_65 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[31]);

                    if (unlikely(tmp_called_value_65 == NULL)) {
                        tmp_called_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
                    }

                    if (tmp_called_value_65 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 181;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_value_65);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            frame_2f0a6777673fd6630c66993c4adcd48d_6->m_frame.f_lineno = 181;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_65, mod_consts[101]);

            Py_DECREF(tmp_called_value_65);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyObject_SetItem(locals_pycaw$api$audiopolicy$$$class__5_IAudioSessionManager_180, mod_consts[47], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_tuple_element_58;
            PyObject *tmp_called_value_66;
            PyObject *tmp_args_element_value_131;
            PyObject *tmp_args_element_value_132;
            PyObject *tmp_args_element_value_133;
            PyObject *tmp_args_element_value_134;
            PyObject *tmp_tuple_element_59;
            PyObject *tmp_args_element_value_136;
            PyObject *tmp_tuple_element_60;
            PyObject *tmp_args_element_value_137;
            PyObject *tmp_tuple_element_61;
            tmp_called_value_66 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__5_IAudioSessionManager_180, mod_consts[30]);

            if (tmp_called_value_66 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_66 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[30]);

                    if (unlikely(tmp_called_value_66 == NULL)) {
                        tmp_called_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
                    }

                    if (tmp_called_value_66 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 187;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_value_66);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_args_element_value_131 = MAKE_LIST_EMPTY(0);
            tmp_args_element_value_132 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__5_IAudioSessionManager_180, mod_consts[18]);

            if (tmp_args_element_value_132 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_args_element_value_132 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_args_element_value_132 == NULL)) {
                        tmp_args_element_value_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                    }

                    if (tmp_args_element_value_132 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_66);
                        Py_DECREF(tmp_args_element_value_131);

                        exception_lineno = 189;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_args_element_value_132);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_args_element_value_133 = mod_consts[102];
            tmp_tuple_element_59 = MAKE_LIST1(mod_consts[49]);
            tmp_args_element_value_134 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_called_value_67;
                PyObject *tmp_args_element_value_135;
                PyTuple_SET_ITEM(tmp_args_element_value_134, 0, tmp_tuple_element_59);
                tmp_called_value_67 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__5_IAudioSessionManager_180, mod_consts[20]);

                if (tmp_called_value_67 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_67 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[20]);

                        if (unlikely(tmp_called_value_67 == NULL)) {
                            tmp_called_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                        }

                        if (tmp_called_value_67 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 191;
                            type_description_2 = "o";
                            goto tuple_build_exception_44;
                        }
                        Py_INCREF(tmp_called_value_67);
                    } else {
                        goto tuple_build_exception_44;
                    }
                }

                tmp_args_element_value_135 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__5_IAudioSessionManager_180, mod_consts[31]);

                if (tmp_args_element_value_135 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_135 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[31]);

                        if (unlikely(tmp_args_element_value_135 == NULL)) {
                            tmp_args_element_value_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
                        }

                        if (tmp_args_element_value_135 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_67);

                            exception_lineno = 191;
                            type_description_2 = "o";
                            goto tuple_build_exception_44;
                        }
                        Py_INCREF(tmp_args_element_value_135);
                    } else {
                        goto tuple_build_exception_44;
                    }
                }

                frame_2f0a6777673fd6630c66993c4adcd48d_6->m_frame.f_lineno = 191;
                tmp_tuple_element_59 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_67, tmp_args_element_value_135);
                Py_DECREF(tmp_called_value_67);
                Py_DECREF(tmp_args_element_value_135);
                if (tmp_tuple_element_59 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 191;
                    type_description_2 = "o";
                    goto tuple_build_exception_44;
                }
                PyTuple_SET_ITEM(tmp_args_element_value_134, 1, tmp_tuple_element_59);
                tmp_tuple_element_59 = mod_consts[103];
                PyTuple_SET_ITEM0(tmp_args_element_value_134, 2, tmp_tuple_element_59);
            }
            goto tuple_build_noexception_44;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_44:;
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_args_element_value_131);
            Py_DECREF(tmp_args_element_value_132);
            Py_DECREF(tmp_args_element_value_134);
            goto frame_exception_exit_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_44:;
            tmp_tuple_element_60 = MAKE_LIST1(mod_consts[49]);
            tmp_args_element_value_136 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM(tmp_args_element_value_136, 0, tmp_tuple_element_60);
            tmp_tuple_element_60 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__5_IAudioSessionManager_180, mod_consts[24]);

            if (tmp_tuple_element_60 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_60 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[24]);

                    if (unlikely(tmp_tuple_element_60 == NULL)) {
                        tmp_tuple_element_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                    }

                    if (tmp_tuple_element_60 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 192;
                        type_description_2 = "o";
                        goto tuple_build_exception_45;
                    }
                    Py_INCREF(tmp_tuple_element_60);
                } else {
                    goto tuple_build_exception_45;
                }
            }

            PyTuple_SET_ITEM(tmp_args_element_value_136, 1, tmp_tuple_element_60);
            tmp_tuple_element_60 = mod_consts[104];
            PyTuple_SET_ITEM0(tmp_args_element_value_136, 2, tmp_tuple_element_60);
            goto tuple_build_noexception_45;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_45:;
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_args_element_value_131);
            Py_DECREF(tmp_args_element_value_132);
            Py_DECREF(tmp_args_element_value_134);
            Py_DECREF(tmp_args_element_value_136);
            goto frame_exception_exit_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_45:;
            tmp_tuple_element_61 = MAKE_LIST1(mod_consts[73]);
            tmp_args_element_value_137 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_called_value_68;
                PyObject *tmp_args_element_value_138;
                PyObject *tmp_called_value_69;
                PyObject *tmp_args_element_value_139;
                PyTuple_SET_ITEM(tmp_args_element_value_137, 0, tmp_tuple_element_61);
                tmp_called_value_68 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__5_IAudioSessionManager_180, mod_consts[20]);

                if (tmp_called_value_68 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_68 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[20]);

                        if (unlikely(tmp_called_value_68 == NULL)) {
                            tmp_called_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                        }

                        if (tmp_called_value_68 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 193;
                            type_description_2 = "o";
                            goto tuple_build_exception_46;
                        }
                        Py_INCREF(tmp_called_value_68);
                    } else {
                        goto tuple_build_exception_46;
                    }
                }

                tmp_called_value_69 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__5_IAudioSessionManager_180, mod_consts[20]);

                if (tmp_called_value_69 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_69 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[20]);

                        if (unlikely(tmp_called_value_69 == NULL)) {
                            tmp_called_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                        }

                        if (tmp_called_value_69 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_68);

                            exception_lineno = 193;
                            type_description_2 = "o";
                            goto tuple_build_exception_46;
                        }
                        Py_INCREF(tmp_called_value_69);
                    } else {
                        goto tuple_build_exception_46;
                    }
                }

                tmp_args_element_value_139 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__5_IAudioSessionManager_180, mod_consts[70]);

                if (tmp_args_element_value_139 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_139 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[70]);

                        if (unlikely(tmp_args_element_value_139 == NULL)) {
                            tmp_args_element_value_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[70]);
                        }

                        if (tmp_args_element_value_139 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_68);
                            Py_DECREF(tmp_called_value_69);

                            exception_lineno = 193;
                            type_description_2 = "o";
                            goto tuple_build_exception_46;
                        }
                        Py_INCREF(tmp_args_element_value_139);
                    } else {
                        goto tuple_build_exception_46;
                    }
                }

                frame_2f0a6777673fd6630c66993c4adcd48d_6->m_frame.f_lineno = 193;
                tmp_args_element_value_138 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_69, tmp_args_element_value_139);
                Py_DECREF(tmp_called_value_69);
                Py_DECREF(tmp_args_element_value_139);
                if (tmp_args_element_value_138 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_68);

                    exception_lineno = 193;
                    type_description_2 = "o";
                    goto tuple_build_exception_46;
                }
                frame_2f0a6777673fd6630c66993c4adcd48d_6->m_frame.f_lineno = 193;
                tmp_tuple_element_61 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_68, tmp_args_element_value_138);
                Py_DECREF(tmp_called_value_68);
                Py_DECREF(tmp_args_element_value_138);
                if (tmp_tuple_element_61 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 193;
                    type_description_2 = "o";
                    goto tuple_build_exception_46;
                }
                PyTuple_SET_ITEM(tmp_args_element_value_137, 1, tmp_tuple_element_61);
                tmp_tuple_element_61 = mod_consts[105];
                PyTuple_SET_ITEM0(tmp_args_element_value_137, 2, tmp_tuple_element_61);
            }
            goto tuple_build_noexception_46;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_46:;
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_args_element_value_131);
            Py_DECREF(tmp_args_element_value_132);
            Py_DECREF(tmp_args_element_value_134);
            Py_DECREF(tmp_args_element_value_136);
            Py_DECREF(tmp_args_element_value_137);
            goto frame_exception_exit_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_46:;
            frame_2f0a6777673fd6630c66993c4adcd48d_6->m_frame.f_lineno = 187;
            {
                PyObject *call_args[] = {tmp_args_element_value_131, tmp_args_element_value_132, tmp_args_element_value_133, tmp_args_element_value_134, tmp_args_element_value_136, tmp_args_element_value_137};
                tmp_tuple_element_58 = CALL_FUNCTION_WITH_ARGS6(tstate, tmp_called_value_66, call_args);
            }

            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_args_element_value_131);
            Py_DECREF(tmp_args_element_value_132);
            Py_DECREF(tmp_args_element_value_134);
            Py_DECREF(tmp_args_element_value_136);
            Py_DECREF(tmp_args_element_value_137);
            if (tmp_tuple_element_58 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_dictset_value = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_70;
                PyObject *tmp_args_element_value_140;
                PyObject *tmp_args_element_value_141;
                PyObject *tmp_args_element_value_142;
                PyObject *tmp_args_element_value_143;
                PyObject *tmp_tuple_element_62;
                PyObject *tmp_args_element_value_145;
                PyObject *tmp_tuple_element_63;
                PyObject *tmp_args_element_value_146;
                PyObject *tmp_tuple_element_64;
                PyTuple_SET_ITEM(tmp_dictset_value, 0, tmp_tuple_element_58);
                tmp_called_value_70 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__5_IAudioSessionManager_180, mod_consts[30]);

                if (tmp_called_value_70 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_70 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[30]);

                        if (unlikely(tmp_called_value_70 == NULL)) {
                            tmp_called_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
                        }

                        if (tmp_called_value_70 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 199;
                            type_description_2 = "o";
                            goto tuple_build_exception_47;
                        }
                        Py_INCREF(tmp_called_value_70);
                    } else {
                        goto tuple_build_exception_47;
                    }
                }

                tmp_args_element_value_140 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_141 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__5_IAudioSessionManager_180, mod_consts[18]);

                if (tmp_args_element_value_141 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_141 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[18]);

                        if (unlikely(tmp_args_element_value_141 == NULL)) {
                            tmp_args_element_value_141 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                        }

                        if (tmp_args_element_value_141 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_70);
                            Py_DECREF(tmp_args_element_value_140);

                            exception_lineno = 201;
                            type_description_2 = "o";
                            goto tuple_build_exception_47;
                        }
                        Py_INCREF(tmp_args_element_value_141);
                    } else {
                        goto tuple_build_exception_47;
                    }
                }

                tmp_args_element_value_142 = mod_consts[106];
                tmp_tuple_element_62 = MAKE_LIST1(mod_consts[49]);
                tmp_args_element_value_143 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_71;
                    PyObject *tmp_args_element_value_144;
                    PyTuple_SET_ITEM(tmp_args_element_value_143, 0, tmp_tuple_element_62);
                    tmp_called_value_71 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__5_IAudioSessionManager_180, mod_consts[20]);

                    if (tmp_called_value_71 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_71 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[20]);

                            if (unlikely(tmp_called_value_71 == NULL)) {
                                tmp_called_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                            }

                            if (tmp_called_value_71 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 203;
                                type_description_2 = "o";
                                goto tuple_build_exception_48;
                            }
                            Py_INCREF(tmp_called_value_71);
                        } else {
                            goto tuple_build_exception_48;
                        }
                    }

                    tmp_args_element_value_144 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__5_IAudioSessionManager_180, mod_consts[31]);

                    if (tmp_args_element_value_144 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_144 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[31]);

                            if (unlikely(tmp_args_element_value_144 == NULL)) {
                                tmp_args_element_value_144 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
                            }

                            if (tmp_args_element_value_144 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_71);

                                exception_lineno = 203;
                                type_description_2 = "o";
                                goto tuple_build_exception_48;
                            }
                            Py_INCREF(tmp_args_element_value_144);
                        } else {
                            goto tuple_build_exception_48;
                        }
                    }

                    frame_2f0a6777673fd6630c66993c4adcd48d_6->m_frame.f_lineno = 203;
                    tmp_tuple_element_62 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_71, tmp_args_element_value_144);
                    Py_DECREF(tmp_called_value_71);
                    Py_DECREF(tmp_args_element_value_144);
                    if (tmp_tuple_element_62 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 203;
                        type_description_2 = "o";
                        goto tuple_build_exception_48;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_143, 1, tmp_tuple_element_62);
                    tmp_tuple_element_62 = mod_consts[103];
                    PyTuple_SET_ITEM0(tmp_args_element_value_143, 2, tmp_tuple_element_62);
                }
                goto tuple_build_noexception_47;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_48:;
                Py_DECREF(tmp_called_value_70);
                Py_DECREF(tmp_args_element_value_140);
                Py_DECREF(tmp_args_element_value_141);
                Py_DECREF(tmp_args_element_value_143);
                goto tuple_build_exception_47;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_47:;
                tmp_tuple_element_63 = MAKE_LIST1(mod_consts[49]);
                tmp_args_element_value_145 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM(tmp_args_element_value_145, 0, tmp_tuple_element_63);
                tmp_tuple_element_63 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__5_IAudioSessionManager_180, mod_consts[24]);

                if (tmp_tuple_element_63 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_63 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[24]);

                        if (unlikely(tmp_tuple_element_63 == NULL)) {
                            tmp_tuple_element_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                        }

                        if (tmp_tuple_element_63 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 204;
                            type_description_2 = "o";
                            goto tuple_build_exception_49;
                        }
                        Py_INCREF(tmp_tuple_element_63);
                    } else {
                        goto tuple_build_exception_49;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_element_value_145, 1, tmp_tuple_element_63);
                tmp_tuple_element_63 = mod_consts[107];
                PyTuple_SET_ITEM0(tmp_args_element_value_145, 2, tmp_tuple_element_63);
                goto tuple_build_noexception_48;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_49:;
                Py_DECREF(tmp_called_value_70);
                Py_DECREF(tmp_args_element_value_140);
                Py_DECREF(tmp_args_element_value_141);
                Py_DECREF(tmp_args_element_value_143);
                Py_DECREF(tmp_args_element_value_145);
                goto tuple_build_exception_47;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_48:;
                tmp_tuple_element_64 = MAKE_LIST1(mod_consts[73]);
                tmp_args_element_value_146 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_72;
                    PyObject *tmp_args_element_value_147;
                    PyObject *tmp_called_value_73;
                    PyObject *tmp_args_element_value_148;
                    PyTuple_SET_ITEM(tmp_args_element_value_146, 0, tmp_tuple_element_64);
                    tmp_called_value_72 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__5_IAudioSessionManager_180, mod_consts[20]);

                    if (tmp_called_value_72 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_72 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[20]);

                            if (unlikely(tmp_called_value_72 == NULL)) {
                                tmp_called_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                            }

                            if (tmp_called_value_72 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 205;
                                type_description_2 = "o";
                                goto tuple_build_exception_50;
                            }
                            Py_INCREF(tmp_called_value_72);
                        } else {
                            goto tuple_build_exception_50;
                        }
                    }

                    tmp_called_value_73 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__5_IAudioSessionManager_180, mod_consts[20]);

                    if (tmp_called_value_73 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_73 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[20]);

                            if (unlikely(tmp_called_value_73 == NULL)) {
                                tmp_called_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                            }

                            if (tmp_called_value_73 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_72);

                                exception_lineno = 205;
                                type_description_2 = "o";
                                goto tuple_build_exception_50;
                            }
                            Py_INCREF(tmp_called_value_73);
                        } else {
                            goto tuple_build_exception_50;
                        }
                    }

                    tmp_args_element_value_148 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__5_IAudioSessionManager_180, mod_consts[36]);

                    if (tmp_args_element_value_148 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_148 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[36]);

                            if (unlikely(tmp_args_element_value_148 == NULL)) {
                                tmp_args_element_value_148 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
                            }

                            if (tmp_args_element_value_148 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_72);
                                Py_DECREF(tmp_called_value_73);

                                exception_lineno = 205;
                                type_description_2 = "o";
                                goto tuple_build_exception_50;
                            }
                            Py_INCREF(tmp_args_element_value_148);
                        } else {
                            goto tuple_build_exception_50;
                        }
                    }

                    frame_2f0a6777673fd6630c66993c4adcd48d_6->m_frame.f_lineno = 205;
                    tmp_args_element_value_147 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_73, tmp_args_element_value_148);
                    Py_DECREF(tmp_called_value_73);
                    Py_DECREF(tmp_args_element_value_148);
                    if (tmp_args_element_value_147 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_72);

                        exception_lineno = 205;
                        type_description_2 = "o";
                        goto tuple_build_exception_50;
                    }
                    frame_2f0a6777673fd6630c66993c4adcd48d_6->m_frame.f_lineno = 205;
                    tmp_tuple_element_64 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_72, tmp_args_element_value_147);
                    Py_DECREF(tmp_called_value_72);
                    Py_DECREF(tmp_args_element_value_147);
                    if (tmp_tuple_element_64 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 205;
                        type_description_2 = "o";
                        goto tuple_build_exception_50;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_146, 1, tmp_tuple_element_64);
                    tmp_tuple_element_64 = mod_consts[108];
                    PyTuple_SET_ITEM0(tmp_args_element_value_146, 2, tmp_tuple_element_64);
                }
                goto tuple_build_noexception_49;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_50:;
                Py_DECREF(tmp_called_value_70);
                Py_DECREF(tmp_args_element_value_140);
                Py_DECREF(tmp_args_element_value_141);
                Py_DECREF(tmp_args_element_value_143);
                Py_DECREF(tmp_args_element_value_145);
                Py_DECREF(tmp_args_element_value_146);
                goto tuple_build_exception_47;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_49:;
                frame_2f0a6777673fd6630c66993c4adcd48d_6->m_frame.f_lineno = 199;
                {
                    PyObject *call_args[] = {tmp_args_element_value_140, tmp_args_element_value_141, tmp_args_element_value_142, tmp_args_element_value_143, tmp_args_element_value_145, tmp_args_element_value_146};
                    tmp_tuple_element_58 = CALL_FUNCTION_WITH_ARGS6(tstate, tmp_called_value_70, call_args);
                }

                Py_DECREF(tmp_called_value_70);
                Py_DECREF(tmp_args_element_value_140);
                Py_DECREF(tmp_args_element_value_141);
                Py_DECREF(tmp_args_element_value_143);
                Py_DECREF(tmp_args_element_value_145);
                Py_DECREF(tmp_args_element_value_146);
                if (tmp_tuple_element_58 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 199;
                    type_description_2 = "o";
                    goto tuple_build_exception_47;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 1, tmp_tuple_element_58);
            }
            goto tuple_build_noexception_50;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_47:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_50:;
            tmp_res = PyObject_SetItem(locals_pycaw$api$audiopolicy$$$class__5_IAudioSessionManager_180, mod_consts[68], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_5;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_2f0a6777673fd6630c66993c4adcd48d_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_2f0a6777673fd6630c66993c4adcd48d_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_2f0a6777673fd6630c66993c4adcd48d_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_2f0a6777673fd6630c66993c4adcd48d_6,
            type_description_2,
            outline_4_var___class__
        );



        assertFrameObject(frame_2f0a6777673fd6630c66993c4adcd48d_6);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_18;
        skip_nested_handling_5:;
        {
            nuitka_bool tmp_condition_result_20;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_cmp_expr_left_5 = tmp_class_creation_5__bases;
            CHECK_OBJECT(tmp_class_creation_5__bases_orig);
            tmp_cmp_expr_right_5 = tmp_class_creation_5__bases_orig;
            tmp_condition_result_20 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;

                goto try_except_handler_18;
            }
            if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
                goto branch_yes_15;
            } else {
                goto branch_no_15;
            }
        }
        branch_yes_15:;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dictset_value = tmp_class_creation_5__bases_orig;
        tmp_res = PyObject_SetItem(locals_pycaw$api$audiopolicy$$$class__5_IAudioSessionManager_180, mod_consts[69], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto try_except_handler_18;
        }
        branch_no_15:;
        {
            PyObject *tmp_assign_source_60;
            PyObject *tmp_called_value_74;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_65;
            PyObject *tmp_kwargs_value_10;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_value_74 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_65 = mod_consts[100];
            tmp_args_value_10 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_65);
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_tuple_element_65 = tmp_class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_65);
            tmp_tuple_element_65 = locals_pycaw$api$audiopolicy$$$class__5_IAudioSessionManager_180;
            PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_65);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_10 = tmp_class_creation_5__class_decl_dict;
            frame_f3032e207776cc2cba16b96bd593de83->m_frame.f_lineno = 180;
            tmp_assign_source_60 = CALL_FUNCTION(tstate, tmp_called_value_74, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_args_value_10);
            if (tmp_assign_source_60 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;

                goto try_except_handler_18;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_60;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_assign_source_59 = outline_4_var___class__;
        Py_INCREF(tmp_assign_source_59);
        goto try_return_handler_18;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_18:;
        Py_DECREF(locals_pycaw$api$audiopolicy$$$class__5_IAudioSessionManager_180);
        locals_pycaw$api$audiopolicy$$$class__5_IAudioSessionManager_180 = NULL;
        goto try_return_handler_17;
        // Exception handler code:
        try_except_handler_18:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pycaw$api$audiopolicy$$$class__5_IAudioSessionManager_180);
        locals_pycaw$api$audiopolicy$$$class__5_IAudioSessionManager_180 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto try_except_handler_17;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_17 = exception_type;
        exception_keeper_value_17 = exception_value;
        exception_keeper_tb_17 = exception_tb;
        exception_keeper_lineno_17 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 180;
        goto try_except_handler_16;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_59);
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_5__bases_orig);
    tmp_class_creation_5__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    Py_XDECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_class_creation_5__bases_orig);
    Py_DECREF(tmp_class_creation_5__bases_orig);
    tmp_class_creation_5__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_5__bases);
    Py_DECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    Py_DECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_5__metaclass);
    Py_DECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_tuple_element_66;
        tmp_tuple_element_66 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_tuple_element_66 == NULL)) {
            tmp_tuple_element_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_tuple_element_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto try_except_handler_19;
        }
        tmp_assign_source_61 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_61, 0, tmp_tuple_element_66);
        assert(tmp_class_creation_6__bases_orig == NULL);
        tmp_class_creation_6__bases_orig = tmp_assign_source_61;
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_dircall_arg1_6;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dircall_arg1_6 = tmp_class_creation_6__bases_orig;
        Py_INCREF(tmp_dircall_arg1_6);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_6};
            tmp_assign_source_62 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_6__bases == NULL);
        tmp_class_creation_6__bases = tmp_assign_source_62;
    }
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__class_decl_dict == NULL);
        tmp_class_creation_6__class_decl_dict = tmp_assign_source_63;
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_metaclass_value_6;
        nuitka_bool tmp_condition_result_21;
        int tmp_truth_name_6;
        PyObject *tmp_type_arg_11;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_bases_value_6;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_creation_6__bases);
        if (tmp_truth_name_6 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto try_except_handler_19;
        }
        tmp_condition_result_21 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_expression_value_37 = tmp_class_creation_6__bases;
        tmp_subscript_value_6 = mod_consts[19];
        tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_37, tmp_subscript_value_6, 0);
        if (tmp_type_arg_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto try_except_handler_19;
        }
        tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
        Py_DECREF(tmp_type_arg_11);
        if (tmp_metaclass_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto try_except_handler_19;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_6);
        condexpr_end_6:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_bases_value_6 = tmp_class_creation_6__bases;
        tmp_assign_source_64 = SELECT_METACLASS(tstate, tmp_metaclass_value_6, tmp_bases_value_6);
        Py_DECREF(tmp_metaclass_value_6);
        if (tmp_assign_source_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_6__metaclass == NULL);
        tmp_class_creation_6__metaclass = tmp_assign_source_64;
    }
    {
        bool tmp_condition_result_22;
        PyObject *tmp_expression_value_38;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_38 = tmp_class_creation_6__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_38, mod_consts[37]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto try_except_handler_19;
        }
        tmp_condition_result_22 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_22 != false) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_called_value_75;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_args_value_11;
        PyObject *tmp_tuple_element_67;
        PyObject *tmp_kwargs_value_11;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_39 = tmp_class_creation_6__metaclass;
        tmp_called_value_75 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[37]);
        if (tmp_called_value_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto try_except_handler_19;
        }
        tmp_tuple_element_67 = mod_consts[109];
        tmp_args_value_11 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_67);
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_tuple_element_67 = tmp_class_creation_6__bases;
        PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_67);
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_kwargs_value_11 = tmp_class_creation_6__class_decl_dict;
        frame_f3032e207776cc2cba16b96bd593de83->m_frame.f_lineno = 210;
        tmp_assign_source_65 = CALL_FUNCTION(tstate, tmp_called_value_75, tmp_args_value_11, tmp_kwargs_value_11);
        Py_DECREF(tmp_called_value_75);
        Py_DECREF(tmp_args_value_11);
        if (tmp_assign_source_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_65;
    }
    {
        bool tmp_condition_result_23;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_expression_value_40;
        CHECK_OBJECT(tmp_class_creation_6__prepared);
        tmp_expression_value_40 = tmp_class_creation_6__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_40, mod_consts[39]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto try_except_handler_19;
        }
        tmp_operand_value_6 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_23 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_23 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_raise_type_6;
        PyObject *tmp_raise_value_6;
        PyObject *tmp_mod_expr_left_6;
        PyObject *tmp_mod_expr_right_6;
        PyObject *tmp_tuple_element_68;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_name_value_8;
        PyObject *tmp_default_value_6;
        tmp_raise_type_6 = PyExc_TypeError;
        tmp_mod_expr_left_6 = mod_consts[40];
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_41 = tmp_class_creation_6__metaclass;
        tmp_name_value_8 = mod_consts[41];
        tmp_default_value_6 = mod_consts[42];
        tmp_tuple_element_68 = BUILTIN_GETATTR(tstate, tmp_expression_value_41, tmp_name_value_8, tmp_default_value_6);
        if (tmp_tuple_element_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto try_except_handler_19;
        }
        tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_42;
            PyObject *tmp_type_arg_12;
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_68);
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_type_arg_12 = tmp_class_creation_6__prepared;
            tmp_expression_value_42 = BUILTIN_TYPE1(tmp_type_arg_12);
            assert(!(tmp_expression_value_42 == NULL));
            tmp_tuple_element_68 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts[41]);
            Py_DECREF(tmp_expression_value_42);
            if (tmp_tuple_element_68 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;

                goto tuple_build_exception_51;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_68);
        }
        goto tuple_build_noexception_51;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_51:;
        Py_DECREF(tmp_mod_expr_right_6);
        goto try_except_handler_19;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_51:;
        tmp_raise_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
        Py_DECREF(tmp_mod_expr_right_6);
        if (tmp_raise_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto try_except_handler_19;
        }
        exception_type = tmp_raise_type_6;
        Py_INCREF(tmp_raise_type_6);
        exception_value = tmp_raise_value_6;
        exception_lineno = 210;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_19;
    }
    branch_no_17:;
    goto branch_end_16;
    branch_no_16:;
    {
        PyObject *tmp_assign_source_66;
        tmp_assign_source_66 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_66;
    }
    branch_end_16:;
    {
        PyObject *tmp_assign_source_67;
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_set_locals_6 = tmp_class_creation_6__prepared;
            locals_pycaw$api$audiopolicy$$$class__6_IAudioSessionNotification_210 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[43];
        tmp_res = PyObject_SetItem(locals_pycaw$api$audiopolicy$$$class__6_IAudioSessionNotification_210, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto try_except_handler_21;
        }
        tmp_dictset_value = mod_consts[109];
        tmp_res = PyObject_SetItem(locals_pycaw$api$audiopolicy$$$class__6_IAudioSessionNotification_210, mod_consts[45], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto try_except_handler_21;
        }
        frame_fc5bde29450440689e5e4fc3be08c980_7 = MAKE_CLASS_FRAME(tstate, codeobj_fc5bde29450440689e5e4fc3be08c980, module_pycaw$api$audiopolicy, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_fc5bde29450440689e5e4fc3be08c980_7);
        assert(Py_REFCNT(frame_fc5bde29450440689e5e4fc3be08c980_7) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_76;
            tmp_called_value_76 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__6_IAudioSessionNotification_210, mod_consts[31]);

            if (tmp_called_value_76 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_76 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[31]);

                    if (unlikely(tmp_called_value_76 == NULL)) {
                        tmp_called_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
                    }

                    if (tmp_called_value_76 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 211;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_value_76);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            frame_fc5bde29450440689e5e4fc3be08c980_7->m_frame.f_lineno = 211;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_76, mod_consts[110]);

            Py_DECREF(tmp_called_value_76);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_res = PyObject_SetItem(locals_pycaw$api$audiopolicy$$$class__6_IAudioSessionNotification_210, mod_consts[47], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_tuple_element_69;
            PyObject *tmp_called_value_77;
            PyObject *tmp_args_element_value_149;
            PyObject *tmp_args_element_value_150;
            PyObject *tmp_args_element_value_151;
            PyObject *tmp_args_element_value_152;
            PyObject *tmp_tuple_element_70;
            tmp_called_value_77 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__6_IAudioSessionNotification_210, mod_consts[30]);

            if (tmp_called_value_77 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_77 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[30]);

                    if (unlikely(tmp_called_value_77 == NULL)) {
                        tmp_called_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
                    }

                    if (tmp_called_value_77 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 216;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_value_77);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_args_element_value_149 = MAKE_LIST_EMPTY(0);
            tmp_args_element_value_150 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__6_IAudioSessionNotification_210, mod_consts[18]);

            if (tmp_args_element_value_150 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_args_element_value_150 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_args_element_value_150 == NULL)) {
                        tmp_args_element_value_150 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                    }

                    if (tmp_args_element_value_150 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_77);
                        Py_DECREF(tmp_args_element_value_149);

                        exception_lineno = 218;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_args_element_value_150);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_args_element_value_151 = mod_consts[111];
            tmp_tuple_element_70 = MAKE_LIST1(mod_consts[49]);
            tmp_args_element_value_152 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_called_value_78;
                PyObject *tmp_args_element_value_153;
                PyTuple_SET_ITEM(tmp_args_element_value_152, 0, tmp_tuple_element_70);
                tmp_called_value_78 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__6_IAudioSessionNotification_210, mod_consts[20]);

                if (tmp_called_value_78 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_78 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[20]);

                        if (unlikely(tmp_called_value_78 == NULL)) {
                            tmp_called_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                        }

                        if (tmp_called_value_78 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 220;
                            type_description_2 = "o";
                            goto tuple_build_exception_52;
                        }
                        Py_INCREF(tmp_called_value_78);
                    } else {
                        goto tuple_build_exception_52;
                    }
                }

                tmp_args_element_value_153 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__6_IAudioSessionNotification_210, mod_consts[70]);

                if (tmp_args_element_value_153 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_153 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[70]);

                        if (unlikely(tmp_args_element_value_153 == NULL)) {
                            tmp_args_element_value_153 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[70]);
                        }

                        if (tmp_args_element_value_153 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_78);

                            exception_lineno = 220;
                            type_description_2 = "o";
                            goto tuple_build_exception_52;
                        }
                        Py_INCREF(tmp_args_element_value_153);
                    } else {
                        goto tuple_build_exception_52;
                    }
                }

                frame_fc5bde29450440689e5e4fc3be08c980_7->m_frame.f_lineno = 220;
                tmp_tuple_element_70 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_78, tmp_args_element_value_153);
                Py_DECREF(tmp_called_value_78);
                Py_DECREF(tmp_args_element_value_153);
                if (tmp_tuple_element_70 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 220;
                    type_description_2 = "o";
                    goto tuple_build_exception_52;
                }
                PyTuple_SET_ITEM(tmp_args_element_value_152, 1, tmp_tuple_element_70);
                tmp_tuple_element_70 = mod_consts[112];
                PyTuple_SET_ITEM0(tmp_args_element_value_152, 2, tmp_tuple_element_70);
            }
            goto tuple_build_noexception_52;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_52:;
            Py_DECREF(tmp_called_value_77);
            Py_DECREF(tmp_args_element_value_149);
            Py_DECREF(tmp_args_element_value_150);
            Py_DECREF(tmp_args_element_value_152);
            goto frame_exception_exit_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_52:;
            frame_fc5bde29450440689e5e4fc3be08c980_7->m_frame.f_lineno = 216;
            {
                PyObject *call_args[] = {tmp_args_element_value_149, tmp_args_element_value_150, tmp_args_element_value_151, tmp_args_element_value_152};
                tmp_tuple_element_69 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_77, call_args);
            }

            Py_DECREF(tmp_called_value_77);
            Py_DECREF(tmp_args_element_value_149);
            Py_DECREF(tmp_args_element_value_150);
            Py_DECREF(tmp_args_element_value_152);
            if (tmp_tuple_element_69 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_dictset_value = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_dictset_value, 0, tmp_tuple_element_69);
            tmp_res = PyObject_SetItem(locals_pycaw$api$audiopolicy$$$class__6_IAudioSessionNotification_210, mod_consts[68], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_6;
        frame_exception_exit_7:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_fc5bde29450440689e5e4fc3be08c980_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_fc5bde29450440689e5e4fc3be08c980_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_fc5bde29450440689e5e4fc3be08c980_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_fc5bde29450440689e5e4fc3be08c980_7,
            type_description_2,
            outline_5_var___class__
        );



        assertFrameObject(frame_fc5bde29450440689e5e4fc3be08c980_7);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_6;
        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_6:;

        goto try_except_handler_21;
        skip_nested_handling_6:;
        {
            nuitka_bool tmp_condition_result_24;
            PyObject *tmp_cmp_expr_left_6;
            PyObject *tmp_cmp_expr_right_6;
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_cmp_expr_left_6 = tmp_class_creation_6__bases;
            CHECK_OBJECT(tmp_class_creation_6__bases_orig);
            tmp_cmp_expr_right_6 = tmp_class_creation_6__bases_orig;
            tmp_condition_result_24 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
            if (tmp_condition_result_24 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;

                goto try_except_handler_21;
            }
            if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
                goto branch_yes_18;
            } else {
                goto branch_no_18;
            }
        }
        branch_yes_18:;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dictset_value = tmp_class_creation_6__bases_orig;
        tmp_res = PyObject_SetItem(locals_pycaw$api$audiopolicy$$$class__6_IAudioSessionNotification_210, mod_consts[69], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto try_except_handler_21;
        }
        branch_no_18:;
        {
            PyObject *tmp_assign_source_68;
            PyObject *tmp_called_value_79;
            PyObject *tmp_args_value_12;
            PyObject *tmp_tuple_element_71;
            PyObject *tmp_kwargs_value_12;
            CHECK_OBJECT(tmp_class_creation_6__metaclass);
            tmp_called_value_79 = tmp_class_creation_6__metaclass;
            tmp_tuple_element_71 = mod_consts[109];
            tmp_args_value_12 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_71);
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_tuple_element_71 = tmp_class_creation_6__bases;
            PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_71);
            tmp_tuple_element_71 = locals_pycaw$api$audiopolicy$$$class__6_IAudioSessionNotification_210;
            PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_71);
            CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
            tmp_kwargs_value_12 = tmp_class_creation_6__class_decl_dict;
            frame_f3032e207776cc2cba16b96bd593de83->m_frame.f_lineno = 210;
            tmp_assign_source_68 = CALL_FUNCTION(tstate, tmp_called_value_79, tmp_args_value_12, tmp_kwargs_value_12);
            Py_DECREF(tmp_args_value_12);
            if (tmp_assign_source_68 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;

                goto try_except_handler_21;
            }
            assert(outline_5_var___class__ == NULL);
            outline_5_var___class__ = tmp_assign_source_68;
        }
        CHECK_OBJECT(outline_5_var___class__);
        tmp_assign_source_67 = outline_5_var___class__;
        Py_INCREF(tmp_assign_source_67);
        goto try_return_handler_21;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_21:;
        Py_DECREF(locals_pycaw$api$audiopolicy$$$class__6_IAudioSessionNotification_210);
        locals_pycaw$api$audiopolicy$$$class__6_IAudioSessionNotification_210 = NULL;
        goto try_return_handler_20;
        // Exception handler code:
        try_except_handler_21:;
        exception_keeper_type_19 = exception_type;
        exception_keeper_value_19 = exception_value;
        exception_keeper_tb_19 = exception_tb;
        exception_keeper_lineno_19 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pycaw$api$audiopolicy$$$class__6_IAudioSessionNotification_210);
        locals_pycaw$api$audiopolicy$$$class__6_IAudioSessionNotification_210 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_19;
        exception_value = exception_keeper_value_19;
        exception_tb = exception_keeper_tb_19;
        exception_lineno = exception_keeper_lineno_19;

        goto try_except_handler_20;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_20:;
        CHECK_OBJECT(outline_5_var___class__);
        Py_DECREF(outline_5_var___class__);
        outline_5_var___class__ = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_20:;
        exception_keeper_type_20 = exception_type;
        exception_keeper_value_20 = exception_value;
        exception_keeper_tb_20 = exception_tb;
        exception_keeper_lineno_20 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_20;
        exception_value = exception_keeper_value_20;
        exception_tb = exception_keeper_tb_20;
        exception_lineno = exception_keeper_lineno_20;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 210;
        goto try_except_handler_19;
        outline_result_6:;
        UPDATE_STRING_DICT1(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_67);
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_6__bases_orig);
    tmp_class_creation_6__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    Py_XDECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT(tmp_class_creation_6__bases_orig);
    Py_DECREF(tmp_class_creation_6__bases_orig);
    tmp_class_creation_6__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_6__bases);
    Py_DECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
    Py_DECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_6__metaclass);
    Py_DECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_6__prepared);
    Py_DECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_tuple_element_72;
        tmp_tuple_element_72 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_tuple_element_72 == NULL)) {
            tmp_tuple_element_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_tuple_element_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto try_except_handler_22;
        }
        tmp_assign_source_69 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_69, 0, tmp_tuple_element_72);
        assert(tmp_class_creation_7__bases_orig == NULL);
        tmp_class_creation_7__bases_orig = tmp_assign_source_69;
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_dircall_arg1_7;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dircall_arg1_7 = tmp_class_creation_7__bases_orig;
        Py_INCREF(tmp_dircall_arg1_7);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_7};
            tmp_assign_source_70 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto try_except_handler_22;
        }
        assert(tmp_class_creation_7__bases == NULL);
        tmp_class_creation_7__bases = tmp_assign_source_70;
    }
    {
        PyObject *tmp_assign_source_71;
        tmp_assign_source_71 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__class_decl_dict == NULL);
        tmp_class_creation_7__class_decl_dict = tmp_assign_source_71;
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_metaclass_value_7;
        nuitka_bool tmp_condition_result_25;
        int tmp_truth_name_7;
        PyObject *tmp_type_arg_13;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_bases_value_7;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_creation_7__bases);
        if (tmp_truth_name_7 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto try_except_handler_22;
        }
        tmp_condition_result_25 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_7;
        } else {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_expression_value_43 = tmp_class_creation_7__bases;
        tmp_subscript_value_7 = mod_consts[19];
        tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_43, tmp_subscript_value_7, 0);
        if (tmp_type_arg_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto try_except_handler_22;
        }
        tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_13);
        Py_DECREF(tmp_type_arg_13);
        if (tmp_metaclass_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto try_except_handler_22;
        }
        goto condexpr_end_7;
        condexpr_false_7:;
        tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_7);
        condexpr_end_7:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_bases_value_7 = tmp_class_creation_7__bases;
        tmp_assign_source_72 = SELECT_METACLASS(tstate, tmp_metaclass_value_7, tmp_bases_value_7);
        Py_DECREF(tmp_metaclass_value_7);
        if (tmp_assign_source_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto try_except_handler_22;
        }
        assert(tmp_class_creation_7__metaclass == NULL);
        tmp_class_creation_7__metaclass = tmp_assign_source_72;
    }
    {
        bool tmp_condition_result_26;
        PyObject *tmp_expression_value_44;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_44 = tmp_class_creation_7__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_44, mod_consts[37]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto try_except_handler_22;
        }
        tmp_condition_result_26 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_26 != false) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_called_value_80;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_args_value_13;
        PyObject *tmp_tuple_element_73;
        PyObject *tmp_kwargs_value_13;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_45 = tmp_class_creation_7__metaclass;
        tmp_called_value_80 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts[37]);
        if (tmp_called_value_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto try_except_handler_22;
        }
        tmp_tuple_element_73 = mod_consts[113];
        tmp_args_value_13 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_73);
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_tuple_element_73 = tmp_class_creation_7__bases;
        PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_73);
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_kwargs_value_13 = tmp_class_creation_7__class_decl_dict;
        frame_f3032e207776cc2cba16b96bd593de83->m_frame.f_lineno = 225;
        tmp_assign_source_73 = CALL_FUNCTION(tstate, tmp_called_value_80, tmp_args_value_13, tmp_kwargs_value_13);
        Py_DECREF(tmp_called_value_80);
        Py_DECREF(tmp_args_value_13);
        if (tmp_assign_source_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto try_except_handler_22;
        }
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_73;
    }
    {
        bool tmp_condition_result_27;
        PyObject *tmp_operand_value_7;
        PyObject *tmp_expression_value_46;
        CHECK_OBJECT(tmp_class_creation_7__prepared);
        tmp_expression_value_46 = tmp_class_creation_7__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_46, mod_consts[39]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto try_except_handler_22;
        }
        tmp_operand_value_7 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
        assert(!(tmp_res == -1));
        tmp_condition_result_27 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_27 != false) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        PyObject *tmp_raise_type_7;
        PyObject *tmp_raise_value_7;
        PyObject *tmp_mod_expr_left_7;
        PyObject *tmp_mod_expr_right_7;
        PyObject *tmp_tuple_element_74;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_name_value_9;
        PyObject *tmp_default_value_7;
        tmp_raise_type_7 = PyExc_TypeError;
        tmp_mod_expr_left_7 = mod_consts[40];
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_47 = tmp_class_creation_7__metaclass;
        tmp_name_value_9 = mod_consts[41];
        tmp_default_value_7 = mod_consts[42];
        tmp_tuple_element_74 = BUILTIN_GETATTR(tstate, tmp_expression_value_47, tmp_name_value_9, tmp_default_value_7);
        if (tmp_tuple_element_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto try_except_handler_22;
        }
        tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_48;
            PyObject *tmp_type_arg_14;
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_74);
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_type_arg_14 = tmp_class_creation_7__prepared;
            tmp_expression_value_48 = BUILTIN_TYPE1(tmp_type_arg_14);
            assert(!(tmp_expression_value_48 == NULL));
            tmp_tuple_element_74 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts[41]);
            Py_DECREF(tmp_expression_value_48);
            if (tmp_tuple_element_74 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;

                goto tuple_build_exception_53;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_74);
        }
        goto tuple_build_noexception_53;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_53:;
        Py_DECREF(tmp_mod_expr_right_7);
        goto try_except_handler_22;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_53:;
        tmp_raise_value_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
        Py_DECREF(tmp_mod_expr_right_7);
        if (tmp_raise_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto try_except_handler_22;
        }
        exception_type = tmp_raise_type_7;
        Py_INCREF(tmp_raise_type_7);
        exception_value = tmp_raise_value_7;
        exception_lineno = 225;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_22;
    }
    branch_no_20:;
    goto branch_end_19;
    branch_no_19:;
    {
        PyObject *tmp_assign_source_74;
        tmp_assign_source_74 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_74;
    }
    branch_end_19:;
    {
        PyObject *tmp_assign_source_75;
        {
            PyObject *tmp_set_locals_7;
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_set_locals_7 = tmp_class_creation_7__prepared;
            locals_pycaw$api$audiopolicy$$$class__7_IAudioVolumeDuckNotification_225 = tmp_set_locals_7;
            Py_INCREF(tmp_set_locals_7);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[43];
        tmp_res = PyObject_SetItem(locals_pycaw$api$audiopolicy$$$class__7_IAudioVolumeDuckNotification_225, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto try_except_handler_24;
        }
        tmp_dictset_value = mod_consts[113];
        tmp_res = PyObject_SetItem(locals_pycaw$api$audiopolicy$$$class__7_IAudioVolumeDuckNotification_225, mod_consts[45], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto try_except_handler_24;
        }
        frame_a97c8625a76175b0185582f2a633cad9_8 = MAKE_CLASS_FRAME(tstate, codeobj_a97c8625a76175b0185582f2a633cad9, module_pycaw$api$audiopolicy, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_a97c8625a76175b0185582f2a633cad9_8);
        assert(Py_REFCNT(frame_a97c8625a76175b0185582f2a633cad9_8) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_81;
            tmp_called_value_81 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__7_IAudioVolumeDuckNotification_225, mod_consts[31]);

            if (tmp_called_value_81 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_81 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[31]);

                    if (unlikely(tmp_called_value_81 == NULL)) {
                        tmp_called_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
                    }

                    if (tmp_called_value_81 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 226;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_value_81);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            frame_a97c8625a76175b0185582f2a633cad9_8->m_frame.f_lineno = 226;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_81, mod_consts[114]);

            Py_DECREF(tmp_called_value_81);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_res = PyObject_SetItem(locals_pycaw$api$audiopolicy$$$class__7_IAudioVolumeDuckNotification_225, mod_consts[47], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_tuple_element_75;
            PyObject *tmp_called_value_82;
            PyObject *tmp_args_element_value_154;
            PyObject *tmp_args_element_value_155;
            PyObject *tmp_args_element_value_156;
            PyObject *tmp_args_element_value_157;
            PyObject *tmp_tuple_element_76;
            PyObject *tmp_args_element_value_158;
            PyObject *tmp_tuple_element_77;
            tmp_called_value_82 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__7_IAudioVolumeDuckNotification_225, mod_consts[30]);

            if (tmp_called_value_82 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_82 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[30]);

                    if (unlikely(tmp_called_value_82 == NULL)) {
                        tmp_called_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
                    }

                    if (tmp_called_value_82 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 231;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_value_82);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            tmp_args_element_value_154 = MAKE_LIST_EMPTY(0);
            tmp_args_element_value_155 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__7_IAudioVolumeDuckNotification_225, mod_consts[18]);

            if (tmp_args_element_value_155 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_args_element_value_155 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_args_element_value_155 == NULL)) {
                        tmp_args_element_value_155 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                    }

                    if (tmp_args_element_value_155 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_82);
                        Py_DECREF(tmp_args_element_value_154);

                        exception_lineno = 233;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_args_element_value_155);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            tmp_args_element_value_156 = mod_consts[115];
            tmp_tuple_element_76 = MAKE_LIST1(mod_consts[49]);
            tmp_args_element_value_157 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM(tmp_args_element_value_157, 0, tmp_tuple_element_76);
            tmp_tuple_element_76 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__7_IAudioVolumeDuckNotification_225, mod_consts[26]);

            if (tmp_tuple_element_76 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_76 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[26]);

                    if (unlikely(tmp_tuple_element_76 == NULL)) {
                        tmp_tuple_element_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
                    }

                    if (tmp_tuple_element_76 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 235;
                        type_description_2 = "o";
                        goto tuple_build_exception_54;
                    }
                    Py_INCREF(tmp_tuple_element_76);
                } else {
                    goto tuple_build_exception_54;
                }
            }

            PyTuple_SET_ITEM(tmp_args_element_value_157, 1, tmp_tuple_element_76);
            tmp_tuple_element_76 = mod_consts[116];
            PyTuple_SET_ITEM0(tmp_args_element_value_157, 2, tmp_tuple_element_76);
            goto tuple_build_noexception_54;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_54:;
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_args_element_value_154);
            Py_DECREF(tmp_args_element_value_155);
            Py_DECREF(tmp_args_element_value_157);
            goto frame_exception_exit_8;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_54:;
            tmp_tuple_element_77 = MAKE_LIST1(mod_consts[49]);
            tmp_args_element_value_158 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM(tmp_args_element_value_158, 0, tmp_tuple_element_77);
            tmp_tuple_element_77 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__7_IAudioVolumeDuckNotification_225, mod_consts[22]);

            if (tmp_tuple_element_77 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_77 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[22]);

                    if (unlikely(tmp_tuple_element_77 == NULL)) {
                        tmp_tuple_element_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
                    }

                    if (tmp_tuple_element_77 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 236;
                        type_description_2 = "o";
                        goto tuple_build_exception_55;
                    }
                    Py_INCREF(tmp_tuple_element_77);
                } else {
                    goto tuple_build_exception_55;
                }
            }

            PyTuple_SET_ITEM(tmp_args_element_value_158, 1, tmp_tuple_element_77);
            tmp_tuple_element_77 = mod_consts[117];
            PyTuple_SET_ITEM0(tmp_args_element_value_158, 2, tmp_tuple_element_77);
            goto tuple_build_noexception_55;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_55:;
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_args_element_value_154);
            Py_DECREF(tmp_args_element_value_155);
            Py_DECREF(tmp_args_element_value_157);
            Py_DECREF(tmp_args_element_value_158);
            goto frame_exception_exit_8;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_55:;
            frame_a97c8625a76175b0185582f2a633cad9_8->m_frame.f_lineno = 231;
            {
                PyObject *call_args[] = {tmp_args_element_value_154, tmp_args_element_value_155, tmp_args_element_value_156, tmp_args_element_value_157, tmp_args_element_value_158};
                tmp_tuple_element_75 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_82, call_args);
            }

            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_args_element_value_154);
            Py_DECREF(tmp_args_element_value_155);
            Py_DECREF(tmp_args_element_value_157);
            Py_DECREF(tmp_args_element_value_158);
            if (tmp_tuple_element_75 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_dictset_value = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_83;
                PyObject *tmp_args_element_value_159;
                PyObject *tmp_args_element_value_160;
                PyObject *tmp_args_element_value_161;
                PyObject *tmp_args_element_value_162;
                PyObject *tmp_tuple_element_78;
                PyTuple_SET_ITEM(tmp_dictset_value, 0, tmp_tuple_element_75);
                tmp_called_value_83 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__7_IAudioVolumeDuckNotification_225, mod_consts[30]);

                if (tmp_called_value_83 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_83 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[30]);

                        if (unlikely(tmp_called_value_83 == NULL)) {
                            tmp_called_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
                        }

                        if (tmp_called_value_83 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 240;
                            type_description_2 = "o";
                            goto tuple_build_exception_56;
                        }
                        Py_INCREF(tmp_called_value_83);
                    } else {
                        goto tuple_build_exception_56;
                    }
                }

                tmp_args_element_value_159 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_160 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__7_IAudioVolumeDuckNotification_225, mod_consts[18]);

                if (tmp_args_element_value_160 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_160 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[18]);

                        if (unlikely(tmp_args_element_value_160 == NULL)) {
                            tmp_args_element_value_160 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                        }

                        if (tmp_args_element_value_160 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_83);
                            Py_DECREF(tmp_args_element_value_159);

                            exception_lineno = 242;
                            type_description_2 = "o";
                            goto tuple_build_exception_56;
                        }
                        Py_INCREF(tmp_args_element_value_160);
                    } else {
                        goto tuple_build_exception_56;
                    }
                }

                tmp_args_element_value_161 = mod_consts[118];
                tmp_tuple_element_78 = MAKE_LIST1(mod_consts[49]);
                tmp_args_element_value_162 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM(tmp_args_element_value_162, 0, tmp_tuple_element_78);
                tmp_tuple_element_78 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__7_IAudioVolumeDuckNotification_225, mod_consts[26]);

                if (tmp_tuple_element_78 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_78 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[26]);

                        if (unlikely(tmp_tuple_element_78 == NULL)) {
                            tmp_tuple_element_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
                        }

                        if (tmp_tuple_element_78 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 244;
                            type_description_2 = "o";
                            goto tuple_build_exception_57;
                        }
                        Py_INCREF(tmp_tuple_element_78);
                    } else {
                        goto tuple_build_exception_57;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_element_value_162, 1, tmp_tuple_element_78);
                tmp_tuple_element_78 = mod_consts[116];
                PyTuple_SET_ITEM0(tmp_args_element_value_162, 2, tmp_tuple_element_78);
                goto tuple_build_noexception_56;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_57:;
                Py_DECREF(tmp_called_value_83);
                Py_DECREF(tmp_args_element_value_159);
                Py_DECREF(tmp_args_element_value_160);
                Py_DECREF(tmp_args_element_value_162);
                goto tuple_build_exception_56;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_56:;
                frame_a97c8625a76175b0185582f2a633cad9_8->m_frame.f_lineno = 240;
                {
                    PyObject *call_args[] = {tmp_args_element_value_159, tmp_args_element_value_160, tmp_args_element_value_161, tmp_args_element_value_162};
                    tmp_tuple_element_75 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_83, call_args);
                }

                Py_DECREF(tmp_called_value_83);
                Py_DECREF(tmp_args_element_value_159);
                Py_DECREF(tmp_args_element_value_160);
                Py_DECREF(tmp_args_element_value_162);
                if (tmp_tuple_element_75 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 240;
                    type_description_2 = "o";
                    goto tuple_build_exception_56;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 1, tmp_tuple_element_75);
            }
            goto tuple_build_noexception_57;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_56:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_8;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_57:;
            tmp_res = PyObject_SetItem(locals_pycaw$api$audiopolicy$$$class__7_IAudioVolumeDuckNotification_225, mod_consts[68], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_7;
        frame_exception_exit_8:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_a97c8625a76175b0185582f2a633cad9_8, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_a97c8625a76175b0185582f2a633cad9_8->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_a97c8625a76175b0185582f2a633cad9_8, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_a97c8625a76175b0185582f2a633cad9_8,
            type_description_2,
            outline_6_var___class__
        );



        assertFrameObject(frame_a97c8625a76175b0185582f2a633cad9_8);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_7;
        frame_no_exception_7:;
        goto skip_nested_handling_7;
        nested_frame_exit_7:;

        goto try_except_handler_24;
        skip_nested_handling_7:;
        {
            nuitka_bool tmp_condition_result_28;
            PyObject *tmp_cmp_expr_left_7;
            PyObject *tmp_cmp_expr_right_7;
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_cmp_expr_left_7 = tmp_class_creation_7__bases;
            CHECK_OBJECT(tmp_class_creation_7__bases_orig);
            tmp_cmp_expr_right_7 = tmp_class_creation_7__bases_orig;
            tmp_condition_result_28 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
            if (tmp_condition_result_28 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;

                goto try_except_handler_24;
            }
            if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
                goto branch_yes_21;
            } else {
                goto branch_no_21;
            }
        }
        branch_yes_21:;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dictset_value = tmp_class_creation_7__bases_orig;
        tmp_res = PyObject_SetItem(locals_pycaw$api$audiopolicy$$$class__7_IAudioVolumeDuckNotification_225, mod_consts[69], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto try_except_handler_24;
        }
        branch_no_21:;
        {
            PyObject *tmp_assign_source_76;
            PyObject *tmp_called_value_84;
            PyObject *tmp_args_value_14;
            PyObject *tmp_tuple_element_79;
            PyObject *tmp_kwargs_value_14;
            CHECK_OBJECT(tmp_class_creation_7__metaclass);
            tmp_called_value_84 = tmp_class_creation_7__metaclass;
            tmp_tuple_element_79 = mod_consts[113];
            tmp_args_value_14 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_79);
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_tuple_element_79 = tmp_class_creation_7__bases;
            PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_79);
            tmp_tuple_element_79 = locals_pycaw$api$audiopolicy$$$class__7_IAudioVolumeDuckNotification_225;
            PyTuple_SET_ITEM0(tmp_args_value_14, 2, tmp_tuple_element_79);
            CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
            tmp_kwargs_value_14 = tmp_class_creation_7__class_decl_dict;
            frame_f3032e207776cc2cba16b96bd593de83->m_frame.f_lineno = 225;
            tmp_assign_source_76 = CALL_FUNCTION(tstate, tmp_called_value_84, tmp_args_value_14, tmp_kwargs_value_14);
            Py_DECREF(tmp_args_value_14);
            if (tmp_assign_source_76 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;

                goto try_except_handler_24;
            }
            assert(outline_6_var___class__ == NULL);
            outline_6_var___class__ = tmp_assign_source_76;
        }
        CHECK_OBJECT(outline_6_var___class__);
        tmp_assign_source_75 = outline_6_var___class__;
        Py_INCREF(tmp_assign_source_75);
        goto try_return_handler_24;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_24:;
        Py_DECREF(locals_pycaw$api$audiopolicy$$$class__7_IAudioVolumeDuckNotification_225);
        locals_pycaw$api$audiopolicy$$$class__7_IAudioVolumeDuckNotification_225 = NULL;
        goto try_return_handler_23;
        // Exception handler code:
        try_except_handler_24:;
        exception_keeper_type_22 = exception_type;
        exception_keeper_value_22 = exception_value;
        exception_keeper_tb_22 = exception_tb;
        exception_keeper_lineno_22 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pycaw$api$audiopolicy$$$class__7_IAudioVolumeDuckNotification_225);
        locals_pycaw$api$audiopolicy$$$class__7_IAudioVolumeDuckNotification_225 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_22;
        exception_value = exception_keeper_value_22;
        exception_tb = exception_keeper_tb_22;
        exception_lineno = exception_keeper_lineno_22;

        goto try_except_handler_23;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_23:;
        CHECK_OBJECT(outline_6_var___class__);
        Py_DECREF(outline_6_var___class__);
        outline_6_var___class__ = NULL;
        goto outline_result_7;
        // Exception handler code:
        try_except_handler_23:;
        exception_keeper_type_23 = exception_type;
        exception_keeper_value_23 = exception_value;
        exception_keeper_tb_23 = exception_tb;
        exception_keeper_lineno_23 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_23;
        exception_value = exception_keeper_value_23;
        exception_tb = exception_keeper_tb_23;
        exception_lineno = exception_keeper_lineno_23;

        goto outline_exception_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_7:;
        exception_lineno = 225;
        goto try_except_handler_22;
        outline_result_7:;
        UPDATE_STRING_DICT1(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_75);
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_keeper_lineno_24 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_7__bases_orig);
    tmp_class_creation_7__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_7__bases);
    tmp_class_creation_7__bases = NULL;
    Py_XDECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_24;
    exception_value = exception_keeper_value_24;
    exception_tb = exception_keeper_tb_24;
    exception_lineno = exception_keeper_lineno_24;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(tmp_class_creation_7__bases_orig);
    Py_DECREF(tmp_class_creation_7__bases_orig);
    tmp_class_creation_7__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_7__bases);
    Py_DECREF(tmp_class_creation_7__bases);
    tmp_class_creation_7__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
    Py_DECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_7__metaclass);
    Py_DECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_7__prepared);
    Py_DECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_tuple_element_80;
        tmp_tuple_element_80 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_tuple_element_80 == NULL)) {
            tmp_tuple_element_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[100]);
        }

        if (tmp_tuple_element_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto try_except_handler_25;
        }
        tmp_assign_source_77 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_77, 0, tmp_tuple_element_80);
        assert(tmp_class_creation_8__bases_orig == NULL);
        tmp_class_creation_8__bases_orig = tmp_assign_source_77;
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_dircall_arg1_8;
        CHECK_OBJECT(tmp_class_creation_8__bases_orig);
        tmp_dircall_arg1_8 = tmp_class_creation_8__bases_orig;
        Py_INCREF(tmp_dircall_arg1_8);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_8};
            tmp_assign_source_78 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto try_except_handler_25;
        }
        assert(tmp_class_creation_8__bases == NULL);
        tmp_class_creation_8__bases = tmp_assign_source_78;
    }
    {
        PyObject *tmp_assign_source_79;
        tmp_assign_source_79 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__class_decl_dict == NULL);
        tmp_class_creation_8__class_decl_dict = tmp_assign_source_79;
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_metaclass_value_8;
        nuitka_bool tmp_condition_result_29;
        int tmp_truth_name_8;
        PyObject *tmp_type_arg_15;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_bases_value_8;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_truth_name_8 = CHECK_IF_TRUE(tmp_class_creation_8__bases);
        if (tmp_truth_name_8 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto try_except_handler_25;
        }
        tmp_condition_result_29 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_8;
        } else {
            goto condexpr_false_8;
        }
        condexpr_true_8:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_expression_value_49 = tmp_class_creation_8__bases;
        tmp_subscript_value_8 = mod_consts[19];
        tmp_type_arg_15 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_49, tmp_subscript_value_8, 0);
        if (tmp_type_arg_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto try_except_handler_25;
        }
        tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_15);
        Py_DECREF(tmp_type_arg_15);
        if (tmp_metaclass_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto try_except_handler_25;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        tmp_metaclass_value_8 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_8);
        condexpr_end_8:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_bases_value_8 = tmp_class_creation_8__bases;
        tmp_assign_source_80 = SELECT_METACLASS(tstate, tmp_metaclass_value_8, tmp_bases_value_8);
        Py_DECREF(tmp_metaclass_value_8);
        if (tmp_assign_source_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto try_except_handler_25;
        }
        assert(tmp_class_creation_8__metaclass == NULL);
        tmp_class_creation_8__metaclass = tmp_assign_source_80;
    }
    {
        bool tmp_condition_result_30;
        PyObject *tmp_expression_value_50;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_50 = tmp_class_creation_8__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_50, mod_consts[37]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto try_except_handler_25;
        }
        tmp_condition_result_30 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_30 != false) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_called_value_85;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_args_value_15;
        PyObject *tmp_tuple_element_81;
        PyObject *tmp_kwargs_value_15;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_51 = tmp_class_creation_8__metaclass;
        tmp_called_value_85 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts[37]);
        if (tmp_called_value_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto try_except_handler_25;
        }
        tmp_tuple_element_81 = mod_consts[119];
        tmp_args_value_15 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_81);
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_tuple_element_81 = tmp_class_creation_8__bases;
        PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_81);
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_kwargs_value_15 = tmp_class_creation_8__class_decl_dict;
        frame_f3032e207776cc2cba16b96bd593de83->m_frame.f_lineno = 249;
        tmp_assign_source_81 = CALL_FUNCTION(tstate, tmp_called_value_85, tmp_args_value_15, tmp_kwargs_value_15);
        Py_DECREF(tmp_called_value_85);
        Py_DECREF(tmp_args_value_15);
        if (tmp_assign_source_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto try_except_handler_25;
        }
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_81;
    }
    {
        bool tmp_condition_result_31;
        PyObject *tmp_operand_value_8;
        PyObject *tmp_expression_value_52;
        CHECK_OBJECT(tmp_class_creation_8__prepared);
        tmp_expression_value_52 = tmp_class_creation_8__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_52, mod_consts[39]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto try_except_handler_25;
        }
        tmp_operand_value_8 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
        assert(!(tmp_res == -1));
        tmp_condition_result_31 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_31 != false) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    {
        PyObject *tmp_raise_type_8;
        PyObject *tmp_raise_value_8;
        PyObject *tmp_mod_expr_left_8;
        PyObject *tmp_mod_expr_right_8;
        PyObject *tmp_tuple_element_82;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_name_value_10;
        PyObject *tmp_default_value_8;
        tmp_raise_type_8 = PyExc_TypeError;
        tmp_mod_expr_left_8 = mod_consts[40];
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_53 = tmp_class_creation_8__metaclass;
        tmp_name_value_10 = mod_consts[41];
        tmp_default_value_8 = mod_consts[42];
        tmp_tuple_element_82 = BUILTIN_GETATTR(tstate, tmp_expression_value_53, tmp_name_value_10, tmp_default_value_8);
        if (tmp_tuple_element_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto try_except_handler_25;
        }
        tmp_mod_expr_right_8 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_54;
            PyObject *tmp_type_arg_16;
            PyTuple_SET_ITEM(tmp_mod_expr_right_8, 0, tmp_tuple_element_82);
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_type_arg_16 = tmp_class_creation_8__prepared;
            tmp_expression_value_54 = BUILTIN_TYPE1(tmp_type_arg_16);
            assert(!(tmp_expression_value_54 == NULL));
            tmp_tuple_element_82 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts[41]);
            Py_DECREF(tmp_expression_value_54);
            if (tmp_tuple_element_82 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;

                goto tuple_build_exception_58;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_8, 1, tmp_tuple_element_82);
        }
        goto tuple_build_noexception_58;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_58:;
        Py_DECREF(tmp_mod_expr_right_8);
        goto try_except_handler_25;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_58:;
        tmp_raise_value_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_8, tmp_mod_expr_right_8);
        Py_DECREF(tmp_mod_expr_right_8);
        if (tmp_raise_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto try_except_handler_25;
        }
        exception_type = tmp_raise_type_8;
        Py_INCREF(tmp_raise_type_8);
        exception_value = tmp_raise_value_8;
        exception_lineno = 249;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_25;
    }
    branch_no_23:;
    goto branch_end_22;
    branch_no_22:;
    {
        PyObject *tmp_assign_source_82;
        tmp_assign_source_82 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_82;
    }
    branch_end_22:;
    {
        PyObject *tmp_assign_source_83;
        {
            PyObject *tmp_set_locals_8;
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_set_locals_8 = tmp_class_creation_8__prepared;
            locals_pycaw$api$audiopolicy$$$class__8_IAudioSessionManager2_249 = tmp_set_locals_8;
            Py_INCREF(tmp_set_locals_8);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[43];
        tmp_res = PyObject_SetItem(locals_pycaw$api$audiopolicy$$$class__8_IAudioSessionManager2_249, mod_consts[44], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto try_except_handler_27;
        }
        tmp_dictset_value = mod_consts[119];
        tmp_res = PyObject_SetItem(locals_pycaw$api$audiopolicy$$$class__8_IAudioSessionManager2_249, mod_consts[45], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto try_except_handler_27;
        }
        frame_5a834c15c28241975d908a247950ddd8_9 = MAKE_CLASS_FRAME(tstate, codeobj_5a834c15c28241975d908a247950ddd8, module_pycaw$api$audiopolicy, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_5a834c15c28241975d908a247950ddd8_9);
        assert(Py_REFCNT(frame_5a834c15c28241975d908a247950ddd8_9) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_86;
            tmp_called_value_86 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__8_IAudioSessionManager2_249, mod_consts[31]);

            if (tmp_called_value_86 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_86 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[31]);

                    if (unlikely(tmp_called_value_86 == NULL)) {
                        tmp_called_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
                    }

                    if (tmp_called_value_86 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 250;
                        type_description_2 = "o";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_called_value_86);
                } else {
                    goto frame_exception_exit_9;
                }
            }

            frame_5a834c15c28241975d908a247950ddd8_9->m_frame.f_lineno = 250;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_86, mod_consts[120]);

            Py_DECREF(tmp_called_value_86);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_res = PyObject_SetItem(locals_pycaw$api$audiopolicy$$$class__8_IAudioSessionManager2_249, mod_consts[47], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_tuple_element_83;
            PyObject *tmp_called_value_87;
            PyObject *tmp_args_element_value_163;
            PyObject *tmp_args_element_value_164;
            PyObject *tmp_args_element_value_165;
            PyObject *tmp_args_element_value_166;
            PyObject *tmp_tuple_element_84;
            tmp_called_value_87 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__8_IAudioSessionManager2_249, mod_consts[30]);

            if (tmp_called_value_87 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_87 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[30]);

                    if (unlikely(tmp_called_value_87 == NULL)) {
                        tmp_called_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
                    }

                    if (tmp_called_value_87 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 254;
                        type_description_2 = "o";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_called_value_87);
                } else {
                    goto frame_exception_exit_9;
                }
            }

            tmp_args_element_value_163 = MAKE_LIST_EMPTY(0);
            tmp_args_element_value_164 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__8_IAudioSessionManager2_249, mod_consts[18]);

            if (tmp_args_element_value_164 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_args_element_value_164 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_args_element_value_164 == NULL)) {
                        tmp_args_element_value_164 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                    }

                    if (tmp_args_element_value_164 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_87);
                        Py_DECREF(tmp_args_element_value_163);

                        exception_lineno = 256;
                        type_description_2 = "o";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_args_element_value_164);
                } else {
                    goto frame_exception_exit_9;
                }
            }

            tmp_args_element_value_165 = mod_consts[121];
            tmp_tuple_element_84 = MAKE_LIST1(mod_consts[73]);
            tmp_args_element_value_166 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_called_value_88;
                PyObject *tmp_args_element_value_167;
                PyObject *tmp_called_value_89;
                PyObject *tmp_args_element_value_168;
                PyTuple_SET_ITEM(tmp_args_element_value_166, 0, tmp_tuple_element_84);
                tmp_called_value_88 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__8_IAudioSessionManager2_249, mod_consts[20]);

                if (tmp_called_value_88 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_88 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[20]);

                        if (unlikely(tmp_called_value_88 == NULL)) {
                            tmp_called_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                        }

                        if (tmp_called_value_88 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 258;
                            type_description_2 = "o";
                            goto tuple_build_exception_59;
                        }
                        Py_INCREF(tmp_called_value_88);
                    } else {
                        goto tuple_build_exception_59;
                    }
                }

                tmp_called_value_89 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__8_IAudioSessionManager2_249, mod_consts[20]);

                if (tmp_called_value_89 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_89 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[20]);

                        if (unlikely(tmp_called_value_89 == NULL)) {
                            tmp_called_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                        }

                        if (tmp_called_value_89 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_88);

                            exception_lineno = 258;
                            type_description_2 = "o";
                            goto tuple_build_exception_59;
                        }
                        Py_INCREF(tmp_called_value_89);
                    } else {
                        goto tuple_build_exception_59;
                    }
                }

                tmp_args_element_value_168 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__8_IAudioSessionManager2_249, mod_consts[94]);

                if (tmp_args_element_value_168 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_168 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[94]);

                        if (unlikely(tmp_args_element_value_168 == NULL)) {
                            tmp_args_element_value_168 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[94]);
                        }

                        if (tmp_args_element_value_168 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_88);
                            Py_DECREF(tmp_called_value_89);

                            exception_lineno = 258;
                            type_description_2 = "o";
                            goto tuple_build_exception_59;
                        }
                        Py_INCREF(tmp_args_element_value_168);
                    } else {
                        goto tuple_build_exception_59;
                    }
                }

                frame_5a834c15c28241975d908a247950ddd8_9->m_frame.f_lineno = 258;
                tmp_args_element_value_167 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_89, tmp_args_element_value_168);
                Py_DECREF(tmp_called_value_89);
                Py_DECREF(tmp_args_element_value_168);
                if (tmp_args_element_value_167 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_88);

                    exception_lineno = 258;
                    type_description_2 = "o";
                    goto tuple_build_exception_59;
                }
                frame_5a834c15c28241975d908a247950ddd8_9->m_frame.f_lineno = 258;
                tmp_tuple_element_84 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_88, tmp_args_element_value_167);
                Py_DECREF(tmp_called_value_88);
                Py_DECREF(tmp_args_element_value_167);
                if (tmp_tuple_element_84 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 258;
                    type_description_2 = "o";
                    goto tuple_build_exception_59;
                }
                PyTuple_SET_ITEM(tmp_args_element_value_166, 1, tmp_tuple_element_84);
                tmp_tuple_element_84 = mod_consts[122];
                PyTuple_SET_ITEM0(tmp_args_element_value_166, 2, tmp_tuple_element_84);
            }
            goto tuple_build_noexception_59;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_59:;
            Py_DECREF(tmp_called_value_87);
            Py_DECREF(tmp_args_element_value_163);
            Py_DECREF(tmp_args_element_value_164);
            Py_DECREF(tmp_args_element_value_166);
            goto frame_exception_exit_9;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_59:;
            frame_5a834c15c28241975d908a247950ddd8_9->m_frame.f_lineno = 254;
            {
                PyObject *call_args[] = {tmp_args_element_value_163, tmp_args_element_value_164, tmp_args_element_value_165, tmp_args_element_value_166};
                tmp_tuple_element_83 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_87, call_args);
            }

            Py_DECREF(tmp_called_value_87);
            Py_DECREF(tmp_args_element_value_163);
            Py_DECREF(tmp_args_element_value_164);
            Py_DECREF(tmp_args_element_value_166);
            if (tmp_tuple_element_83 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 254;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_dictset_value = MAKE_TUPLE_EMPTY(5);
            {
                PyObject *tmp_called_value_90;
                PyObject *tmp_args_element_value_169;
                PyObject *tmp_args_element_value_170;
                PyObject *tmp_args_element_value_171;
                PyObject *tmp_args_element_value_172;
                PyObject *tmp_tuple_element_85;
                PyObject *tmp_called_value_92;
                PyObject *tmp_args_element_value_174;
                PyObject *tmp_args_element_value_175;
                PyObject *tmp_args_element_value_176;
                PyObject *tmp_args_element_value_177;
                PyObject *tmp_tuple_element_86;
                PyObject *tmp_called_value_94;
                PyObject *tmp_args_element_value_179;
                PyObject *tmp_args_element_value_180;
                PyObject *tmp_args_element_value_181;
                PyObject *tmp_args_element_value_182;
                PyObject *tmp_tuple_element_87;
                PyObject *tmp_args_element_value_183;
                PyObject *tmp_tuple_element_88;
                PyObject *tmp_called_value_96;
                PyObject *tmp_args_element_value_185;
                PyObject *tmp_args_element_value_186;
                PyObject *tmp_args_element_value_187;
                PyObject *tmp_args_element_value_188;
                PyObject *tmp_tuple_element_89;
                PyTuple_SET_ITEM(tmp_dictset_value, 0, tmp_tuple_element_83);
                tmp_called_value_90 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__8_IAudioSessionManager2_249, mod_consts[30]);

                if (tmp_called_value_90 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_90 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[30]);

                        if (unlikely(tmp_called_value_90 == NULL)) {
                            tmp_called_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
                        }

                        if (tmp_called_value_90 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 262;
                            type_description_2 = "o";
                            goto tuple_build_exception_60;
                        }
                        Py_INCREF(tmp_called_value_90);
                    } else {
                        goto tuple_build_exception_60;
                    }
                }

                tmp_args_element_value_169 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_170 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__8_IAudioSessionManager2_249, mod_consts[18]);

                if (tmp_args_element_value_170 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_170 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[18]);

                        if (unlikely(tmp_args_element_value_170 == NULL)) {
                            tmp_args_element_value_170 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                        }

                        if (tmp_args_element_value_170 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_90);
                            Py_DECREF(tmp_args_element_value_169);

                            exception_lineno = 264;
                            type_description_2 = "o";
                            goto tuple_build_exception_60;
                        }
                        Py_INCREF(tmp_args_element_value_170);
                    } else {
                        goto tuple_build_exception_60;
                    }
                }

                tmp_args_element_value_171 = mod_consts[123];
                tmp_tuple_element_85 = MAKE_LIST1(mod_consts[49]);
                tmp_args_element_value_172 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_91;
                    PyObject *tmp_args_element_value_173;
                    PyTuple_SET_ITEM(tmp_args_element_value_172, 0, tmp_tuple_element_85);
                    tmp_called_value_91 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__8_IAudioSessionManager2_249, mod_consts[20]);

                    if (tmp_called_value_91 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_91 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[20]);

                            if (unlikely(tmp_called_value_91 == NULL)) {
                                tmp_called_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                            }

                            if (tmp_called_value_91 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 266;
                                type_description_2 = "o";
                                goto tuple_build_exception_61;
                            }
                            Py_INCREF(tmp_called_value_91);
                        } else {
                            goto tuple_build_exception_61;
                        }
                    }

                    tmp_args_element_value_173 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__8_IAudioSessionManager2_249, mod_consts[109]);

                    if (tmp_args_element_value_173 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_173 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[109]);

                            if (unlikely(tmp_args_element_value_173 == NULL)) {
                                tmp_args_element_value_173 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[109]);
                            }

                            if (tmp_args_element_value_173 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_91);

                                exception_lineno = 266;
                                type_description_2 = "o";
                                goto tuple_build_exception_61;
                            }
                            Py_INCREF(tmp_args_element_value_173);
                        } else {
                            goto tuple_build_exception_61;
                        }
                    }

                    frame_5a834c15c28241975d908a247950ddd8_9->m_frame.f_lineno = 266;
                    tmp_tuple_element_85 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_91, tmp_args_element_value_173);
                    Py_DECREF(tmp_called_value_91);
                    Py_DECREF(tmp_args_element_value_173);
                    if (tmp_tuple_element_85 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 266;
                        type_description_2 = "o";
                        goto tuple_build_exception_61;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_172, 1, tmp_tuple_element_85);
                    tmp_tuple_element_85 = mod_consts[124];
                    PyTuple_SET_ITEM0(tmp_args_element_value_172, 2, tmp_tuple_element_85);
                }
                goto tuple_build_noexception_60;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_61:;
                Py_DECREF(tmp_called_value_90);
                Py_DECREF(tmp_args_element_value_169);
                Py_DECREF(tmp_args_element_value_170);
                Py_DECREF(tmp_args_element_value_172);
                goto tuple_build_exception_60;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_60:;
                frame_5a834c15c28241975d908a247950ddd8_9->m_frame.f_lineno = 262;
                {
                    PyObject *call_args[] = {tmp_args_element_value_169, tmp_args_element_value_170, tmp_args_element_value_171, tmp_args_element_value_172};
                    tmp_tuple_element_83 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_90, call_args);
                }

                Py_DECREF(tmp_called_value_90);
                Py_DECREF(tmp_args_element_value_169);
                Py_DECREF(tmp_args_element_value_170);
                Py_DECREF(tmp_args_element_value_172);
                if (tmp_tuple_element_83 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 262;
                    type_description_2 = "o";
                    goto tuple_build_exception_60;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 1, tmp_tuple_element_83);
                tmp_called_value_92 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__8_IAudioSessionManager2_249, mod_consts[30]);

                if (tmp_called_value_92 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_92 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[30]);

                        if (unlikely(tmp_called_value_92 == NULL)) {
                            tmp_called_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
                        }

                        if (tmp_called_value_92 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 270;
                            type_description_2 = "o";
                            goto tuple_build_exception_60;
                        }
                        Py_INCREF(tmp_called_value_92);
                    } else {
                        goto tuple_build_exception_60;
                    }
                }

                tmp_args_element_value_174 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_175 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__8_IAudioSessionManager2_249, mod_consts[18]);

                if (tmp_args_element_value_175 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_175 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[18]);

                        if (unlikely(tmp_args_element_value_175 == NULL)) {
                            tmp_args_element_value_175 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                        }

                        if (tmp_args_element_value_175 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_92);
                            Py_DECREF(tmp_args_element_value_174);

                            exception_lineno = 272;
                            type_description_2 = "o";
                            goto tuple_build_exception_60;
                        }
                        Py_INCREF(tmp_args_element_value_175);
                    } else {
                        goto tuple_build_exception_60;
                    }
                }

                tmp_args_element_value_176 = mod_consts[125];
                tmp_tuple_element_86 = MAKE_LIST1(mod_consts[49]);
                tmp_args_element_value_177 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_93;
                    PyObject *tmp_args_element_value_178;
                    PyTuple_SET_ITEM(tmp_args_element_value_177, 0, tmp_tuple_element_86);
                    tmp_called_value_93 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__8_IAudioSessionManager2_249, mod_consts[20]);

                    if (tmp_called_value_93 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_93 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[20]);

                            if (unlikely(tmp_called_value_93 == NULL)) {
                                tmp_called_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                            }

                            if (tmp_called_value_93 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 274;
                                type_description_2 = "o";
                                goto tuple_build_exception_62;
                            }
                            Py_INCREF(tmp_called_value_93);
                        } else {
                            goto tuple_build_exception_62;
                        }
                    }

                    tmp_args_element_value_178 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__8_IAudioSessionManager2_249, mod_consts[109]);

                    if (tmp_args_element_value_178 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_178 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[109]);

                            if (unlikely(tmp_args_element_value_178 == NULL)) {
                                tmp_args_element_value_178 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[109]);
                            }

                            if (tmp_args_element_value_178 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_93);

                                exception_lineno = 274;
                                type_description_2 = "o";
                                goto tuple_build_exception_62;
                            }
                            Py_INCREF(tmp_args_element_value_178);
                        } else {
                            goto tuple_build_exception_62;
                        }
                    }

                    frame_5a834c15c28241975d908a247950ddd8_9->m_frame.f_lineno = 274;
                    tmp_tuple_element_86 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_93, tmp_args_element_value_178);
                    Py_DECREF(tmp_called_value_93);
                    Py_DECREF(tmp_args_element_value_178);
                    if (tmp_tuple_element_86 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 274;
                        type_description_2 = "o";
                        goto tuple_build_exception_62;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_177, 1, tmp_tuple_element_86);
                    tmp_tuple_element_86 = mod_consts[124];
                    PyTuple_SET_ITEM0(tmp_args_element_value_177, 2, tmp_tuple_element_86);
                }
                goto tuple_build_noexception_61;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_62:;
                Py_DECREF(tmp_called_value_92);
                Py_DECREF(tmp_args_element_value_174);
                Py_DECREF(tmp_args_element_value_175);
                Py_DECREF(tmp_args_element_value_177);
                goto tuple_build_exception_60;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_61:;
                frame_5a834c15c28241975d908a247950ddd8_9->m_frame.f_lineno = 270;
                {
                    PyObject *call_args[] = {tmp_args_element_value_174, tmp_args_element_value_175, tmp_args_element_value_176, tmp_args_element_value_177};
                    tmp_tuple_element_83 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_92, call_args);
                }

                Py_DECREF(tmp_called_value_92);
                Py_DECREF(tmp_args_element_value_174);
                Py_DECREF(tmp_args_element_value_175);
                Py_DECREF(tmp_args_element_value_177);
                if (tmp_tuple_element_83 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 270;
                    type_description_2 = "o";
                    goto tuple_build_exception_60;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 2, tmp_tuple_element_83);
                tmp_called_value_94 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__8_IAudioSessionManager2_249, mod_consts[30]);

                if (tmp_called_value_94 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_94 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[30]);

                        if (unlikely(tmp_called_value_94 == NULL)) {
                            tmp_called_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
                        }

                        if (tmp_called_value_94 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 279;
                            type_description_2 = "o";
                            goto tuple_build_exception_60;
                        }
                        Py_INCREF(tmp_called_value_94);
                    } else {
                        goto tuple_build_exception_60;
                    }
                }

                tmp_args_element_value_179 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_180 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__8_IAudioSessionManager2_249, mod_consts[18]);

                if (tmp_args_element_value_180 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_180 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[18]);

                        if (unlikely(tmp_args_element_value_180 == NULL)) {
                            tmp_args_element_value_180 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                        }

                        if (tmp_args_element_value_180 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_94);
                            Py_DECREF(tmp_args_element_value_179);

                            exception_lineno = 281;
                            type_description_2 = "o";
                            goto tuple_build_exception_60;
                        }
                        Py_INCREF(tmp_args_element_value_180);
                    } else {
                        goto tuple_build_exception_60;
                    }
                }

                tmp_args_element_value_181 = mod_consts[126];
                tmp_tuple_element_87 = MAKE_LIST1(mod_consts[49]);
                tmp_args_element_value_182 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM(tmp_args_element_value_182, 0, tmp_tuple_element_87);
                tmp_tuple_element_87 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__8_IAudioSessionManager2_249, mod_consts[26]);

                if (tmp_tuple_element_87 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_87 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[26]);

                        if (unlikely(tmp_tuple_element_87 == NULL)) {
                            tmp_tuple_element_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
                        }

                        if (tmp_tuple_element_87 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 283;
                            type_description_2 = "o";
                            goto tuple_build_exception_63;
                        }
                        Py_INCREF(tmp_tuple_element_87);
                    } else {
                        goto tuple_build_exception_63;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_element_value_182, 1, tmp_tuple_element_87);
                tmp_tuple_element_87 = mod_consts[127];
                PyTuple_SET_ITEM0(tmp_args_element_value_182, 2, tmp_tuple_element_87);
                goto tuple_build_noexception_62;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_63:;
                Py_DECREF(tmp_called_value_94);
                Py_DECREF(tmp_args_element_value_179);
                Py_DECREF(tmp_args_element_value_180);
                Py_DECREF(tmp_args_element_value_182);
                goto tuple_build_exception_60;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_62:;
                tmp_tuple_element_88 = MAKE_LIST1(mod_consts[49]);
                tmp_args_element_value_183 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_95;
                    PyObject *tmp_args_element_value_184;
                    PyTuple_SET_ITEM(tmp_args_element_value_183, 0, tmp_tuple_element_88);
                    tmp_called_value_95 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__8_IAudioSessionManager2_249, mod_consts[20]);

                    if (tmp_called_value_95 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_95 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[20]);

                            if (unlikely(tmp_called_value_95 == NULL)) {
                                tmp_called_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                            }

                            if (tmp_called_value_95 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 284;
                                type_description_2 = "o";
                                goto tuple_build_exception_64;
                            }
                            Py_INCREF(tmp_called_value_95);
                        } else {
                            goto tuple_build_exception_64;
                        }
                    }

                    tmp_args_element_value_184 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__8_IAudioSessionManager2_249, mod_consts[113]);

                    if (tmp_args_element_value_184 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_184 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[113]);

                            if (unlikely(tmp_args_element_value_184 == NULL)) {
                                tmp_args_element_value_184 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[113]);
                            }

                            if (tmp_args_element_value_184 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_95);

                                exception_lineno = 284;
                                type_description_2 = "o";
                                goto tuple_build_exception_64;
                            }
                            Py_INCREF(tmp_args_element_value_184);
                        } else {
                            goto tuple_build_exception_64;
                        }
                    }

                    frame_5a834c15c28241975d908a247950ddd8_9->m_frame.f_lineno = 284;
                    tmp_tuple_element_88 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_95, tmp_args_element_value_184);
                    Py_DECREF(tmp_called_value_95);
                    Py_DECREF(tmp_args_element_value_184);
                    if (tmp_tuple_element_88 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 284;
                        type_description_2 = "o";
                        goto tuple_build_exception_64;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_183, 1, tmp_tuple_element_88);
                    tmp_tuple_element_88 = mod_consts[128];
                    PyTuple_SET_ITEM0(tmp_args_element_value_183, 2, tmp_tuple_element_88);
                }
                goto tuple_build_noexception_63;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_64:;
                Py_DECREF(tmp_called_value_94);
                Py_DECREF(tmp_args_element_value_179);
                Py_DECREF(tmp_args_element_value_180);
                Py_DECREF(tmp_args_element_value_182);
                Py_DECREF(tmp_args_element_value_183);
                goto tuple_build_exception_60;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_63:;
                frame_5a834c15c28241975d908a247950ddd8_9->m_frame.f_lineno = 279;
                {
                    PyObject *call_args[] = {tmp_args_element_value_179, tmp_args_element_value_180, tmp_args_element_value_181, tmp_args_element_value_182, tmp_args_element_value_183};
                    tmp_tuple_element_83 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_94, call_args);
                }

                Py_DECREF(tmp_called_value_94);
                Py_DECREF(tmp_args_element_value_179);
                Py_DECREF(tmp_args_element_value_180);
                Py_DECREF(tmp_args_element_value_182);
                Py_DECREF(tmp_args_element_value_183);
                if (tmp_tuple_element_83 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 279;
                    type_description_2 = "o";
                    goto tuple_build_exception_60;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 3, tmp_tuple_element_83);
                tmp_called_value_96 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__8_IAudioSessionManager2_249, mod_consts[30]);

                if (tmp_called_value_96 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_96 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[30]);

                        if (unlikely(tmp_called_value_96 == NULL)) {
                            tmp_called_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
                        }

                        if (tmp_called_value_96 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 288;
                            type_description_2 = "o";
                            goto tuple_build_exception_60;
                        }
                        Py_INCREF(tmp_called_value_96);
                    } else {
                        goto tuple_build_exception_60;
                    }
                }

                tmp_args_element_value_185 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_186 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__8_IAudioSessionManager2_249, mod_consts[18]);

                if (tmp_args_element_value_186 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_186 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[18]);

                        if (unlikely(tmp_args_element_value_186 == NULL)) {
                            tmp_args_element_value_186 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                        }

                        if (tmp_args_element_value_186 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_96);
                            Py_DECREF(tmp_args_element_value_185);

                            exception_lineno = 290;
                            type_description_2 = "o";
                            goto tuple_build_exception_60;
                        }
                        Py_INCREF(tmp_args_element_value_186);
                    } else {
                        goto tuple_build_exception_60;
                    }
                }

                tmp_args_element_value_187 = mod_consts[129];
                tmp_tuple_element_89 = MAKE_LIST1(mod_consts[49]);
                tmp_args_element_value_188 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_97;
                    PyObject *tmp_args_element_value_189;
                    PyTuple_SET_ITEM(tmp_args_element_value_188, 0, tmp_tuple_element_89);
                    tmp_called_value_97 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__8_IAudioSessionManager2_249, mod_consts[20]);

                    if (tmp_called_value_97 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_97 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[20]);

                            if (unlikely(tmp_called_value_97 == NULL)) {
                                tmp_called_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                            }

                            if (tmp_called_value_97 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 292;
                                type_description_2 = "o";
                                goto tuple_build_exception_65;
                            }
                            Py_INCREF(tmp_called_value_97);
                        } else {
                            goto tuple_build_exception_65;
                        }
                    }

                    tmp_args_element_value_189 = PyObject_GetItem(locals_pycaw$api$audiopolicy$$$class__8_IAudioSessionManager2_249, mod_consts[113]);

                    if (tmp_args_element_value_189 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_189 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[113]);

                            if (unlikely(tmp_args_element_value_189 == NULL)) {
                                tmp_args_element_value_189 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[113]);
                            }

                            if (tmp_args_element_value_189 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_97);

                                exception_lineno = 292;
                                type_description_2 = "o";
                                goto tuple_build_exception_65;
                            }
                            Py_INCREF(tmp_args_element_value_189);
                        } else {
                            goto tuple_build_exception_65;
                        }
                    }

                    frame_5a834c15c28241975d908a247950ddd8_9->m_frame.f_lineno = 292;
                    tmp_tuple_element_89 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_97, tmp_args_element_value_189);
                    Py_DECREF(tmp_called_value_97);
                    Py_DECREF(tmp_args_element_value_189);
                    if (tmp_tuple_element_89 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 292;
                        type_description_2 = "o";
                        goto tuple_build_exception_65;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_188, 1, tmp_tuple_element_89);
                    tmp_tuple_element_89 = mod_consts[128];
                    PyTuple_SET_ITEM0(tmp_args_element_value_188, 2, tmp_tuple_element_89);
                }
                goto tuple_build_noexception_64;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_65:;
                Py_DECREF(tmp_called_value_96);
                Py_DECREF(tmp_args_element_value_185);
                Py_DECREF(tmp_args_element_value_186);
                Py_DECREF(tmp_args_element_value_188);
                goto tuple_build_exception_60;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_64:;
                frame_5a834c15c28241975d908a247950ddd8_9->m_frame.f_lineno = 288;
                {
                    PyObject *call_args[] = {tmp_args_element_value_185, tmp_args_element_value_186, tmp_args_element_value_187, tmp_args_element_value_188};
                    tmp_tuple_element_83 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_96, call_args);
                }

                Py_DECREF(tmp_called_value_96);
                Py_DECREF(tmp_args_element_value_185);
                Py_DECREF(tmp_args_element_value_186);
                Py_DECREF(tmp_args_element_value_188);
                if (tmp_tuple_element_83 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 288;
                    type_description_2 = "o";
                    goto tuple_build_exception_60;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 4, tmp_tuple_element_83);
            }
            goto tuple_build_noexception_65;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_60:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_9;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_65:;
            tmp_res = PyObject_SetItem(locals_pycaw$api$audiopolicy$$$class__8_IAudioSessionManager2_249, mod_consts[68], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_8;
        frame_exception_exit_9:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_5a834c15c28241975d908a247950ddd8_9, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_5a834c15c28241975d908a247950ddd8_9->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_5a834c15c28241975d908a247950ddd8_9, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_5a834c15c28241975d908a247950ddd8_9,
            type_description_2,
            outline_7_var___class__
        );



        assertFrameObject(frame_5a834c15c28241975d908a247950ddd8_9);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_8;
        frame_no_exception_8:;
        goto skip_nested_handling_8;
        nested_frame_exit_8:;

        goto try_except_handler_27;
        skip_nested_handling_8:;
        {
            nuitka_bool tmp_condition_result_32;
            PyObject *tmp_cmp_expr_left_8;
            PyObject *tmp_cmp_expr_right_8;
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_cmp_expr_left_8 = tmp_class_creation_8__bases;
            CHECK_OBJECT(tmp_class_creation_8__bases_orig);
            tmp_cmp_expr_right_8 = tmp_class_creation_8__bases_orig;
            tmp_condition_result_32 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
            if (tmp_condition_result_32 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;

                goto try_except_handler_27;
            }
            if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
                goto branch_yes_24;
            } else {
                goto branch_no_24;
            }
        }
        branch_yes_24:;
        CHECK_OBJECT(tmp_class_creation_8__bases_orig);
        tmp_dictset_value = tmp_class_creation_8__bases_orig;
        tmp_res = PyObject_SetItem(locals_pycaw$api$audiopolicy$$$class__8_IAudioSessionManager2_249, mod_consts[69], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto try_except_handler_27;
        }
        branch_no_24:;
        {
            PyObject *tmp_assign_source_84;
            PyObject *tmp_called_value_98;
            PyObject *tmp_args_value_16;
            PyObject *tmp_tuple_element_90;
            PyObject *tmp_kwargs_value_16;
            CHECK_OBJECT(tmp_class_creation_8__metaclass);
            tmp_called_value_98 = tmp_class_creation_8__metaclass;
            tmp_tuple_element_90 = mod_consts[119];
            tmp_args_value_16 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_90);
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_tuple_element_90 = tmp_class_creation_8__bases;
            PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_90);
            tmp_tuple_element_90 = locals_pycaw$api$audiopolicy$$$class__8_IAudioSessionManager2_249;
            PyTuple_SET_ITEM0(tmp_args_value_16, 2, tmp_tuple_element_90);
            CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
            tmp_kwargs_value_16 = tmp_class_creation_8__class_decl_dict;
            frame_f3032e207776cc2cba16b96bd593de83->m_frame.f_lineno = 249;
            tmp_assign_source_84 = CALL_FUNCTION(tstate, tmp_called_value_98, tmp_args_value_16, tmp_kwargs_value_16);
            Py_DECREF(tmp_args_value_16);
            if (tmp_assign_source_84 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;

                goto try_except_handler_27;
            }
            assert(outline_7_var___class__ == NULL);
            outline_7_var___class__ = tmp_assign_source_84;
        }
        CHECK_OBJECT(outline_7_var___class__);
        tmp_assign_source_83 = outline_7_var___class__;
        Py_INCREF(tmp_assign_source_83);
        goto try_return_handler_27;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_27:;
        Py_DECREF(locals_pycaw$api$audiopolicy$$$class__8_IAudioSessionManager2_249);
        locals_pycaw$api$audiopolicy$$$class__8_IAudioSessionManager2_249 = NULL;
        goto try_return_handler_26;
        // Exception handler code:
        try_except_handler_27:;
        exception_keeper_type_25 = exception_type;
        exception_keeper_value_25 = exception_value;
        exception_keeper_tb_25 = exception_tb;
        exception_keeper_lineno_25 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pycaw$api$audiopolicy$$$class__8_IAudioSessionManager2_249);
        locals_pycaw$api$audiopolicy$$$class__8_IAudioSessionManager2_249 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_25;
        exception_value = exception_keeper_value_25;
        exception_tb = exception_keeper_tb_25;
        exception_lineno = exception_keeper_lineno_25;

        goto try_except_handler_26;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_26:;
        CHECK_OBJECT(outline_7_var___class__);
        Py_DECREF(outline_7_var___class__);
        outline_7_var___class__ = NULL;
        goto outline_result_8;
        // Exception handler code:
        try_except_handler_26:;
        exception_keeper_type_26 = exception_type;
        exception_keeper_value_26 = exception_value;
        exception_keeper_tb_26 = exception_tb;
        exception_keeper_lineno_26 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_26;
        exception_value = exception_keeper_value_26;
        exception_tb = exception_keeper_tb_26;
        exception_lineno = exception_keeper_lineno_26;

        goto outline_exception_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_8:;
        exception_lineno = 249;
        goto try_except_handler_25;
        outline_result_8:;
        UPDATE_STRING_DICT1(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_83);
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_25:;
    exception_keeper_type_27 = exception_type;
    exception_keeper_value_27 = exception_value;
    exception_keeper_tb_27 = exception_tb;
    exception_keeper_lineno_27 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_8__bases_orig);
    tmp_class_creation_8__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_8__bases);
    tmp_class_creation_8__bases = NULL;
    Py_XDECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_27;
    exception_value = exception_keeper_value_27;
    exception_tb = exception_keeper_tb_27;
    exception_lineno = exception_keeper_lineno_27;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_9;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f3032e207776cc2cba16b96bd593de83, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f3032e207776cc2cba16b96bd593de83->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f3032e207776cc2cba16b96bd593de83, exception_lineno);
    }



    assertFrameObject(frame_f3032e207776cc2cba16b96bd593de83);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_9:;
    CHECK_OBJECT(tmp_class_creation_8__bases_orig);
    Py_DECREF(tmp_class_creation_8__bases_orig);
    tmp_class_creation_8__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_8__bases);
    Py_DECREF(tmp_class_creation_8__bases);
    tmp_class_creation_8__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
    Py_DECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_8__metaclass);
    Py_DECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_8__prepared);
    Py_DECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pycaw$api$audiopolicy", false);

    Py_INCREF(module_pycaw$api$audiopolicy);
    return module_pycaw$api$audiopolicy;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pycaw$api$audiopolicy, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pycaw$api$audiopolicy", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
