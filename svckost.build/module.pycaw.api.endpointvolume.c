/* Generated code for Python module 'pycaw$api$endpointvolume'
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

/* The "module_pycaw$api$endpointvolume" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pycaw$api$endpointvolume;
PyDictObject *moduledict_pycaw$api$endpointvolume;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[93];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[93];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("pycaw.api.endpointvolume"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 93; i++) {
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
void checkModuleConstants_pycaw$api$endpointvolume(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 93; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_bb84ef9b403e7558e48f6d2eb32b070a;
static PyCodeObject *codeobj_f563dd53b28db94cd82691675001e357;
static PyCodeObject *codeobj_90d7ae6e18f7524625a65419ebe08b17;
static PyCodeObject *codeobj_918395fd84c1ab8967fd7223220724e2;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[89]); CHECK_OBJECT(module_filename_obj);
    codeobj_bb84ef9b403e7558e48f6d2eb32b070a = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[90], mod_consts[90], NULL, NULL, 0, 0, 0);
    codeobj_f563dd53b28db94cd82691675001e357 = MAKE_CODE_OBJECT(module_filename_obj, 23, 0, mod_consts[50], mod_consts[50], mod_consts[91], NULL, 0, 0, 0);
    codeobj_90d7ae6e18f7524625a65419ebe08b17 = MAKE_CODE_OBJECT(module_filename_obj, 9, 0, mod_consts[35], mod_consts[35], mod_consts[91], NULL, 0, 0, 0);
    codeobj_918395fd84c1ab8967fd7223220724e2 = MAKE_CODE_OBJECT(module_filename_obj, 172, 0, mod_consts[85], mod_consts[85], mod_consts[91], NULL, 0, 0, 0);
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

static function_impl_code const function_table_pycaw$api$endpointvolume[] = {

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

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_pycaw$api$endpointvolume);

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
        module_pycaw$api$endpointvolume,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        function_table_pycaw$api$endpointvolume,
        sizeof(function_table_pycaw$api$endpointvolume) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_pycaw$api$endpointvolume(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pycaw$api$endpointvolume");

    // Store the module for future use.
    module_pycaw$api$endpointvolume = module;

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
        PRINT_STRING("pycaw$api$endpointvolume: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pycaw$api$endpointvolume: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

#if defined(_NUITKA_MODULE) && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "pycaw.api.endpointvolume" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initpycaw$api$endpointvolume\n");

    moduledict_pycaw$api$endpointvolume = MODULE_DICT(module_pycaw$api$endpointvolume);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pycaw$api$endpointvolume,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pycaw$api$endpointvolume,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[92]
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pycaw$api$endpointvolume,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pycaw$api$endpointvolume,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pycaw$api$endpointvolume,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pycaw$api$endpointvolume);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pycaw$api$endpointvolume);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
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
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_bb84ef9b403e7558e48f6d2eb32b070a;
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
    PyObject *locals_pycaw$api$endpointvolume$$$class__1_IAudioEndpointVolumeCallback_9 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_90d7ae6e18f7524625a65419ebe08b17_2;
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
    PyObject *locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23 = NULL;
    struct Nuitka_FrameObject *frame_f563dd53b28db94cd82691675001e357_3;
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
    PyObject *locals_pycaw$api$endpointvolume$$$class__3_IAudioMeterInformation_172 = NULL;
    struct Nuitka_FrameObject *frame_918395fd84c1ab8967fd7223220724e2_4;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_2);
    }
    frame_bb84ef9b403e7558e48f6d2eb32b070a = MAKE_MODULE_FRAME(codeobj_bb84ef9b403e7558e48f6d2eb32b070a, module_pycaw$api$endpointvolume);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_bb84ef9b403e7558e48f6d2eb32b070a);
    assert(Py_REFCNT(frame_bb84ef9b403e7558e48f6d2eb32b070a) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        frame_bb84ef9b403e7558e48f6d2eb32b070a->m_frame.f_lineno = 1;
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
        frame_bb84ef9b403e7558e48f6d2eb32b070a->m_frame.f_lineno = 1;
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
            frame_bb84ef9b403e7558e48f6d2eb32b070a->m_frame.f_lineno = 1;
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
            frame_bb84ef9b403e7558e48f6d2eb32b070a->m_frame.f_lineno = 1;
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
            frame_bb84ef9b403e7558e48f6d2eb32b070a->m_frame.f_lineno = 1;
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
            frame_bb84ef9b403e7558e48f6d2eb32b070a->m_frame.f_lineno = 1;
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
            frame_bb84ef9b403e7558e48f6d2eb32b070a->m_frame.f_lineno = 1;
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
            frame_bb84ef9b403e7558e48f6d2eb32b070a->m_frame.f_lineno = 1;
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
            frame_bb84ef9b403e7558e48f6d2eb32b070a->m_frame.f_lineno = 1;
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
            frame_bb84ef9b403e7558e48f6d2eb32b070a->m_frame.f_lineno = 1;
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
            frame_bb84ef9b403e7558e48f6d2eb32b070a->m_frame.f_lineno = 1;
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
            frame_bb84ef9b403e7558e48f6d2eb32b070a->m_frame.f_lineno = 1;
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
        UPDATE_STRING_DICT1(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[13]);

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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[13]);

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
        tmp_assattr_value_3 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_assattr_value_3 == NULL)) {
            tmp_assattr_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        if (tmp_assattr_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_3 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[13]);

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
        UPDATE_STRING_DICT0(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_4);
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
                (PyObject *)moduledict_pycaw$api$endpointvolume,
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
        UPDATE_STRING_DICT1(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_6);
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
                (PyObject *)moduledict_pycaw$api$endpointvolume,
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
        UPDATE_STRING_DICT1(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_7);
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
                (PyObject *)moduledict_pycaw$api$endpointvolume,
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
        UPDATE_STRING_DICT1(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_8);
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
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = IMPORT_HARD_CTYPES__WINTYPES();
        assert(!(tmp_assign_source_9 == NULL));
        assert(tmp_import_from_2__module == NULL);
        Py_INCREF(tmp_assign_source_9);
        tmp_import_from_2__module = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_4 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_pycaw$api$endpointvolume,
                mod_consts[22],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[22]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_pycaw$api$endpointvolume,
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
        UPDATE_STRING_DICT1(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_11);
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
                (PyObject *)moduledict_pycaw$api$endpointvolume,
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
        UPDATE_STRING_DICT1(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_12);
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
        PyObject *tmp_assign_source_13;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[25];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pycaw$api$endpointvolume;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[26];
        tmp_level_value_1 = mod_consts[19];
        frame_bb84ef9b403e7558e48f6d2eb32b070a->m_frame.f_lineno = 4;
        tmp_assign_source_13 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_7 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_7,
                (PyObject *)moduledict_pycaw$api$endpointvolume,
                mod_consts[27],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[27]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_8 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_8,
                (PyObject *)moduledict_pycaw$api$endpointvolume,
                mod_consts[28],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[28]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_9 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_9,
                (PyObject *)moduledict_pycaw$api$endpointvolume,
                mod_consts[29],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts[29]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_16);
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
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[30];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_pycaw$api$endpointvolume;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[31];
        tmp_level_value_2 = mod_consts[32];
        frame_bb84ef9b403e7558e48f6d2eb32b070a->m_frame.f_lineno = 6;
        tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_10,
                (PyObject *)moduledict_pycaw$api$endpointvolume,
                mod_consts[33],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts[33]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_17);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_4;
        }
        tmp_assign_source_18 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_18, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_19 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
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
        tmp_assign_source_21 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_21;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_8 = tmp_class_creation_1__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_8, mod_consts[34]);
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
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_9 = tmp_class_creation_1__metaclass;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[34]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_4;
        }
        tmp_tuple_element_2 = mod_consts[35];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_bb84ef9b403e7558e48f6d2eb32b070a->m_frame.f_lineno = 9;
        tmp_assign_source_22 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_22;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_10 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_10, mod_consts[36]);
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
        tmp_mod_expr_left_1 = mod_consts[37];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_11 = tmp_class_creation_1__metaclass;
        tmp_name_value_3 = mod_consts[38];
        tmp_default_value_1 = mod_consts[39];
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
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[38]);
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
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_23;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_24;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_pycaw$api$endpointvolume$$$class__1_IAudioEndpointVolumeCallback_9 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[40];
        tmp_res = PyObject_SetItem(locals_pycaw$api$endpointvolume$$$class__1_IAudioEndpointVolumeCallback_9, mod_consts[41], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[35];
        tmp_res = PyObject_SetItem(locals_pycaw$api$endpointvolume$$$class__1_IAudioEndpointVolumeCallback_9, mod_consts[42], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_6;
        }
        frame_90d7ae6e18f7524625a65419ebe08b17_2 = MAKE_CLASS_FRAME(tstate, codeobj_90d7ae6e18f7524625a65419ebe08b17, module_pycaw$api$endpointvolume, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_90d7ae6e18f7524625a65419ebe08b17_2);
        assert(Py_REFCNT(frame_90d7ae6e18f7524625a65419ebe08b17_2) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_8;
            tmp_called_value_8 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__1_IAudioEndpointVolumeCallback_9, mod_consts[28]);

            if (tmp_called_value_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[28]);

                    if (unlikely(tmp_called_value_8 == NULL)) {
                        tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
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

            frame_90d7ae6e18f7524625a65419ebe08b17_2->m_frame.f_lineno = 10;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_8, mod_consts[43]);

            Py_DECREF(tmp_called_value_8);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 10;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pycaw$api$endpointvolume$$$class__1_IAudioEndpointVolumeCallback_9, mod_consts[44], tmp_dictset_value);
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
            tmp_called_value_9 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__1_IAudioEndpointVolumeCallback_9, mod_consts[27]);

            if (tmp_called_value_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[27]);

                    if (unlikely(tmp_called_value_9 == NULL)) {
                        tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
                    }

                    if (tmp_called_value_9 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 14;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_9);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_element_value_6 = MAKE_LIST_EMPTY(0);
            tmp_args_element_value_7 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__1_IAudioEndpointVolumeCallback_9, mod_consts[18]);

            if (tmp_args_element_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_args_element_value_7 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_args_element_value_7 == NULL)) {
                        tmp_args_element_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                    }

                    if (tmp_args_element_value_7 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_9);
                        Py_DECREF(tmp_args_element_value_6);

                        exception_lineno = 16;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_args_element_value_7);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_element_value_8 = mod_consts[45];
            tmp_tuple_element_5 = MAKE_LIST1(mod_consts[46]);
            tmp_args_element_value_9 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM(tmp_args_element_value_9, 0, tmp_tuple_element_5);
            tmp_tuple_element_5 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__1_IAudioEndpointVolumeCallback_9, mod_consts[33]);

            if (tmp_tuple_element_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[33]);

                    if (unlikely(tmp_tuple_element_5 == NULL)) {
                        tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
                    }

                    if (tmp_tuple_element_5 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 18;
                        type_description_2 = "o";
                        goto tuple_build_exception_2;
                    }
                    Py_INCREF(tmp_tuple_element_5);
                } else {
                    goto tuple_build_exception_2;
                }
            }

            PyTuple_SET_ITEM(tmp_args_element_value_9, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = mod_consts[47];
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
            frame_90d7ae6e18f7524625a65419ebe08b17_2->m_frame.f_lineno = 14;
            {
                PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_9, call_args);
            }

            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dictset_value = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_dictset_value, 0, tmp_tuple_element_4);
            tmp_res = PyObject_SetItem(locals_pycaw$api$endpointvolume$$$class__1_IAudioEndpointVolumeCallback_9, mod_consts[48], tmp_dictset_value);
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
            exception_tb = MAKE_TRACEBACK(frame_90d7ae6e18f7524625a65419ebe08b17_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_90d7ae6e18f7524625a65419ebe08b17_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_90d7ae6e18f7524625a65419ebe08b17_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_90d7ae6e18f7524625a65419ebe08b17_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_90d7ae6e18f7524625a65419ebe08b17_2);

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
        tmp_res = PyObject_SetItem(locals_pycaw$api$endpointvolume$$$class__1_IAudioEndpointVolumeCallback_9, mod_consts[49], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_6;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_10 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_6 = mod_consts[35];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_6 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = locals_pycaw$api$endpointvolume$$$class__1_IAudioEndpointVolumeCallback_9;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_bb84ef9b403e7558e48f6d2eb32b070a->m_frame.f_lineno = 9;
            tmp_assign_source_25 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 9;

                goto try_except_handler_6;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_25;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_24 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_24);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_pycaw$api$endpointvolume$$$class__1_IAudioEndpointVolumeCallback_9);
        locals_pycaw$api$endpointvolume$$$class__1_IAudioEndpointVolumeCallback_9 = NULL;
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

        Py_DECREF(locals_pycaw$api$endpointvolume$$$class__1_IAudioEndpointVolumeCallback_9);
        locals_pycaw$api$endpointvolume$$$class__1_IAudioEndpointVolumeCallback_9 = NULL;
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
        UPDATE_STRING_DICT1(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_24);
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
        PyObject *tmp_assign_source_26;
        PyObject *tmp_tuple_element_7;
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_tuple_element_7 == NULL)) {
            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
        }

        if (tmp_tuple_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_7;
        }
        tmp_assign_source_26 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_26, 0, tmp_tuple_element_7);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_27 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
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


            exception_lineno = 23;

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


            exception_lineno = 23;

            goto try_except_handler_7;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_7;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_29 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_29;
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_14 = tmp_class_creation_2__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_14, mod_consts[34]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

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
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_15 = tmp_class_creation_2__metaclass;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[34]);
        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_7;
        }
        tmp_tuple_element_8 = mod_consts[50];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_8);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_8 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_8);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_bb84ef9b403e7558e48f6d2eb32b070a->m_frame.f_lineno = 23;
        tmp_assign_source_30 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_30;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_16 = tmp_class_creation_2__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_16, mod_consts[36]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

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
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_name_value_4;
        PyObject *tmp_default_value_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[37];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_17 = tmp_class_creation_2__metaclass;
        tmp_name_value_4 = mod_consts[38];
        tmp_default_value_2 = mod_consts[39];
        tmp_tuple_element_9 = BUILTIN_GETATTR(tstate, tmp_expression_value_17, tmp_name_value_4, tmp_default_value_2);
        if (tmp_tuple_element_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_7;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_18;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_18 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_18 == NULL));
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[38]);
            Py_DECREF(tmp_expression_value_18);
            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_9);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_7;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 23;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_7;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_31;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_32;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[40];
        tmp_res = PyObject_SetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[41], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[50];
        tmp_res = PyObject_SetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[42], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_9;
        }
        frame_f563dd53b28db94cd82691675001e357_3 = MAKE_CLASS_FRAME(tstate, codeobj_f563dd53b28db94cd82691675001e357, module_pycaw$api$endpointvolume, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_f563dd53b28db94cd82691675001e357_3);
        assert(Py_REFCNT(frame_f563dd53b28db94cd82691675001e357_3) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_12;
            tmp_called_value_12 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[28]);

            if (tmp_called_value_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[28]);

                    if (unlikely(tmp_called_value_12 == NULL)) {
                        tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
                    }

                    if (tmp_called_value_12 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 24;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_value_12);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            frame_f563dd53b28db94cd82691675001e357_3->m_frame.f_lineno = 24;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_12, mod_consts[51]);

            Py_DECREF(tmp_called_value_12);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[44], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_element_value_10;
            PyObject *tmp_args_element_value_11;
            PyObject *tmp_args_element_value_12;
            PyObject *tmp_args_element_value_13;
            PyObject *tmp_tuple_element_11;
            tmp_called_value_13 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[27]);

            if (tmp_called_value_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[27]);

                    if (unlikely(tmp_called_value_13 == NULL)) {
                        tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
                    }

                    if (tmp_called_value_13 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 28;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_value_13);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_args_element_value_10 = MAKE_LIST_EMPTY(0);
            tmp_args_element_value_11 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[18]);

            if (tmp_args_element_value_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_args_element_value_11 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_args_element_value_11 == NULL)) {
                        tmp_args_element_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                    }

                    if (tmp_args_element_value_11 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_13);
                        Py_DECREF(tmp_args_element_value_10);

                        exception_lineno = 30;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_args_element_value_11);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_args_element_value_12 = mod_consts[52];
            tmp_tuple_element_11 = MAKE_LIST1(mod_consts[46]);
            tmp_args_element_value_13 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_called_value_14;
                PyObject *tmp_args_element_value_14;
                PyTuple_SET_ITEM(tmp_args_element_value_13, 0, tmp_tuple_element_11);
                tmp_called_value_14 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[20]);

                if (tmp_called_value_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[20]);

                        if (unlikely(tmp_called_value_14 == NULL)) {
                            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                        }

                        if (tmp_called_value_14 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 32;
                            type_description_2 = "o";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_called_value_14);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                tmp_args_element_value_14 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[35]);

                if (tmp_args_element_value_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_14 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[35]);

                        if (unlikely(tmp_args_element_value_14 == NULL)) {
                            tmp_args_element_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
                        }

                        if (tmp_args_element_value_14 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_14);

                            exception_lineno = 32;
                            type_description_2 = "o";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_args_element_value_14);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                frame_f563dd53b28db94cd82691675001e357_3->m_frame.f_lineno = 32;
                tmp_tuple_element_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_14);
                Py_DECREF(tmp_called_value_14);
                Py_DECREF(tmp_args_element_value_14);
                if (tmp_tuple_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 32;
                    type_description_2 = "o";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_args_element_value_13, 1, tmp_tuple_element_11);
                tmp_tuple_element_11 = mod_consts[47];
                PyTuple_SET_ITEM0(tmp_args_element_value_13, 2, tmp_tuple_element_11);
            }
            goto tuple_build_noexception_4;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_4:;
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_13);
            goto frame_exception_exit_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_4:;
            frame_f563dd53b28db94cd82691675001e357_3->m_frame.f_lineno = 28;
            {
                PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
                tmp_tuple_element_10 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_13, call_args);
            }

            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_13);
            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_dictset_value = MAKE_TUPLE_EMPTY(18);
            {
                PyObject *tmp_called_value_15;
                PyObject *tmp_args_element_value_15;
                PyObject *tmp_args_element_value_16;
                PyObject *tmp_args_element_value_17;
                PyObject *tmp_args_element_value_18;
                PyObject *tmp_tuple_element_12;
                PyObject *tmp_called_value_17;
                PyObject *tmp_args_element_value_20;
                PyObject *tmp_args_element_value_21;
                PyObject *tmp_args_element_value_22;
                PyObject *tmp_args_element_value_23;
                PyObject *tmp_tuple_element_13;
                PyObject *tmp_called_value_19;
                PyObject *tmp_args_element_value_25;
                PyObject *tmp_args_element_value_26;
                PyObject *tmp_args_element_value_27;
                PyObject *tmp_args_element_value_28;
                PyObject *tmp_tuple_element_14;
                PyObject *tmp_args_element_value_29;
                PyObject *tmp_tuple_element_15;
                PyObject *tmp_called_value_21;
                PyObject *tmp_args_element_value_31;
                PyObject *tmp_args_element_value_32;
                PyObject *tmp_args_element_value_33;
                PyObject *tmp_args_element_value_34;
                PyObject *tmp_tuple_element_16;
                PyObject *tmp_args_element_value_35;
                PyObject *tmp_tuple_element_17;
                PyObject *tmp_called_value_23;
                PyObject *tmp_args_element_value_37;
                PyObject *tmp_args_element_value_38;
                PyObject *tmp_args_element_value_39;
                PyObject *tmp_args_element_value_40;
                PyObject *tmp_tuple_element_18;
                PyObject *tmp_called_value_25;
                PyObject *tmp_args_element_value_42;
                PyObject *tmp_args_element_value_43;
                PyObject *tmp_args_element_value_44;
                PyObject *tmp_args_element_value_45;
                PyObject *tmp_tuple_element_19;
                PyObject *tmp_called_value_27;
                PyObject *tmp_args_element_value_47;
                PyObject *tmp_args_element_value_48;
                PyObject *tmp_args_element_value_49;
                PyObject *tmp_args_element_value_50;
                PyObject *tmp_tuple_element_20;
                PyObject *tmp_args_element_value_51;
                PyObject *tmp_tuple_element_21;
                PyObject *tmp_args_element_value_52;
                PyObject *tmp_tuple_element_22;
                PyObject *tmp_called_value_29;
                PyObject *tmp_args_element_value_54;
                PyObject *tmp_args_element_value_55;
                PyObject *tmp_args_element_value_56;
                PyObject *tmp_args_element_value_57;
                PyObject *tmp_tuple_element_23;
                PyObject *tmp_args_element_value_58;
                PyObject *tmp_tuple_element_24;
                PyObject *tmp_args_element_value_59;
                PyObject *tmp_tuple_element_25;
                PyObject *tmp_called_value_31;
                PyObject *tmp_args_element_value_61;
                PyObject *tmp_args_element_value_62;
                PyObject *tmp_args_element_value_63;
                PyObject *tmp_args_element_value_64;
                PyObject *tmp_tuple_element_26;
                PyObject *tmp_args_element_value_65;
                PyObject *tmp_tuple_element_27;
                PyObject *tmp_called_value_33;
                PyObject *tmp_args_element_value_67;
                PyObject *tmp_args_element_value_68;
                PyObject *tmp_args_element_value_69;
                PyObject *tmp_args_element_value_70;
                PyObject *tmp_tuple_element_28;
                PyObject *tmp_args_element_value_71;
                PyObject *tmp_tuple_element_29;
                PyObject *tmp_called_value_35;
                PyObject *tmp_args_element_value_73;
                PyObject *tmp_args_element_value_74;
                PyObject *tmp_args_element_value_75;
                PyObject *tmp_args_element_value_76;
                PyObject *tmp_tuple_element_30;
                PyObject *tmp_args_element_value_77;
                PyObject *tmp_tuple_element_31;
                PyObject *tmp_called_value_37;
                PyObject *tmp_args_element_value_79;
                PyObject *tmp_args_element_value_80;
                PyObject *tmp_args_element_value_81;
                PyObject *tmp_args_element_value_82;
                PyObject *tmp_tuple_element_32;
                PyObject *tmp_called_value_39;
                PyObject *tmp_args_element_value_84;
                PyObject *tmp_args_element_value_85;
                PyObject *tmp_args_element_value_86;
                PyObject *tmp_args_element_value_87;
                PyObject *tmp_tuple_element_33;
                PyObject *tmp_args_element_value_89;
                PyObject *tmp_tuple_element_34;
                PyObject *tmp_called_value_42;
                PyObject *tmp_args_element_value_91;
                PyObject *tmp_args_element_value_92;
                PyObject *tmp_args_element_value_93;
                PyObject *tmp_args_element_value_94;
                PyObject *tmp_tuple_element_35;
                PyObject *tmp_called_value_44;
                PyObject *tmp_args_element_value_96;
                PyObject *tmp_args_element_value_97;
                PyObject *tmp_args_element_value_98;
                PyObject *tmp_args_element_value_99;
                PyObject *tmp_tuple_element_36;
                PyObject *tmp_called_value_46;
                PyObject *tmp_args_element_value_101;
                PyObject *tmp_args_element_value_102;
                PyObject *tmp_args_element_value_103;
                PyObject *tmp_args_element_value_104;
                PyObject *tmp_tuple_element_37;
                PyObject *tmp_called_value_48;
                PyObject *tmp_args_element_value_106;
                PyObject *tmp_args_element_value_107;
                PyObject *tmp_args_element_value_108;
                PyObject *tmp_args_element_value_109;
                PyObject *tmp_tuple_element_38;
                PyObject *tmp_args_element_value_111;
                PyObject *tmp_tuple_element_39;
                PyObject *tmp_args_element_value_113;
                PyObject *tmp_tuple_element_40;
                PyTuple_SET_ITEM(tmp_dictset_value, 0, tmp_tuple_element_10);
                tmp_called_value_15 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[27]);

                if (tmp_called_value_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[27]);

                        if (unlikely(tmp_called_value_15 == NULL)) {
                            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
                        }

                        if (tmp_called_value_15 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 36;
                            type_description_2 = "o";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_called_value_15);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                tmp_args_element_value_15 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_16 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[18]);

                if (tmp_args_element_value_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_16 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[18]);

                        if (unlikely(tmp_args_element_value_16 == NULL)) {
                            tmp_args_element_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                        }

                        if (tmp_args_element_value_16 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_15);
                            Py_DECREF(tmp_args_element_value_15);

                            exception_lineno = 38;
                            type_description_2 = "o";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_args_element_value_16);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                tmp_args_element_value_17 = mod_consts[53];
                tmp_tuple_element_12 = MAKE_LIST1(mod_consts[46]);
                tmp_args_element_value_18 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_16;
                    PyObject *tmp_args_element_value_19;
                    PyTuple_SET_ITEM(tmp_args_element_value_18, 0, tmp_tuple_element_12);
                    tmp_called_value_16 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[20]);

                    if (tmp_called_value_16 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[20]);

                            if (unlikely(tmp_called_value_16 == NULL)) {
                                tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                            }

                            if (tmp_called_value_16 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 40;
                                type_description_2 = "o";
                                goto tuple_build_exception_6;
                            }
                            Py_INCREF(tmp_called_value_16);
                        } else {
                            goto tuple_build_exception_6;
                        }
                    }

                    tmp_args_element_value_19 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[35]);

                    if (tmp_args_element_value_19 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_19 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[35]);

                            if (unlikely(tmp_args_element_value_19 == NULL)) {
                                tmp_args_element_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
                            }

                            if (tmp_args_element_value_19 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_16);

                                exception_lineno = 40;
                                type_description_2 = "o";
                                goto tuple_build_exception_6;
                            }
                            Py_INCREF(tmp_args_element_value_19);
                        } else {
                            goto tuple_build_exception_6;
                        }
                    }

                    frame_f563dd53b28db94cd82691675001e357_3->m_frame.f_lineno = 40;
                    tmp_tuple_element_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_19);
                    Py_DECREF(tmp_called_value_16);
                    Py_DECREF(tmp_args_element_value_19);
                    if (tmp_tuple_element_12 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 40;
                        type_description_2 = "o";
                        goto tuple_build_exception_6;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_18, 1, tmp_tuple_element_12);
                    tmp_tuple_element_12 = mod_consts[47];
                    PyTuple_SET_ITEM0(tmp_args_element_value_18, 2, tmp_tuple_element_12);
                }
                goto tuple_build_noexception_5;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_6:;
                Py_DECREF(tmp_called_value_15);
                Py_DECREF(tmp_args_element_value_15);
                Py_DECREF(tmp_args_element_value_16);
                Py_DECREF(tmp_args_element_value_18);
                goto tuple_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_5:;
                frame_f563dd53b28db94cd82691675001e357_3->m_frame.f_lineno = 36;
                {
                    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18};
                    tmp_tuple_element_10 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_15, call_args);
                }

                Py_DECREF(tmp_called_value_15);
                Py_DECREF(tmp_args_element_value_15);
                Py_DECREF(tmp_args_element_value_16);
                Py_DECREF(tmp_args_element_value_18);
                if (tmp_tuple_element_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 36;
                    type_description_2 = "o";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 1, tmp_tuple_element_10);
                tmp_called_value_17 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[27]);

                if (tmp_called_value_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[27]);

                        if (unlikely(tmp_called_value_17 == NULL)) {
                            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
                        }

                        if (tmp_called_value_17 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 43;
                            type_description_2 = "o";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_called_value_17);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                tmp_args_element_value_20 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_21 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[18]);

                if (tmp_args_element_value_21 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_21 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[18]);

                        if (unlikely(tmp_args_element_value_21 == NULL)) {
                            tmp_args_element_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                        }

                        if (tmp_args_element_value_21 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_17);
                            Py_DECREF(tmp_args_element_value_20);

                            exception_lineno = 44;
                            type_description_2 = "o";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_args_element_value_21);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                tmp_args_element_value_22 = mod_consts[54];
                tmp_tuple_element_13 = MAKE_LIST1(mod_consts[55]);
                tmp_args_element_value_23 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_18;
                    PyObject *tmp_args_element_value_24;
                    PyTuple_SET_ITEM(tmp_args_element_value_23, 0, tmp_tuple_element_13);
                    tmp_called_value_18 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[20]);

                    if (tmp_called_value_18 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[20]);

                            if (unlikely(tmp_called_value_18 == NULL)) {
                                tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                            }

                            if (tmp_called_value_18 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 44;
                                type_description_2 = "o";
                                goto tuple_build_exception_7;
                            }
                            Py_INCREF(tmp_called_value_18);
                        } else {
                            goto tuple_build_exception_7;
                        }
                    }

                    tmp_args_element_value_24 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[24]);

                    if (tmp_args_element_value_24 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_24 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_args_element_value_24 == NULL)) {
                                tmp_args_element_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_args_element_value_24 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_18);

                                exception_lineno = 44;
                                type_description_2 = "o";
                                goto tuple_build_exception_7;
                            }
                            Py_INCREF(tmp_args_element_value_24);
                        } else {
                            goto tuple_build_exception_7;
                        }
                    }

                    frame_f563dd53b28db94cd82691675001e357_3->m_frame.f_lineno = 44;
                    tmp_tuple_element_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_24);
                    Py_DECREF(tmp_called_value_18);
                    Py_DECREF(tmp_args_element_value_24);
                    if (tmp_tuple_element_13 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 44;
                        type_description_2 = "o";
                        goto tuple_build_exception_7;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_23, 1, tmp_tuple_element_13);
                    tmp_tuple_element_13 = mod_consts[56];
                    PyTuple_SET_ITEM0(tmp_args_element_value_23, 2, tmp_tuple_element_13);
                }
                goto tuple_build_noexception_6;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_7:;
                Py_DECREF(tmp_called_value_17);
                Py_DECREF(tmp_args_element_value_20);
                Py_DECREF(tmp_args_element_value_21);
                Py_DECREF(tmp_args_element_value_23);
                goto tuple_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_6:;
                frame_f563dd53b28db94cd82691675001e357_3->m_frame.f_lineno = 43;
                {
                    PyObject *call_args[] = {tmp_args_element_value_20, tmp_args_element_value_21, tmp_args_element_value_22, tmp_args_element_value_23};
                    tmp_tuple_element_10 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_17, call_args);
                }

                Py_DECREF(tmp_called_value_17);
                Py_DECREF(tmp_args_element_value_20);
                Py_DECREF(tmp_args_element_value_21);
                Py_DECREF(tmp_args_element_value_23);
                if (tmp_tuple_element_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 43;
                    type_description_2 = "o";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 2, tmp_tuple_element_10);
                tmp_called_value_19 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[27]);

                if (tmp_called_value_19 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[27]);

                        if (unlikely(tmp_called_value_19 == NULL)) {
                            tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
                        }

                        if (tmp_called_value_19 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 48;
                            type_description_2 = "o";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_called_value_19);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                tmp_args_element_value_25 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_26 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[18]);

                if (tmp_args_element_value_26 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_26 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[18]);

                        if (unlikely(tmp_args_element_value_26 == NULL)) {
                            tmp_args_element_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                        }

                        if (tmp_args_element_value_26 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_19);
                            Py_DECREF(tmp_args_element_value_25);

                            exception_lineno = 50;
                            type_description_2 = "o";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_args_element_value_26);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                tmp_args_element_value_27 = mod_consts[57];
                tmp_tuple_element_14 = MAKE_LIST1(mod_consts[46]);
                tmp_args_element_value_28 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM(tmp_args_element_value_28, 0, tmp_tuple_element_14);
                tmp_tuple_element_14 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[21]);

                if (tmp_tuple_element_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_14 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[21]);

                        if (unlikely(tmp_tuple_element_14 == NULL)) {
                            tmp_tuple_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
                        }

                        if (tmp_tuple_element_14 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 52;
                            type_description_2 = "o";
                            goto tuple_build_exception_8;
                        }
                        Py_INCREF(tmp_tuple_element_14);
                    } else {
                        goto tuple_build_exception_8;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_element_value_28, 1, tmp_tuple_element_14);
                tmp_tuple_element_14 = mod_consts[58];
                PyTuple_SET_ITEM0(tmp_args_element_value_28, 2, tmp_tuple_element_14);
                goto tuple_build_noexception_7;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_8:;
                Py_DECREF(tmp_called_value_19);
                Py_DECREF(tmp_args_element_value_25);
                Py_DECREF(tmp_args_element_value_26);
                Py_DECREF(tmp_args_element_value_28);
                goto tuple_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_7:;
                tmp_tuple_element_15 = MAKE_LIST1(mod_consts[46]);
                tmp_args_element_value_29 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_20;
                    PyObject *tmp_args_element_value_30;
                    PyTuple_SET_ITEM(tmp_args_element_value_29, 0, tmp_tuple_element_15);
                    tmp_called_value_20 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[20]);

                    if (tmp_called_value_20 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[20]);

                            if (unlikely(tmp_called_value_20 == NULL)) {
                                tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                            }

                            if (tmp_called_value_20 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 53;
                                type_description_2 = "o";
                                goto tuple_build_exception_9;
                            }
                            Py_INCREF(tmp_called_value_20);
                        } else {
                            goto tuple_build_exception_9;
                        }
                    }

                    tmp_args_element_value_30 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[28]);

                    if (tmp_args_element_value_30 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_30 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[28]);

                            if (unlikely(tmp_args_element_value_30 == NULL)) {
                                tmp_args_element_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
                            }

                            if (tmp_args_element_value_30 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_20);

                                exception_lineno = 53;
                                type_description_2 = "o";
                                goto tuple_build_exception_9;
                            }
                            Py_INCREF(tmp_args_element_value_30);
                        } else {
                            goto tuple_build_exception_9;
                        }
                    }

                    frame_f563dd53b28db94cd82691675001e357_3->m_frame.f_lineno = 53;
                    tmp_tuple_element_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_20, tmp_args_element_value_30);
                    Py_DECREF(tmp_called_value_20);
                    Py_DECREF(tmp_args_element_value_30);
                    if (tmp_tuple_element_15 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 53;
                        type_description_2 = "o";
                        goto tuple_build_exception_9;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_29, 1, tmp_tuple_element_15);
                    tmp_tuple_element_15 = mod_consts[59];
                    PyTuple_SET_ITEM0(tmp_args_element_value_29, 2, tmp_tuple_element_15);
                }
                goto tuple_build_noexception_8;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_9:;
                Py_DECREF(tmp_called_value_19);
                Py_DECREF(tmp_args_element_value_25);
                Py_DECREF(tmp_args_element_value_26);
                Py_DECREF(tmp_args_element_value_28);
                Py_DECREF(tmp_args_element_value_29);
                goto tuple_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_8:;
                frame_f563dd53b28db94cd82691675001e357_3->m_frame.f_lineno = 48;
                {
                    PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_26, tmp_args_element_value_27, tmp_args_element_value_28, tmp_args_element_value_29};
                    tmp_tuple_element_10 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_19, call_args);
                }

                Py_DECREF(tmp_called_value_19);
                Py_DECREF(tmp_args_element_value_25);
                Py_DECREF(tmp_args_element_value_26);
                Py_DECREF(tmp_args_element_value_28);
                Py_DECREF(tmp_args_element_value_29);
                if (tmp_tuple_element_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 48;
                    type_description_2 = "o";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 3, tmp_tuple_element_10);
                tmp_called_value_21 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[27]);

                if (tmp_called_value_21 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[27]);

                        if (unlikely(tmp_called_value_21 == NULL)) {
                            tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
                        }

                        if (tmp_called_value_21 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 57;
                            type_description_2 = "o";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_called_value_21);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                tmp_args_element_value_31 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_32 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[18]);

                if (tmp_args_element_value_32 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_32 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[18]);

                        if (unlikely(tmp_args_element_value_32 == NULL)) {
                            tmp_args_element_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                        }

                        if (tmp_args_element_value_32 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_21);
                            Py_DECREF(tmp_args_element_value_31);

                            exception_lineno = 59;
                            type_description_2 = "o";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_args_element_value_32);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                tmp_args_element_value_33 = mod_consts[60];
                tmp_tuple_element_16 = MAKE_LIST1(mod_consts[46]);
                tmp_args_element_value_34 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM(tmp_args_element_value_34, 0, tmp_tuple_element_16);
                tmp_tuple_element_16 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[21]);

                if (tmp_tuple_element_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[21]);

                        if (unlikely(tmp_tuple_element_16 == NULL)) {
                            tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
                        }

                        if (tmp_tuple_element_16 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 61;
                            type_description_2 = "o";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_tuple_element_16);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_element_value_34, 1, tmp_tuple_element_16);
                tmp_tuple_element_16 = mod_consts[61];
                PyTuple_SET_ITEM0(tmp_args_element_value_34, 2, tmp_tuple_element_16);
                goto tuple_build_noexception_9;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_10:;
                Py_DECREF(tmp_called_value_21);
                Py_DECREF(tmp_args_element_value_31);
                Py_DECREF(tmp_args_element_value_32);
                Py_DECREF(tmp_args_element_value_34);
                goto tuple_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_9:;
                tmp_tuple_element_17 = MAKE_LIST1(mod_consts[46]);
                tmp_args_element_value_35 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_22;
                    PyObject *tmp_args_element_value_36;
                    PyTuple_SET_ITEM(tmp_args_element_value_35, 0, tmp_tuple_element_17);
                    tmp_called_value_22 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[20]);

                    if (tmp_called_value_22 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[20]);

                            if (unlikely(tmp_called_value_22 == NULL)) {
                                tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                            }

                            if (tmp_called_value_22 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 62;
                                type_description_2 = "o";
                                goto tuple_build_exception_11;
                            }
                            Py_INCREF(tmp_called_value_22);
                        } else {
                            goto tuple_build_exception_11;
                        }
                    }

                    tmp_args_element_value_36 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[28]);

                    if (tmp_args_element_value_36 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_36 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[28]);

                            if (unlikely(tmp_args_element_value_36 == NULL)) {
                                tmp_args_element_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
                            }

                            if (tmp_args_element_value_36 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_22);

                                exception_lineno = 62;
                                type_description_2 = "o";
                                goto tuple_build_exception_11;
                            }
                            Py_INCREF(tmp_args_element_value_36);
                        } else {
                            goto tuple_build_exception_11;
                        }
                    }

                    frame_f563dd53b28db94cd82691675001e357_3->m_frame.f_lineno = 62;
                    tmp_tuple_element_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_36);
                    Py_DECREF(tmp_called_value_22);
                    Py_DECREF(tmp_args_element_value_36);
                    if (tmp_tuple_element_17 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 62;
                        type_description_2 = "o";
                        goto tuple_build_exception_11;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_35, 1, tmp_tuple_element_17);
                    tmp_tuple_element_17 = mod_consts[59];
                    PyTuple_SET_ITEM0(tmp_args_element_value_35, 2, tmp_tuple_element_17);
                }
                goto tuple_build_noexception_10;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_11:;
                Py_DECREF(tmp_called_value_21);
                Py_DECREF(tmp_args_element_value_31);
                Py_DECREF(tmp_args_element_value_32);
                Py_DECREF(tmp_args_element_value_34);
                Py_DECREF(tmp_args_element_value_35);
                goto tuple_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_10:;
                frame_f563dd53b28db94cd82691675001e357_3->m_frame.f_lineno = 57;
                {
                    PyObject *call_args[] = {tmp_args_element_value_31, tmp_args_element_value_32, tmp_args_element_value_33, tmp_args_element_value_34, tmp_args_element_value_35};
                    tmp_tuple_element_10 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_21, call_args);
                }

                Py_DECREF(tmp_called_value_21);
                Py_DECREF(tmp_args_element_value_31);
                Py_DECREF(tmp_args_element_value_32);
                Py_DECREF(tmp_args_element_value_34);
                Py_DECREF(tmp_args_element_value_35);
                if (tmp_tuple_element_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 57;
                    type_description_2 = "o";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 4, tmp_tuple_element_10);
                tmp_called_value_23 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[27]);

                if (tmp_called_value_23 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[27]);

                        if (unlikely(tmp_called_value_23 == NULL)) {
                            tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
                        }

                        if (tmp_called_value_23 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 65;
                            type_description_2 = "o";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_called_value_23);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                tmp_args_element_value_37 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_38 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[18]);

                if (tmp_args_element_value_38 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_38 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[18]);

                        if (unlikely(tmp_args_element_value_38 == NULL)) {
                            tmp_args_element_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                        }

                        if (tmp_args_element_value_38 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_23);
                            Py_DECREF(tmp_args_element_value_37);

                            exception_lineno = 67;
                            type_description_2 = "o";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_args_element_value_38);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                tmp_args_element_value_39 = mod_consts[62];
                tmp_tuple_element_18 = MAKE_LIST1(mod_consts[55]);
                tmp_args_element_value_40 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_24;
                    PyObject *tmp_args_element_value_41;
                    PyTuple_SET_ITEM(tmp_args_element_value_40, 0, tmp_tuple_element_18);
                    tmp_called_value_24 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[20]);

                    if (tmp_called_value_24 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[20]);

                            if (unlikely(tmp_called_value_24 == NULL)) {
                                tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                            }

                            if (tmp_called_value_24 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 69;
                                type_description_2 = "o";
                                goto tuple_build_exception_12;
                            }
                            Py_INCREF(tmp_called_value_24);
                        } else {
                            goto tuple_build_exception_12;
                        }
                    }

                    tmp_args_element_value_41 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[21]);

                    if (tmp_args_element_value_41 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_41 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[21]);

                            if (unlikely(tmp_args_element_value_41 == NULL)) {
                                tmp_args_element_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
                            }

                            if (tmp_args_element_value_41 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_24);

                                exception_lineno = 69;
                                type_description_2 = "o";
                                goto tuple_build_exception_12;
                            }
                            Py_INCREF(tmp_args_element_value_41);
                        } else {
                            goto tuple_build_exception_12;
                        }
                    }

                    frame_f563dd53b28db94cd82691675001e357_3->m_frame.f_lineno = 69;
                    tmp_tuple_element_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_24, tmp_args_element_value_41);
                    Py_DECREF(tmp_called_value_24);
                    Py_DECREF(tmp_args_element_value_41);
                    if (tmp_tuple_element_18 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 69;
                        type_description_2 = "o";
                        goto tuple_build_exception_12;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_40, 1, tmp_tuple_element_18);
                    tmp_tuple_element_18 = mod_consts[63];
                    PyTuple_SET_ITEM0(tmp_args_element_value_40, 2, tmp_tuple_element_18);
                }
                goto tuple_build_noexception_11;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_12:;
                Py_DECREF(tmp_called_value_23);
                Py_DECREF(tmp_args_element_value_37);
                Py_DECREF(tmp_args_element_value_38);
                Py_DECREF(tmp_args_element_value_40);
                goto tuple_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_11:;
                frame_f563dd53b28db94cd82691675001e357_3->m_frame.f_lineno = 65;
                {
                    PyObject *call_args[] = {tmp_args_element_value_37, tmp_args_element_value_38, tmp_args_element_value_39, tmp_args_element_value_40};
                    tmp_tuple_element_10 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_23, call_args);
                }

                Py_DECREF(tmp_called_value_23);
                Py_DECREF(tmp_args_element_value_37);
                Py_DECREF(tmp_args_element_value_38);
                Py_DECREF(tmp_args_element_value_40);
                if (tmp_tuple_element_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 65;
                    type_description_2 = "o";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 5, tmp_tuple_element_10);
                tmp_called_value_25 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[27]);

                if (tmp_called_value_25 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[27]);

                        if (unlikely(tmp_called_value_25 == NULL)) {
                            tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
                        }

                        if (tmp_called_value_25 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 72;
                            type_description_2 = "o";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_called_value_25);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                tmp_args_element_value_42 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_43 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[18]);

                if (tmp_args_element_value_43 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_43 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[18]);

                        if (unlikely(tmp_args_element_value_43 == NULL)) {
                            tmp_args_element_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                        }

                        if (tmp_args_element_value_43 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_25);
                            Py_DECREF(tmp_args_element_value_42);

                            exception_lineno = 74;
                            type_description_2 = "o";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_args_element_value_43);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                tmp_args_element_value_44 = mod_consts[64];
                tmp_tuple_element_19 = MAKE_LIST1(mod_consts[55]);
                tmp_args_element_value_45 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_26;
                    PyObject *tmp_args_element_value_46;
                    PyTuple_SET_ITEM(tmp_args_element_value_45, 0, tmp_tuple_element_19);
                    tmp_called_value_26 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[20]);

                    if (tmp_called_value_26 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[20]);

                            if (unlikely(tmp_called_value_26 == NULL)) {
                                tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                            }

                            if (tmp_called_value_26 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 76;
                                type_description_2 = "o";
                                goto tuple_build_exception_13;
                            }
                            Py_INCREF(tmp_called_value_26);
                        } else {
                            goto tuple_build_exception_13;
                        }
                    }

                    tmp_args_element_value_46 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[21]);

                    if (tmp_args_element_value_46 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_46 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[21]);

                            if (unlikely(tmp_args_element_value_46 == NULL)) {
                                tmp_args_element_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
                            }

                            if (tmp_args_element_value_46 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_26);

                                exception_lineno = 76;
                                type_description_2 = "o";
                                goto tuple_build_exception_13;
                            }
                            Py_INCREF(tmp_args_element_value_46);
                        } else {
                            goto tuple_build_exception_13;
                        }
                    }

                    frame_f563dd53b28db94cd82691675001e357_3->m_frame.f_lineno = 76;
                    tmp_tuple_element_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_26, tmp_args_element_value_46);
                    Py_DECREF(tmp_called_value_26);
                    Py_DECREF(tmp_args_element_value_46);
                    if (tmp_tuple_element_19 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 76;
                        type_description_2 = "o";
                        goto tuple_build_exception_13;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_45, 1, tmp_tuple_element_19);
                    tmp_tuple_element_19 = mod_consts[63];
                    PyTuple_SET_ITEM0(tmp_args_element_value_45, 2, tmp_tuple_element_19);
                }
                goto tuple_build_noexception_12;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_13:;
                Py_DECREF(tmp_called_value_25);
                Py_DECREF(tmp_args_element_value_42);
                Py_DECREF(tmp_args_element_value_43);
                Py_DECREF(tmp_args_element_value_45);
                goto tuple_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_12:;
                frame_f563dd53b28db94cd82691675001e357_3->m_frame.f_lineno = 72;
                {
                    PyObject *call_args[] = {tmp_args_element_value_42, tmp_args_element_value_43, tmp_args_element_value_44, tmp_args_element_value_45};
                    tmp_tuple_element_10 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_25, call_args);
                }

                Py_DECREF(tmp_called_value_25);
                Py_DECREF(tmp_args_element_value_42);
                Py_DECREF(tmp_args_element_value_43);
                Py_DECREF(tmp_args_element_value_45);
                if (tmp_tuple_element_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 72;
                    type_description_2 = "o";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 6, tmp_tuple_element_10);
                tmp_called_value_27 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[27]);

                if (tmp_called_value_27 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[27]);

                        if (unlikely(tmp_called_value_27 == NULL)) {
                            tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
                        }

                        if (tmp_called_value_27 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 82;
                            type_description_2 = "o";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_called_value_27);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                tmp_args_element_value_47 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_48 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[18]);

                if (tmp_args_element_value_48 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_48 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[18]);

                        if (unlikely(tmp_args_element_value_48 == NULL)) {
                            tmp_args_element_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                        }

                        if (tmp_args_element_value_48 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_27);
                            Py_DECREF(tmp_args_element_value_47);

                            exception_lineno = 84;
                            type_description_2 = "o";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_args_element_value_48);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                tmp_args_element_value_49 = mod_consts[65];
                tmp_tuple_element_20 = MAKE_LIST1(mod_consts[46]);
                tmp_args_element_value_50 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM(tmp_args_element_value_50, 0, tmp_tuple_element_20);
                tmp_tuple_element_20 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[24]);

                if (tmp_tuple_element_20 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_20 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[24]);

                        if (unlikely(tmp_tuple_element_20 == NULL)) {
                            tmp_tuple_element_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                        }

                        if (tmp_tuple_element_20 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 86;
                            type_description_2 = "o";
                            goto tuple_build_exception_14;
                        }
                        Py_INCREF(tmp_tuple_element_20);
                    } else {
                        goto tuple_build_exception_14;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_element_value_50, 1, tmp_tuple_element_20);
                tmp_tuple_element_20 = mod_consts[66];
                PyTuple_SET_ITEM0(tmp_args_element_value_50, 2, tmp_tuple_element_20);
                goto tuple_build_noexception_13;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_14:;
                Py_DECREF(tmp_called_value_27);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_50);
                goto tuple_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_13:;
                tmp_tuple_element_21 = MAKE_LIST1(mod_consts[46]);
                tmp_args_element_value_51 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM(tmp_args_element_value_51, 0, tmp_tuple_element_21);
                tmp_tuple_element_21 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[21]);

                if (tmp_tuple_element_21 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_21 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[21]);

                        if (unlikely(tmp_tuple_element_21 == NULL)) {
                            tmp_tuple_element_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
                        }

                        if (tmp_tuple_element_21 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 87;
                            type_description_2 = "o";
                            goto tuple_build_exception_15;
                        }
                        Py_INCREF(tmp_tuple_element_21);
                    } else {
                        goto tuple_build_exception_15;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_element_value_51, 1, tmp_tuple_element_21);
                tmp_tuple_element_21 = mod_consts[58];
                PyTuple_SET_ITEM0(tmp_args_element_value_51, 2, tmp_tuple_element_21);
                goto tuple_build_noexception_14;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_15:;
                Py_DECREF(tmp_called_value_27);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                goto tuple_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_14:;
                tmp_tuple_element_22 = MAKE_LIST1(mod_consts[46]);
                tmp_args_element_value_52 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_28;
                    PyObject *tmp_args_element_value_53;
                    PyTuple_SET_ITEM(tmp_args_element_value_52, 0, tmp_tuple_element_22);
                    tmp_called_value_28 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[20]);

                    if (tmp_called_value_28 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[20]);

                            if (unlikely(tmp_called_value_28 == NULL)) {
                                tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                            }

                            if (tmp_called_value_28 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 88;
                                type_description_2 = "o";
                                goto tuple_build_exception_16;
                            }
                            Py_INCREF(tmp_called_value_28);
                        } else {
                            goto tuple_build_exception_16;
                        }
                    }

                    tmp_args_element_value_53 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[28]);

                    if (tmp_args_element_value_53 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_53 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[28]);

                            if (unlikely(tmp_args_element_value_53 == NULL)) {
                                tmp_args_element_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
                            }

                            if (tmp_args_element_value_53 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_28);

                                exception_lineno = 88;
                                type_description_2 = "o";
                                goto tuple_build_exception_16;
                            }
                            Py_INCREF(tmp_args_element_value_53);
                        } else {
                            goto tuple_build_exception_16;
                        }
                    }

                    frame_f563dd53b28db94cd82691675001e357_3->m_frame.f_lineno = 88;
                    tmp_tuple_element_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_28, tmp_args_element_value_53);
                    Py_DECREF(tmp_called_value_28);
                    Py_DECREF(tmp_args_element_value_53);
                    if (tmp_tuple_element_22 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 88;
                        type_description_2 = "o";
                        goto tuple_build_exception_16;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_52, 1, tmp_tuple_element_22);
                    tmp_tuple_element_22 = mod_consts[59];
                    PyTuple_SET_ITEM0(tmp_args_element_value_52, 2, tmp_tuple_element_22);
                }
                goto tuple_build_noexception_15;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_16:;
                Py_DECREF(tmp_called_value_27);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_52);
                goto tuple_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_15:;
                frame_f563dd53b28db94cd82691675001e357_3->m_frame.f_lineno = 82;
                {
                    PyObject *call_args[] = {tmp_args_element_value_47, tmp_args_element_value_48, tmp_args_element_value_49, tmp_args_element_value_50, tmp_args_element_value_51, tmp_args_element_value_52};
                    tmp_tuple_element_10 = CALL_FUNCTION_WITH_ARGS6(tstate, tmp_called_value_27, call_args);
                }

                Py_DECREF(tmp_called_value_27);
                Py_DECREF(tmp_args_element_value_47);
                Py_DECREF(tmp_args_element_value_48);
                Py_DECREF(tmp_args_element_value_50);
                Py_DECREF(tmp_args_element_value_51);
                Py_DECREF(tmp_args_element_value_52);
                if (tmp_tuple_element_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 82;
                    type_description_2 = "o";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 7, tmp_tuple_element_10);
                tmp_called_value_29 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[27]);

                if (tmp_called_value_29 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[27]);

                        if (unlikely(tmp_called_value_29 == NULL)) {
                            tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
                        }

                        if (tmp_called_value_29 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 94;
                            type_description_2 = "o";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_called_value_29);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                tmp_args_element_value_54 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_55 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[18]);

                if (tmp_args_element_value_55 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_55 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[18]);

                        if (unlikely(tmp_args_element_value_55 == NULL)) {
                            tmp_args_element_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                        }

                        if (tmp_args_element_value_55 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_29);
                            Py_DECREF(tmp_args_element_value_54);

                            exception_lineno = 96;
                            type_description_2 = "o";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_args_element_value_55);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                tmp_args_element_value_56 = mod_consts[67];
                tmp_tuple_element_23 = MAKE_LIST1(mod_consts[46]);
                tmp_args_element_value_57 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM(tmp_args_element_value_57, 0, tmp_tuple_element_23);
                tmp_tuple_element_23 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[23]);

                if (tmp_tuple_element_23 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_23 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[23]);

                        if (unlikely(tmp_tuple_element_23 == NULL)) {
                            tmp_tuple_element_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
                        }

                        if (tmp_tuple_element_23 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 98;
                            type_description_2 = "o";
                            goto tuple_build_exception_17;
                        }
                        Py_INCREF(tmp_tuple_element_23);
                    } else {
                        goto tuple_build_exception_17;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_element_value_57, 1, tmp_tuple_element_23);
                tmp_tuple_element_23 = mod_consts[66];
                PyTuple_SET_ITEM0(tmp_args_element_value_57, 2, tmp_tuple_element_23);
                goto tuple_build_noexception_16;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_17:;
                Py_DECREF(tmp_called_value_29);
                Py_DECREF(tmp_args_element_value_54);
                Py_DECREF(tmp_args_element_value_55);
                Py_DECREF(tmp_args_element_value_57);
                goto tuple_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_16:;
                tmp_tuple_element_24 = MAKE_LIST1(mod_consts[46]);
                tmp_args_element_value_58 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM(tmp_args_element_value_58, 0, tmp_tuple_element_24);
                tmp_tuple_element_24 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[21]);

                if (tmp_tuple_element_24 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_24 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[21]);

                        if (unlikely(tmp_tuple_element_24 == NULL)) {
                            tmp_tuple_element_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
                        }

                        if (tmp_tuple_element_24 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 99;
                            type_description_2 = "o";
                            goto tuple_build_exception_18;
                        }
                        Py_INCREF(tmp_tuple_element_24);
                    } else {
                        goto tuple_build_exception_18;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_element_value_58, 1, tmp_tuple_element_24);
                tmp_tuple_element_24 = mod_consts[58];
                PyTuple_SET_ITEM0(tmp_args_element_value_58, 2, tmp_tuple_element_24);
                goto tuple_build_noexception_17;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_18:;
                Py_DECREF(tmp_called_value_29);
                Py_DECREF(tmp_args_element_value_54);
                Py_DECREF(tmp_args_element_value_55);
                Py_DECREF(tmp_args_element_value_57);
                Py_DECREF(tmp_args_element_value_58);
                goto tuple_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_17:;
                tmp_tuple_element_25 = MAKE_LIST1(mod_consts[46]);
                tmp_args_element_value_59 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_30;
                    PyObject *tmp_args_element_value_60;
                    PyTuple_SET_ITEM(tmp_args_element_value_59, 0, tmp_tuple_element_25);
                    tmp_called_value_30 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[20]);

                    if (tmp_called_value_30 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[20]);

                            if (unlikely(tmp_called_value_30 == NULL)) {
                                tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                            }

                            if (tmp_called_value_30 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 100;
                                type_description_2 = "o";
                                goto tuple_build_exception_19;
                            }
                            Py_INCREF(tmp_called_value_30);
                        } else {
                            goto tuple_build_exception_19;
                        }
                    }

                    tmp_args_element_value_60 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[28]);

                    if (tmp_args_element_value_60 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_60 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[28]);

                            if (unlikely(tmp_args_element_value_60 == NULL)) {
                                tmp_args_element_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
                            }

                            if (tmp_args_element_value_60 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_30);

                                exception_lineno = 100;
                                type_description_2 = "o";
                                goto tuple_build_exception_19;
                            }
                            Py_INCREF(tmp_args_element_value_60);
                        } else {
                            goto tuple_build_exception_19;
                        }
                    }

                    frame_f563dd53b28db94cd82691675001e357_3->m_frame.f_lineno = 100;
                    tmp_tuple_element_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_30, tmp_args_element_value_60);
                    Py_DECREF(tmp_called_value_30);
                    Py_DECREF(tmp_args_element_value_60);
                    if (tmp_tuple_element_25 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 100;
                        type_description_2 = "o";
                        goto tuple_build_exception_19;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_59, 1, tmp_tuple_element_25);
                    tmp_tuple_element_25 = mod_consts[59];
                    PyTuple_SET_ITEM0(tmp_args_element_value_59, 2, tmp_tuple_element_25);
                }
                goto tuple_build_noexception_18;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_19:;
                Py_DECREF(tmp_called_value_29);
                Py_DECREF(tmp_args_element_value_54);
                Py_DECREF(tmp_args_element_value_55);
                Py_DECREF(tmp_args_element_value_57);
                Py_DECREF(tmp_args_element_value_58);
                Py_DECREF(tmp_args_element_value_59);
                goto tuple_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_18:;
                frame_f563dd53b28db94cd82691675001e357_3->m_frame.f_lineno = 94;
                {
                    PyObject *call_args[] = {tmp_args_element_value_54, tmp_args_element_value_55, tmp_args_element_value_56, tmp_args_element_value_57, tmp_args_element_value_58, tmp_args_element_value_59};
                    tmp_tuple_element_10 = CALL_FUNCTION_WITH_ARGS6(tstate, tmp_called_value_29, call_args);
                }

                Py_DECREF(tmp_called_value_29);
                Py_DECREF(tmp_args_element_value_54);
                Py_DECREF(tmp_args_element_value_55);
                Py_DECREF(tmp_args_element_value_57);
                Py_DECREF(tmp_args_element_value_58);
                Py_DECREF(tmp_args_element_value_59);
                if (tmp_tuple_element_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 94;
                    type_description_2 = "o";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 8, tmp_tuple_element_10);
                tmp_called_value_31 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[27]);

                if (tmp_called_value_31 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[27]);

                        if (unlikely(tmp_called_value_31 == NULL)) {
                            tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
                        }

                        if (tmp_called_value_31 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 105;
                            type_description_2 = "o";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_called_value_31);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                tmp_args_element_value_61 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_62 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[18]);

                if (tmp_args_element_value_62 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_62 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[18]);

                        if (unlikely(tmp_args_element_value_62 == NULL)) {
                            tmp_args_element_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                        }

                        if (tmp_args_element_value_62 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_31);
                            Py_DECREF(tmp_args_element_value_61);

                            exception_lineno = 107;
                            type_description_2 = "o";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_args_element_value_62);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                tmp_args_element_value_63 = mod_consts[68];
                tmp_tuple_element_26 = MAKE_LIST1(mod_consts[46]);
                tmp_args_element_value_64 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM(tmp_args_element_value_64, 0, tmp_tuple_element_26);
                tmp_tuple_element_26 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[24]);

                if (tmp_tuple_element_26 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_26 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[24]);

                        if (unlikely(tmp_tuple_element_26 == NULL)) {
                            tmp_tuple_element_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                        }

                        if (tmp_tuple_element_26 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 109;
                            type_description_2 = "o";
                            goto tuple_build_exception_20;
                        }
                        Py_INCREF(tmp_tuple_element_26);
                    } else {
                        goto tuple_build_exception_20;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_element_value_64, 1, tmp_tuple_element_26);
                tmp_tuple_element_26 = mod_consts[66];
                PyTuple_SET_ITEM0(tmp_args_element_value_64, 2, tmp_tuple_element_26);
                goto tuple_build_noexception_19;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_20:;
                Py_DECREF(tmp_called_value_31);
                Py_DECREF(tmp_args_element_value_61);
                Py_DECREF(tmp_args_element_value_62);
                Py_DECREF(tmp_args_element_value_64);
                goto tuple_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_19:;
                tmp_tuple_element_27 = MAKE_LIST1(mod_consts[55]);
                tmp_args_element_value_65 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_32;
                    PyObject *tmp_args_element_value_66;
                    PyTuple_SET_ITEM(tmp_args_element_value_65, 0, tmp_tuple_element_27);
                    tmp_called_value_32 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[20]);

                    if (tmp_called_value_32 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[20]);

                            if (unlikely(tmp_called_value_32 == NULL)) {
                                tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                            }

                            if (tmp_called_value_32 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 110;
                                type_description_2 = "o";
                                goto tuple_build_exception_21;
                            }
                            Py_INCREF(tmp_called_value_32);
                        } else {
                            goto tuple_build_exception_21;
                        }
                    }

                    tmp_args_element_value_66 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[21]);

                    if (tmp_args_element_value_66 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_66 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[21]);

                            if (unlikely(tmp_args_element_value_66 == NULL)) {
                                tmp_args_element_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
                            }

                            if (tmp_args_element_value_66 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_32);

                                exception_lineno = 110;
                                type_description_2 = "o";
                                goto tuple_build_exception_21;
                            }
                            Py_INCREF(tmp_args_element_value_66);
                        } else {
                            goto tuple_build_exception_21;
                        }
                    }

                    frame_f563dd53b28db94cd82691675001e357_3->m_frame.f_lineno = 110;
                    tmp_tuple_element_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_32, tmp_args_element_value_66);
                    Py_DECREF(tmp_called_value_32);
                    Py_DECREF(tmp_args_element_value_66);
                    if (tmp_tuple_element_27 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 110;
                        type_description_2 = "o";
                        goto tuple_build_exception_21;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_65, 1, tmp_tuple_element_27);
                    tmp_tuple_element_27 = mod_consts[63];
                    PyTuple_SET_ITEM0(tmp_args_element_value_65, 2, tmp_tuple_element_27);
                }
                goto tuple_build_noexception_20;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_21:;
                Py_DECREF(tmp_called_value_31);
                Py_DECREF(tmp_args_element_value_61);
                Py_DECREF(tmp_args_element_value_62);
                Py_DECREF(tmp_args_element_value_64);
                Py_DECREF(tmp_args_element_value_65);
                goto tuple_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_20:;
                frame_f563dd53b28db94cd82691675001e357_3->m_frame.f_lineno = 105;
                {
                    PyObject *call_args[] = {tmp_args_element_value_61, tmp_args_element_value_62, tmp_args_element_value_63, tmp_args_element_value_64, tmp_args_element_value_65};
                    tmp_tuple_element_10 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_31, call_args);
                }

                Py_DECREF(tmp_called_value_31);
                Py_DECREF(tmp_args_element_value_61);
                Py_DECREF(tmp_args_element_value_62);
                Py_DECREF(tmp_args_element_value_64);
                Py_DECREF(tmp_args_element_value_65);
                if (tmp_tuple_element_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 105;
                    type_description_2 = "o";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 9, tmp_tuple_element_10);
                tmp_called_value_33 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[27]);

                if (tmp_called_value_33 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[27]);

                        if (unlikely(tmp_called_value_33 == NULL)) {
                            tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
                        }

                        if (tmp_called_value_33 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 115;
                            type_description_2 = "o";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_called_value_33);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                tmp_args_element_value_67 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_68 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[18]);

                if (tmp_args_element_value_68 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_68 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[18]);

                        if (unlikely(tmp_args_element_value_68 == NULL)) {
                            tmp_args_element_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                        }

                        if (tmp_args_element_value_68 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_33);
                            Py_DECREF(tmp_args_element_value_67);

                            exception_lineno = 117;
                            type_description_2 = "o";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_args_element_value_68);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                tmp_args_element_value_69 = mod_consts[69];
                tmp_tuple_element_28 = MAKE_LIST1(mod_consts[46]);
                tmp_args_element_value_70 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM(tmp_args_element_value_70, 0, tmp_tuple_element_28);
                tmp_tuple_element_28 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[23]);

                if (tmp_tuple_element_28 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_28 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[23]);

                        if (unlikely(tmp_tuple_element_28 == NULL)) {
                            tmp_tuple_element_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
                        }

                        if (tmp_tuple_element_28 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 119;
                            type_description_2 = "o";
                            goto tuple_build_exception_22;
                        }
                        Py_INCREF(tmp_tuple_element_28);
                    } else {
                        goto tuple_build_exception_22;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_element_value_70, 1, tmp_tuple_element_28);
                tmp_tuple_element_28 = mod_consts[66];
                PyTuple_SET_ITEM0(tmp_args_element_value_70, 2, tmp_tuple_element_28);
                goto tuple_build_noexception_21;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_22:;
                Py_DECREF(tmp_called_value_33);
                Py_DECREF(tmp_args_element_value_67);
                Py_DECREF(tmp_args_element_value_68);
                Py_DECREF(tmp_args_element_value_70);
                goto tuple_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_21:;
                tmp_tuple_element_29 = MAKE_LIST1(mod_consts[55]);
                tmp_args_element_value_71 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_34;
                    PyObject *tmp_args_element_value_72;
                    PyTuple_SET_ITEM(tmp_args_element_value_71, 0, tmp_tuple_element_29);
                    tmp_called_value_34 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[20]);

                    if (tmp_called_value_34 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[20]);

                            if (unlikely(tmp_called_value_34 == NULL)) {
                                tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                            }

                            if (tmp_called_value_34 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 120;
                                type_description_2 = "o";
                                goto tuple_build_exception_23;
                            }
                            Py_INCREF(tmp_called_value_34);
                        } else {
                            goto tuple_build_exception_23;
                        }
                    }

                    tmp_args_element_value_72 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[21]);

                    if (tmp_args_element_value_72 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_72 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[21]);

                            if (unlikely(tmp_args_element_value_72 == NULL)) {
                                tmp_args_element_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
                            }

                            if (tmp_args_element_value_72 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_34);

                                exception_lineno = 120;
                                type_description_2 = "o";
                                goto tuple_build_exception_23;
                            }
                            Py_INCREF(tmp_args_element_value_72);
                        } else {
                            goto tuple_build_exception_23;
                        }
                    }

                    frame_f563dd53b28db94cd82691675001e357_3->m_frame.f_lineno = 120;
                    tmp_tuple_element_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_34, tmp_args_element_value_72);
                    Py_DECREF(tmp_called_value_34);
                    Py_DECREF(tmp_args_element_value_72);
                    if (tmp_tuple_element_29 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 120;
                        type_description_2 = "o";
                        goto tuple_build_exception_23;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_71, 1, tmp_tuple_element_29);
                    tmp_tuple_element_29 = mod_consts[63];
                    PyTuple_SET_ITEM0(tmp_args_element_value_71, 2, tmp_tuple_element_29);
                }
                goto tuple_build_noexception_22;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_23:;
                Py_DECREF(tmp_called_value_33);
                Py_DECREF(tmp_args_element_value_67);
                Py_DECREF(tmp_args_element_value_68);
                Py_DECREF(tmp_args_element_value_70);
                Py_DECREF(tmp_args_element_value_71);
                goto tuple_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_22:;
                frame_f563dd53b28db94cd82691675001e357_3->m_frame.f_lineno = 115;
                {
                    PyObject *call_args[] = {tmp_args_element_value_67, tmp_args_element_value_68, tmp_args_element_value_69, tmp_args_element_value_70, tmp_args_element_value_71};
                    tmp_tuple_element_10 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_33, call_args);
                }

                Py_DECREF(tmp_called_value_33);
                Py_DECREF(tmp_args_element_value_67);
                Py_DECREF(tmp_args_element_value_68);
                Py_DECREF(tmp_args_element_value_70);
                Py_DECREF(tmp_args_element_value_71);
                if (tmp_tuple_element_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 115;
                    type_description_2 = "o";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 10, tmp_tuple_element_10);
                tmp_called_value_35 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[27]);

                if (tmp_called_value_35 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[27]);

                        if (unlikely(tmp_called_value_35 == NULL)) {
                            tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
                        }

                        if (tmp_called_value_35 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 123;
                            type_description_2 = "o";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_called_value_35);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                tmp_args_element_value_73 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_74 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[18]);

                if (tmp_args_element_value_74 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_74 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[18]);

                        if (unlikely(tmp_args_element_value_74 == NULL)) {
                            tmp_args_element_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                        }

                        if (tmp_args_element_value_74 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_35);
                            Py_DECREF(tmp_args_element_value_73);

                            exception_lineno = 125;
                            type_description_2 = "o";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_args_element_value_74);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                tmp_args_element_value_75 = mod_consts[70];
                tmp_tuple_element_30 = MAKE_LIST1(mod_consts[46]);
                tmp_args_element_value_76 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM(tmp_args_element_value_76, 0, tmp_tuple_element_30);
                tmp_tuple_element_30 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[22]);

                if (tmp_tuple_element_30 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_30 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[22]);

                        if (unlikely(tmp_tuple_element_30 == NULL)) {
                            tmp_tuple_element_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
                        }

                        if (tmp_tuple_element_30 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 127;
                            type_description_2 = "o";
                            goto tuple_build_exception_24;
                        }
                        Py_INCREF(tmp_tuple_element_30);
                    } else {
                        goto tuple_build_exception_24;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_element_value_76, 1, tmp_tuple_element_30);
                tmp_tuple_element_30 = mod_consts[71];
                PyTuple_SET_ITEM0(tmp_args_element_value_76, 2, tmp_tuple_element_30);
                goto tuple_build_noexception_23;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_24:;
                Py_DECREF(tmp_called_value_35);
                Py_DECREF(tmp_args_element_value_73);
                Py_DECREF(tmp_args_element_value_74);
                Py_DECREF(tmp_args_element_value_76);
                goto tuple_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_23:;
                tmp_tuple_element_31 = MAKE_LIST1(mod_consts[46]);
                tmp_args_element_value_77 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_36;
                    PyObject *tmp_args_element_value_78;
                    PyTuple_SET_ITEM(tmp_args_element_value_77, 0, tmp_tuple_element_31);
                    tmp_called_value_36 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[20]);

                    if (tmp_called_value_36 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[20]);

                            if (unlikely(tmp_called_value_36 == NULL)) {
                                tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                            }

                            if (tmp_called_value_36 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 128;
                                type_description_2 = "o";
                                goto tuple_build_exception_25;
                            }
                            Py_INCREF(tmp_called_value_36);
                        } else {
                            goto tuple_build_exception_25;
                        }
                    }

                    tmp_args_element_value_78 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[28]);

                    if (tmp_args_element_value_78 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_78 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[28]);

                            if (unlikely(tmp_args_element_value_78 == NULL)) {
                                tmp_args_element_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
                            }

                            if (tmp_args_element_value_78 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_36);

                                exception_lineno = 128;
                                type_description_2 = "o";
                                goto tuple_build_exception_25;
                            }
                            Py_INCREF(tmp_args_element_value_78);
                        } else {
                            goto tuple_build_exception_25;
                        }
                    }

                    frame_f563dd53b28db94cd82691675001e357_3->m_frame.f_lineno = 128;
                    tmp_tuple_element_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_36, tmp_args_element_value_78);
                    Py_DECREF(tmp_called_value_36);
                    Py_DECREF(tmp_args_element_value_78);
                    if (tmp_tuple_element_31 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 128;
                        type_description_2 = "o";
                        goto tuple_build_exception_25;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_77, 1, tmp_tuple_element_31);
                    tmp_tuple_element_31 = mod_consts[59];
                    PyTuple_SET_ITEM0(tmp_args_element_value_77, 2, tmp_tuple_element_31);
                }
                goto tuple_build_noexception_24;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_25:;
                Py_DECREF(tmp_called_value_35);
                Py_DECREF(tmp_args_element_value_73);
                Py_DECREF(tmp_args_element_value_74);
                Py_DECREF(tmp_args_element_value_76);
                Py_DECREF(tmp_args_element_value_77);
                goto tuple_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_24:;
                frame_f563dd53b28db94cd82691675001e357_3->m_frame.f_lineno = 123;
                {
                    PyObject *call_args[] = {tmp_args_element_value_73, tmp_args_element_value_74, tmp_args_element_value_75, tmp_args_element_value_76, tmp_args_element_value_77};
                    tmp_tuple_element_10 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_35, call_args);
                }

                Py_DECREF(tmp_called_value_35);
                Py_DECREF(tmp_args_element_value_73);
                Py_DECREF(tmp_args_element_value_74);
                Py_DECREF(tmp_args_element_value_76);
                Py_DECREF(tmp_args_element_value_77);
                if (tmp_tuple_element_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 123;
                    type_description_2 = "o";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 11, tmp_tuple_element_10);
                tmp_called_value_37 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[27]);

                if (tmp_called_value_37 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[27]);

                        if (unlikely(tmp_called_value_37 == NULL)) {
                            tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
                        }

                        if (tmp_called_value_37 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 131;
                            type_description_2 = "o";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_called_value_37);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                tmp_args_element_value_79 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_80 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[18]);

                if (tmp_args_element_value_80 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_80 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[18]);

                        if (unlikely(tmp_args_element_value_80 == NULL)) {
                            tmp_args_element_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                        }

                        if (tmp_args_element_value_80 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_37);
                            Py_DECREF(tmp_args_element_value_79);

                            exception_lineno = 131;
                            type_description_2 = "o";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_args_element_value_80);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                tmp_args_element_value_81 = mod_consts[72];
                tmp_tuple_element_32 = MAKE_LIST1(mod_consts[55]);
                tmp_args_element_value_82 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_38;
                    PyObject *tmp_args_element_value_83;
                    PyTuple_SET_ITEM(tmp_args_element_value_82, 0, tmp_tuple_element_32);
                    tmp_called_value_38 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[20]);

                    if (tmp_called_value_38 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[20]);

                            if (unlikely(tmp_called_value_38 == NULL)) {
                                tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                            }

                            if (tmp_called_value_38 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 131;
                                type_description_2 = "o";
                                goto tuple_build_exception_26;
                            }
                            Py_INCREF(tmp_called_value_38);
                        } else {
                            goto tuple_build_exception_26;
                        }
                    }

                    tmp_args_element_value_83 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[22]);

                    if (tmp_args_element_value_83 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_83 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[22]);

                            if (unlikely(tmp_args_element_value_83 == NULL)) {
                                tmp_args_element_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
                            }

                            if (tmp_args_element_value_83 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_38);

                                exception_lineno = 131;
                                type_description_2 = "o";
                                goto tuple_build_exception_26;
                            }
                            Py_INCREF(tmp_args_element_value_83);
                        } else {
                            goto tuple_build_exception_26;
                        }
                    }

                    frame_f563dd53b28db94cd82691675001e357_3->m_frame.f_lineno = 131;
                    tmp_tuple_element_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_38, tmp_args_element_value_83);
                    Py_DECREF(tmp_called_value_38);
                    Py_DECREF(tmp_args_element_value_83);
                    if (tmp_tuple_element_32 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 131;
                        type_description_2 = "o";
                        goto tuple_build_exception_26;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_82, 1, tmp_tuple_element_32);
                    tmp_tuple_element_32 = mod_consts[73];
                    PyTuple_SET_ITEM0(tmp_args_element_value_82, 2, tmp_tuple_element_32);
                }
                goto tuple_build_noexception_25;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_26:;
                Py_DECREF(tmp_called_value_37);
                Py_DECREF(tmp_args_element_value_79);
                Py_DECREF(tmp_args_element_value_80);
                Py_DECREF(tmp_args_element_value_82);
                goto tuple_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_25:;
                frame_f563dd53b28db94cd82691675001e357_3->m_frame.f_lineno = 131;
                {
                    PyObject *call_args[] = {tmp_args_element_value_79, tmp_args_element_value_80, tmp_args_element_value_81, tmp_args_element_value_82};
                    tmp_tuple_element_10 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_37, call_args);
                }

                Py_DECREF(tmp_called_value_37);
                Py_DECREF(tmp_args_element_value_79);
                Py_DECREF(tmp_args_element_value_80);
                Py_DECREF(tmp_args_element_value_82);
                if (tmp_tuple_element_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 131;
                    type_description_2 = "o";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 12, tmp_tuple_element_10);
                tmp_called_value_39 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[27]);

                if (tmp_called_value_39 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[27]);

                        if (unlikely(tmp_called_value_39 == NULL)) {
                            tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
                        }

                        if (tmp_called_value_39 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 135;
                            type_description_2 = "o";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_called_value_39);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                tmp_args_element_value_84 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_85 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[18]);

                if (tmp_args_element_value_85 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_85 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[18]);

                        if (unlikely(tmp_args_element_value_85 == NULL)) {
                            tmp_args_element_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                        }

                        if (tmp_args_element_value_85 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_39);
                            Py_DECREF(tmp_args_element_value_84);

                            exception_lineno = 137;
                            type_description_2 = "o";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_args_element_value_85);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                tmp_args_element_value_86 = mod_consts[74];
                tmp_tuple_element_33 = MAKE_LIST1(mod_consts[55]);
                tmp_args_element_value_87 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_40;
                    PyObject *tmp_args_element_value_88;
                    PyTuple_SET_ITEM(tmp_args_element_value_87, 0, tmp_tuple_element_33);
                    tmp_called_value_40 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[20]);

                    if (tmp_called_value_40 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[20]);

                            if (unlikely(tmp_called_value_40 == NULL)) {
                                tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                            }

                            if (tmp_called_value_40 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 139;
                                type_description_2 = "o";
                                goto tuple_build_exception_27;
                            }
                            Py_INCREF(tmp_called_value_40);
                        } else {
                            goto tuple_build_exception_27;
                        }
                    }

                    tmp_args_element_value_88 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[23]);

                    if (tmp_args_element_value_88 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_88 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[23]);

                            if (unlikely(tmp_args_element_value_88 == NULL)) {
                                tmp_args_element_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
                            }

                            if (tmp_args_element_value_88 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_40);

                                exception_lineno = 139;
                                type_description_2 = "o";
                                goto tuple_build_exception_27;
                            }
                            Py_INCREF(tmp_args_element_value_88);
                        } else {
                            goto tuple_build_exception_27;
                        }
                    }

                    frame_f563dd53b28db94cd82691675001e357_3->m_frame.f_lineno = 139;
                    tmp_tuple_element_33 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_40, tmp_args_element_value_88);
                    Py_DECREF(tmp_called_value_40);
                    Py_DECREF(tmp_args_element_value_88);
                    if (tmp_tuple_element_33 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 139;
                        type_description_2 = "o";
                        goto tuple_build_exception_27;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_87, 1, tmp_tuple_element_33);
                    tmp_tuple_element_33 = mod_consts[75];
                    PyTuple_SET_ITEM0(tmp_args_element_value_87, 2, tmp_tuple_element_33);
                }
                goto tuple_build_noexception_26;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_27:;
                Py_DECREF(tmp_called_value_39);
                Py_DECREF(tmp_args_element_value_84);
                Py_DECREF(tmp_args_element_value_85);
                Py_DECREF(tmp_args_element_value_87);
                goto tuple_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_26:;
                tmp_tuple_element_34 = MAKE_LIST1(mod_consts[55]);
                tmp_args_element_value_89 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_41;
                    PyObject *tmp_args_element_value_90;
                    PyTuple_SET_ITEM(tmp_args_element_value_89, 0, tmp_tuple_element_34);
                    tmp_called_value_41 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[20]);

                    if (tmp_called_value_41 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[20]);

                            if (unlikely(tmp_called_value_41 == NULL)) {
                                tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                            }

                            if (tmp_called_value_41 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 140;
                                type_description_2 = "o";
                                goto tuple_build_exception_28;
                            }
                            Py_INCREF(tmp_called_value_41);
                        } else {
                            goto tuple_build_exception_28;
                        }
                    }

                    tmp_args_element_value_90 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[23]);

                    if (tmp_args_element_value_90 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_90 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[23]);

                            if (unlikely(tmp_args_element_value_90 == NULL)) {
                                tmp_args_element_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
                            }

                            if (tmp_args_element_value_90 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_41);

                                exception_lineno = 140;
                                type_description_2 = "o";
                                goto tuple_build_exception_28;
                            }
                            Py_INCREF(tmp_args_element_value_90);
                        } else {
                            goto tuple_build_exception_28;
                        }
                    }

                    frame_f563dd53b28db94cd82691675001e357_3->m_frame.f_lineno = 140;
                    tmp_tuple_element_34 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_41, tmp_args_element_value_90);
                    Py_DECREF(tmp_called_value_41);
                    Py_DECREF(tmp_args_element_value_90);
                    if (tmp_tuple_element_34 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 140;
                        type_description_2 = "o";
                        goto tuple_build_exception_28;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_89, 1, tmp_tuple_element_34);
                    tmp_tuple_element_34 = mod_consts[76];
                    PyTuple_SET_ITEM0(tmp_args_element_value_89, 2, tmp_tuple_element_34);
                }
                goto tuple_build_noexception_27;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_28:;
                Py_DECREF(tmp_called_value_39);
                Py_DECREF(tmp_args_element_value_84);
                Py_DECREF(tmp_args_element_value_85);
                Py_DECREF(tmp_args_element_value_87);
                Py_DECREF(tmp_args_element_value_89);
                goto tuple_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_27:;
                frame_f563dd53b28db94cd82691675001e357_3->m_frame.f_lineno = 135;
                {
                    PyObject *call_args[] = {tmp_args_element_value_84, tmp_args_element_value_85, tmp_args_element_value_86, tmp_args_element_value_87, tmp_args_element_value_89};
                    tmp_tuple_element_10 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_39, call_args);
                }

                Py_DECREF(tmp_called_value_39);
                Py_DECREF(tmp_args_element_value_84);
                Py_DECREF(tmp_args_element_value_85);
                Py_DECREF(tmp_args_element_value_87);
                Py_DECREF(tmp_args_element_value_89);
                if (tmp_tuple_element_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 135;
                    type_description_2 = "o";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 13, tmp_tuple_element_10);
                tmp_called_value_42 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[27]);

                if (tmp_called_value_42 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[27]);

                        if (unlikely(tmp_called_value_42 == NULL)) {
                            tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
                        }

                        if (tmp_called_value_42 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 143;
                            type_description_2 = "o";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_called_value_42);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                tmp_args_element_value_91 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_92 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[18]);

                if (tmp_args_element_value_92 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_92 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[18]);

                        if (unlikely(tmp_args_element_value_92 == NULL)) {
                            tmp_args_element_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                        }

                        if (tmp_args_element_value_92 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_42);
                            Py_DECREF(tmp_args_element_value_91);

                            exception_lineno = 144;
                            type_description_2 = "o";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_args_element_value_92);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                tmp_args_element_value_93 = mod_consts[77];
                tmp_tuple_element_35 = MAKE_LIST1(mod_consts[46]);
                tmp_args_element_value_94 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_43;
                    PyObject *tmp_args_element_value_95;
                    PyTuple_SET_ITEM(tmp_args_element_value_94, 0, tmp_tuple_element_35);
                    tmp_called_value_43 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[20]);

                    if (tmp_called_value_43 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[20]);

                            if (unlikely(tmp_called_value_43 == NULL)) {
                                tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                            }

                            if (tmp_called_value_43 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 144;
                                type_description_2 = "o";
                                goto tuple_build_exception_29;
                            }
                            Py_INCREF(tmp_called_value_43);
                        } else {
                            goto tuple_build_exception_29;
                        }
                    }

                    tmp_args_element_value_95 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[28]);

                    if (tmp_args_element_value_95 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_95 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[28]);

                            if (unlikely(tmp_args_element_value_95 == NULL)) {
                                tmp_args_element_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
                            }

                            if (tmp_args_element_value_95 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_43);

                                exception_lineno = 144;
                                type_description_2 = "o";
                                goto tuple_build_exception_29;
                            }
                            Py_INCREF(tmp_args_element_value_95);
                        } else {
                            goto tuple_build_exception_29;
                        }
                    }

                    frame_f563dd53b28db94cd82691675001e357_3->m_frame.f_lineno = 144;
                    tmp_tuple_element_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_43, tmp_args_element_value_95);
                    Py_DECREF(tmp_called_value_43);
                    Py_DECREF(tmp_args_element_value_95);
                    if (tmp_tuple_element_35 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 144;
                        type_description_2 = "o";
                        goto tuple_build_exception_29;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_94, 1, tmp_tuple_element_35);
                    tmp_tuple_element_35 = mod_consts[59];
                    PyTuple_SET_ITEM0(tmp_args_element_value_94, 2, tmp_tuple_element_35);
                }
                goto tuple_build_noexception_28;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_29:;
                Py_DECREF(tmp_called_value_42);
                Py_DECREF(tmp_args_element_value_91);
                Py_DECREF(tmp_args_element_value_92);
                Py_DECREF(tmp_args_element_value_94);
                goto tuple_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_28:;
                frame_f563dd53b28db94cd82691675001e357_3->m_frame.f_lineno = 143;
                {
                    PyObject *call_args[] = {tmp_args_element_value_91, tmp_args_element_value_92, tmp_args_element_value_93, tmp_args_element_value_94};
                    tmp_tuple_element_10 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_42, call_args);
                }

                Py_DECREF(tmp_called_value_42);
                Py_DECREF(tmp_args_element_value_91);
                Py_DECREF(tmp_args_element_value_92);
                Py_DECREF(tmp_args_element_value_94);
                if (tmp_tuple_element_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 143;
                    type_description_2 = "o";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 14, tmp_tuple_element_10);
                tmp_called_value_44 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[27]);

                if (tmp_called_value_44 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_44 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[27]);

                        if (unlikely(tmp_called_value_44 == NULL)) {
                            tmp_called_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
                        }

                        if (tmp_called_value_44 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 147;
                            type_description_2 = "o";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_called_value_44);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                tmp_args_element_value_96 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_97 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[18]);

                if (tmp_args_element_value_97 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_97 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[18]);

                        if (unlikely(tmp_args_element_value_97 == NULL)) {
                            tmp_args_element_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                        }

                        if (tmp_args_element_value_97 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_44);
                            Py_DECREF(tmp_args_element_value_96);

                            exception_lineno = 148;
                            type_description_2 = "o";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_args_element_value_97);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                tmp_args_element_value_98 = mod_consts[78];
                tmp_tuple_element_36 = MAKE_LIST1(mod_consts[46]);
                tmp_args_element_value_99 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_45;
                    PyObject *tmp_args_element_value_100;
                    PyTuple_SET_ITEM(tmp_args_element_value_99, 0, tmp_tuple_element_36);
                    tmp_called_value_45 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[20]);

                    if (tmp_called_value_45 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[20]);

                            if (unlikely(tmp_called_value_45 == NULL)) {
                                tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                            }

                            if (tmp_called_value_45 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 148;
                                type_description_2 = "o";
                                goto tuple_build_exception_30;
                            }
                            Py_INCREF(tmp_called_value_45);
                        } else {
                            goto tuple_build_exception_30;
                        }
                    }

                    tmp_args_element_value_100 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[28]);

                    if (tmp_args_element_value_100 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_100 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[28]);

                            if (unlikely(tmp_args_element_value_100 == NULL)) {
                                tmp_args_element_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
                            }

                            if (tmp_args_element_value_100 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_45);

                                exception_lineno = 148;
                                type_description_2 = "o";
                                goto tuple_build_exception_30;
                            }
                            Py_INCREF(tmp_args_element_value_100);
                        } else {
                            goto tuple_build_exception_30;
                        }
                    }

                    frame_f563dd53b28db94cd82691675001e357_3->m_frame.f_lineno = 148;
                    tmp_tuple_element_36 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_45, tmp_args_element_value_100);
                    Py_DECREF(tmp_called_value_45);
                    Py_DECREF(tmp_args_element_value_100);
                    if (tmp_tuple_element_36 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 148;
                        type_description_2 = "o";
                        goto tuple_build_exception_30;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_99, 1, tmp_tuple_element_36);
                    tmp_tuple_element_36 = mod_consts[59];
                    PyTuple_SET_ITEM0(tmp_args_element_value_99, 2, tmp_tuple_element_36);
                }
                goto tuple_build_noexception_29;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_30:;
                Py_DECREF(tmp_called_value_44);
                Py_DECREF(tmp_args_element_value_96);
                Py_DECREF(tmp_args_element_value_97);
                Py_DECREF(tmp_args_element_value_99);
                goto tuple_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_29:;
                frame_f563dd53b28db94cd82691675001e357_3->m_frame.f_lineno = 147;
                {
                    PyObject *call_args[] = {tmp_args_element_value_96, tmp_args_element_value_97, tmp_args_element_value_98, tmp_args_element_value_99};
                    tmp_tuple_element_10 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_44, call_args);
                }

                Py_DECREF(tmp_called_value_44);
                Py_DECREF(tmp_args_element_value_96);
                Py_DECREF(tmp_args_element_value_97);
                Py_DECREF(tmp_args_element_value_99);
                if (tmp_tuple_element_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 147;
                    type_description_2 = "o";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 15, tmp_tuple_element_10);
                tmp_called_value_46 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[27]);

                if (tmp_called_value_46 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[27]);

                        if (unlikely(tmp_called_value_46 == NULL)) {
                            tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
                        }

                        if (tmp_called_value_46 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 151;
                            type_description_2 = "o";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_called_value_46);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                tmp_args_element_value_101 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_102 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[18]);

                if (tmp_args_element_value_102 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_102 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[18]);

                        if (unlikely(tmp_args_element_value_102 == NULL)) {
                            tmp_args_element_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                        }

                        if (tmp_args_element_value_102 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_46);
                            Py_DECREF(tmp_args_element_value_101);

                            exception_lineno = 153;
                            type_description_2 = "o";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_args_element_value_102);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                tmp_args_element_value_103 = mod_consts[79];
                tmp_tuple_element_37 = MAKE_LIST1(mod_consts[55]);
                tmp_args_element_value_104 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_47;
                    PyObject *tmp_args_element_value_105;
                    PyTuple_SET_ITEM(tmp_args_element_value_104, 0, tmp_tuple_element_37);
                    tmp_called_value_47 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[20]);

                    if (tmp_called_value_47 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_47 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[20]);

                            if (unlikely(tmp_called_value_47 == NULL)) {
                                tmp_called_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                            }

                            if (tmp_called_value_47 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 155;
                                type_description_2 = "o";
                                goto tuple_build_exception_31;
                            }
                            Py_INCREF(tmp_called_value_47);
                        } else {
                            goto tuple_build_exception_31;
                        }
                    }

                    tmp_args_element_value_105 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[23]);

                    if (tmp_args_element_value_105 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_105 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[23]);

                            if (unlikely(tmp_args_element_value_105 == NULL)) {
                                tmp_args_element_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
                            }

                            if (tmp_args_element_value_105 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_47);

                                exception_lineno = 155;
                                type_description_2 = "o";
                                goto tuple_build_exception_31;
                            }
                            Py_INCREF(tmp_args_element_value_105);
                        } else {
                            goto tuple_build_exception_31;
                        }
                    }

                    frame_f563dd53b28db94cd82691675001e357_3->m_frame.f_lineno = 155;
                    tmp_tuple_element_37 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_47, tmp_args_element_value_105);
                    Py_DECREF(tmp_called_value_47);
                    Py_DECREF(tmp_args_element_value_105);
                    if (tmp_tuple_element_37 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 155;
                        type_description_2 = "o";
                        goto tuple_build_exception_31;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_104, 1, tmp_tuple_element_37);
                    tmp_tuple_element_37 = mod_consts[80];
                    PyTuple_SET_ITEM0(tmp_args_element_value_104, 2, tmp_tuple_element_37);
                }
                goto tuple_build_noexception_30;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_31:;
                Py_DECREF(tmp_called_value_46);
                Py_DECREF(tmp_args_element_value_101);
                Py_DECREF(tmp_args_element_value_102);
                Py_DECREF(tmp_args_element_value_104);
                goto tuple_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_30:;
                frame_f563dd53b28db94cd82691675001e357_3->m_frame.f_lineno = 151;
                {
                    PyObject *call_args[] = {tmp_args_element_value_101, tmp_args_element_value_102, tmp_args_element_value_103, tmp_args_element_value_104};
                    tmp_tuple_element_10 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_46, call_args);
                }

                Py_DECREF(tmp_called_value_46);
                Py_DECREF(tmp_args_element_value_101);
                Py_DECREF(tmp_args_element_value_102);
                Py_DECREF(tmp_args_element_value_104);
                if (tmp_tuple_element_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 151;
                    type_description_2 = "o";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 16, tmp_tuple_element_10);
                tmp_called_value_48 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[27]);

                if (tmp_called_value_48 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_48 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[27]);

                        if (unlikely(tmp_called_value_48 == NULL)) {
                            tmp_called_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
                        }

                        if (tmp_called_value_48 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 161;
                            type_description_2 = "o";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_called_value_48);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                tmp_args_element_value_106 = MAKE_LIST_EMPTY(0);
                tmp_args_element_value_107 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[18]);

                if (tmp_args_element_value_107 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_107 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[18]);

                        if (unlikely(tmp_args_element_value_107 == NULL)) {
                            tmp_args_element_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                        }

                        if (tmp_args_element_value_107 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_48);
                            Py_DECREF(tmp_args_element_value_106);

                            exception_lineno = 163;
                            type_description_2 = "o";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_args_element_value_107);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                tmp_args_element_value_108 = mod_consts[81];
                tmp_tuple_element_38 = MAKE_LIST1(mod_consts[55]);
                tmp_args_element_value_109 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_49;
                    PyObject *tmp_args_element_value_110;
                    PyTuple_SET_ITEM(tmp_args_element_value_109, 0, tmp_tuple_element_38);
                    tmp_called_value_49 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[20]);

                    if (tmp_called_value_49 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_49 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[20]);

                            if (unlikely(tmp_called_value_49 == NULL)) {
                                tmp_called_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                            }

                            if (tmp_called_value_49 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 165;
                                type_description_2 = "o";
                                goto tuple_build_exception_32;
                            }
                            Py_INCREF(tmp_called_value_49);
                        } else {
                            goto tuple_build_exception_32;
                        }
                    }

                    tmp_args_element_value_110 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[21]);

                    if (tmp_args_element_value_110 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_110 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[21]);

                            if (unlikely(tmp_args_element_value_110 == NULL)) {
                                tmp_args_element_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
                            }

                            if (tmp_args_element_value_110 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_49);

                                exception_lineno = 165;
                                type_description_2 = "o";
                                goto tuple_build_exception_32;
                            }
                            Py_INCREF(tmp_args_element_value_110);
                        } else {
                            goto tuple_build_exception_32;
                        }
                    }

                    frame_f563dd53b28db94cd82691675001e357_3->m_frame.f_lineno = 165;
                    tmp_tuple_element_38 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_49, tmp_args_element_value_110);
                    Py_DECREF(tmp_called_value_49);
                    Py_DECREF(tmp_args_element_value_110);
                    if (tmp_tuple_element_38 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 165;
                        type_description_2 = "o";
                        goto tuple_build_exception_32;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_109, 1, tmp_tuple_element_38);
                    tmp_tuple_element_38 = mod_consts[82];
                    PyTuple_SET_ITEM0(tmp_args_element_value_109, 2, tmp_tuple_element_38);
                }
                goto tuple_build_noexception_31;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_32:;
                Py_DECREF(tmp_called_value_48);
                Py_DECREF(tmp_args_element_value_106);
                Py_DECREF(tmp_args_element_value_107);
                Py_DECREF(tmp_args_element_value_109);
                goto tuple_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_31:;
                tmp_tuple_element_39 = MAKE_LIST1(mod_consts[55]);
                tmp_args_element_value_111 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_50;
                    PyObject *tmp_args_element_value_112;
                    PyTuple_SET_ITEM(tmp_args_element_value_111, 0, tmp_tuple_element_39);
                    tmp_called_value_50 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[20]);

                    if (tmp_called_value_50 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_50 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[20]);

                            if (unlikely(tmp_called_value_50 == NULL)) {
                                tmp_called_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                            }

                            if (tmp_called_value_50 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 166;
                                type_description_2 = "o";
                                goto tuple_build_exception_33;
                            }
                            Py_INCREF(tmp_called_value_50);
                        } else {
                            goto tuple_build_exception_33;
                        }
                    }

                    tmp_args_element_value_112 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[21]);

                    if (tmp_args_element_value_112 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_112 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[21]);

                            if (unlikely(tmp_args_element_value_112 == NULL)) {
                                tmp_args_element_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
                            }

                            if (tmp_args_element_value_112 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_50);

                                exception_lineno = 166;
                                type_description_2 = "o";
                                goto tuple_build_exception_33;
                            }
                            Py_INCREF(tmp_args_element_value_112);
                        } else {
                            goto tuple_build_exception_33;
                        }
                    }

                    frame_f563dd53b28db94cd82691675001e357_3->m_frame.f_lineno = 166;
                    tmp_tuple_element_39 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_50, tmp_args_element_value_112);
                    Py_DECREF(tmp_called_value_50);
                    Py_DECREF(tmp_args_element_value_112);
                    if (tmp_tuple_element_39 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 166;
                        type_description_2 = "o";
                        goto tuple_build_exception_33;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_111, 1, tmp_tuple_element_39);
                    tmp_tuple_element_39 = mod_consts[83];
                    PyTuple_SET_ITEM0(tmp_args_element_value_111, 2, tmp_tuple_element_39);
                }
                goto tuple_build_noexception_32;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_33:;
                Py_DECREF(tmp_called_value_48);
                Py_DECREF(tmp_args_element_value_106);
                Py_DECREF(tmp_args_element_value_107);
                Py_DECREF(tmp_args_element_value_109);
                Py_DECREF(tmp_args_element_value_111);
                goto tuple_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_32:;
                tmp_tuple_element_40 = MAKE_LIST1(mod_consts[55]);
                tmp_args_element_value_113 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_called_value_51;
                    PyObject *tmp_args_element_value_114;
                    PyTuple_SET_ITEM(tmp_args_element_value_113, 0, tmp_tuple_element_40);
                    tmp_called_value_51 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[20]);

                    if (tmp_called_value_51 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_called_value_51 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[20]);

                            if (unlikely(tmp_called_value_51 == NULL)) {
                                tmp_called_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                            }

                            if (tmp_called_value_51 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 167;
                                type_description_2 = "o";
                                goto tuple_build_exception_34;
                            }
                            Py_INCREF(tmp_called_value_51);
                        } else {
                            goto tuple_build_exception_34;
                        }
                    }

                    tmp_args_element_value_114 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[21]);

                    if (tmp_args_element_value_114 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_args_element_value_114 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[21]);

                            if (unlikely(tmp_args_element_value_114 == NULL)) {
                                tmp_args_element_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
                            }

                            if (tmp_args_element_value_114 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_called_value_51);

                                exception_lineno = 167;
                                type_description_2 = "o";
                                goto tuple_build_exception_34;
                            }
                            Py_INCREF(tmp_args_element_value_114);
                        } else {
                            goto tuple_build_exception_34;
                        }
                    }

                    frame_f563dd53b28db94cd82691675001e357_3->m_frame.f_lineno = 167;
                    tmp_tuple_element_40 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_51, tmp_args_element_value_114);
                    Py_DECREF(tmp_called_value_51);
                    Py_DECREF(tmp_args_element_value_114);
                    if (tmp_tuple_element_40 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 167;
                        type_description_2 = "o";
                        goto tuple_build_exception_34;
                    }
                    PyTuple_SET_ITEM(tmp_args_element_value_113, 1, tmp_tuple_element_40);
                    tmp_tuple_element_40 = mod_consts[84];
                    PyTuple_SET_ITEM0(tmp_args_element_value_113, 2, tmp_tuple_element_40);
                }
                goto tuple_build_noexception_33;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_34:;
                Py_DECREF(tmp_called_value_48);
                Py_DECREF(tmp_args_element_value_106);
                Py_DECREF(tmp_args_element_value_107);
                Py_DECREF(tmp_args_element_value_109);
                Py_DECREF(tmp_args_element_value_111);
                Py_DECREF(tmp_args_element_value_113);
                goto tuple_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_33:;
                frame_f563dd53b28db94cd82691675001e357_3->m_frame.f_lineno = 161;
                {
                    PyObject *call_args[] = {tmp_args_element_value_106, tmp_args_element_value_107, tmp_args_element_value_108, tmp_args_element_value_109, tmp_args_element_value_111, tmp_args_element_value_113};
                    tmp_tuple_element_10 = CALL_FUNCTION_WITH_ARGS6(tstate, tmp_called_value_48, call_args);
                }

                Py_DECREF(tmp_called_value_48);
                Py_DECREF(tmp_args_element_value_106);
                Py_DECREF(tmp_args_element_value_107);
                Py_DECREF(tmp_args_element_value_109);
                Py_DECREF(tmp_args_element_value_111);
                Py_DECREF(tmp_args_element_value_113);
                if (tmp_tuple_element_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 161;
                    type_description_2 = "o";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_dictset_value, 17, tmp_tuple_element_10);
            }
            goto tuple_build_noexception_34;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_34:;
            tmp_res = PyObject_SetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[48], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_f563dd53b28db94cd82691675001e357_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_f563dd53b28db94cd82691675001e357_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_f563dd53b28db94cd82691675001e357_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_f563dd53b28db94cd82691675001e357_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_f563dd53b28db94cd82691675001e357_3);

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


                exception_lineno = 23;

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
        tmp_res = PyObject_SetItem(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23, mod_consts[49], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_9;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_33;
            PyObject *tmp_called_value_52;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_41;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_52 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_41 = mod_consts[50];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_41);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_41 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_41);
            tmp_tuple_element_41 = locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_41);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_bb84ef9b403e7558e48f6d2eb32b070a->m_frame.f_lineno = 23;
            tmp_assign_source_33 = CALL_FUNCTION(tstate, tmp_called_value_52, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

                goto try_except_handler_9;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_33;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_32 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_32);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23);
        locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23 = NULL;
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

        Py_DECREF(locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23);
        locals_pycaw$api$endpointvolume$$$class__2_IAudioEndpointVolume_23 = NULL;
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
        exception_lineno = 23;
        goto try_except_handler_7;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_32);
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
        PyObject *tmp_assign_source_34;
        PyObject *tmp_tuple_element_42;
        tmp_tuple_element_42 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_tuple_element_42 == NULL)) {
            tmp_tuple_element_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
        }

        if (tmp_tuple_element_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto try_except_handler_10;
        }
        tmp_assign_source_34 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_34, 0, tmp_tuple_element_42);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_35 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
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


            exception_lineno = 172;

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


            exception_lineno = 172;

            goto try_except_handler_10;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto try_except_handler_10;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_37 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_37;
    }
    {
        bool tmp_condition_result_10;
        PyObject *tmp_expression_value_20;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_20 = tmp_class_creation_3__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_20, mod_consts[34]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

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
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_value_53;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_43;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_21 = tmp_class_creation_3__metaclass;
        tmp_called_value_53 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[34]);
        if (tmp_called_value_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto try_except_handler_10;
        }
        tmp_tuple_element_43 = mod_consts[85];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_43);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_43 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_43);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_bb84ef9b403e7558e48f6d2eb32b070a->m_frame.f_lineno = 172;
        tmp_assign_source_38 = CALL_FUNCTION(tstate, tmp_called_value_53, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_53);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_38;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_22;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_22 = tmp_class_creation_3__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_22, mod_consts[36]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

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
        PyObject *tmp_tuple_element_44;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_name_value_5;
        PyObject *tmp_default_value_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[37];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_23 = tmp_class_creation_3__metaclass;
        tmp_name_value_5 = mod_consts[38];
        tmp_default_value_3 = mod_consts[39];
        tmp_tuple_element_44 = BUILTIN_GETATTR(tstate, tmp_expression_value_23, tmp_name_value_5, tmp_default_value_3);
        if (tmp_tuple_element_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto try_except_handler_10;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_24;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_44);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_24 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_24 == NULL));
            tmp_tuple_element_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[38]);
            Py_DECREF(tmp_expression_value_24);
            if (tmp_tuple_element_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;

                goto tuple_build_exception_35;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_44);
        }
        goto tuple_build_noexception_35;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_35:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_10;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_35:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto try_except_handler_10;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 172;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_10;
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_39;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_40;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_pycaw$api$endpointvolume$$$class__3_IAudioMeterInformation_172 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[40];
        tmp_res = PyObject_SetItem(locals_pycaw$api$endpointvolume$$$class__3_IAudioMeterInformation_172, mod_consts[41], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto try_except_handler_12;
        }
        tmp_dictset_value = mod_consts[85];
        tmp_res = PyObject_SetItem(locals_pycaw$api$endpointvolume$$$class__3_IAudioMeterInformation_172, mod_consts[42], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto try_except_handler_12;
        }
        frame_918395fd84c1ab8967fd7223220724e2_4 = MAKE_CLASS_FRAME(tstate, codeobj_918395fd84c1ab8967fd7223220724e2, module_pycaw$api$endpointvolume, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_918395fd84c1ab8967fd7223220724e2_4);
        assert(Py_REFCNT(frame_918395fd84c1ab8967fd7223220724e2_4) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_54;
            tmp_called_value_54 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__3_IAudioMeterInformation_172, mod_consts[28]);

            if (tmp_called_value_54 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_54 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[28]);

                    if (unlikely(tmp_called_value_54 == NULL)) {
                        tmp_called_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
                    }

                    if (tmp_called_value_54 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 173;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_54);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_918395fd84c1ab8967fd7223220724e2_4->m_frame.f_lineno = 173;
            tmp_dictset_value = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_54, mod_consts[86]);

            Py_DECREF(tmp_called_value_54);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_pycaw$api$endpointvolume$$$class__3_IAudioMeterInformation_172, mod_consts[44], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_tuple_element_45;
            PyObject *tmp_called_value_55;
            PyObject *tmp_args_element_value_115;
            PyObject *tmp_args_element_value_116;
            PyObject *tmp_args_element_value_117;
            PyObject *tmp_args_element_value_118;
            PyObject *tmp_tuple_element_46;
            tmp_called_value_55 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__3_IAudioMeterInformation_172, mod_consts[27]);

            if (tmp_called_value_55 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_55 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[27]);

                    if (unlikely(tmp_called_value_55 == NULL)) {
                        tmp_called_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
                    }

                    if (tmp_called_value_55 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 176;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_55);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_115 = MAKE_LIST_EMPTY(0);
            tmp_args_element_value_116 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__3_IAudioMeterInformation_172, mod_consts[18]);

            if (tmp_args_element_value_116 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_args_element_value_116 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_args_element_value_116 == NULL)) {
                        tmp_args_element_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
                    }

                    if (tmp_args_element_value_116 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_55);
                        Py_DECREF(tmp_args_element_value_115);

                        exception_lineno = 176;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_args_element_value_116);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_args_element_value_117 = mod_consts[87];
            tmp_tuple_element_46 = MAKE_LIST1(mod_consts[55]);
            tmp_args_element_value_118 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_called_value_56;
                PyObject *tmp_args_element_value_119;
                PyTuple_SET_ITEM(tmp_args_element_value_118, 0, tmp_tuple_element_46);
                tmp_called_value_56 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__3_IAudioMeterInformation_172, mod_consts[20]);

                if (tmp_called_value_56 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_called_value_56 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[20]);

                        if (unlikely(tmp_called_value_56 == NULL)) {
                            tmp_called_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                        }

                        if (tmp_called_value_56 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 176;
                            type_description_2 = "o";
                            goto tuple_build_exception_36;
                        }
                        Py_INCREF(tmp_called_value_56);
                    } else {
                        goto tuple_build_exception_36;
                    }
                }

                tmp_args_element_value_119 = PyObject_GetItem(locals_pycaw$api$endpointvolume$$$class__3_IAudioMeterInformation_172, mod_consts[21]);

                if (tmp_args_element_value_119 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_args_element_value_119 = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[21]);

                        if (unlikely(tmp_args_element_value_119 == NULL)) {
                            tmp_args_element_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
                        }

                        if (tmp_args_element_value_119 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_value_56);

                            exception_lineno = 176;
                            type_description_2 = "o";
                            goto tuple_build_exception_36;
                        }
                        Py_INCREF(tmp_args_element_value_119);
                    } else {
                        goto tuple_build_exception_36;
                    }
                }

                frame_918395fd84c1ab8967fd7223220724e2_4->m_frame.f_lineno = 176;
                tmp_tuple_element_46 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_56, tmp_args_element_value_119);
                Py_DECREF(tmp_called_value_56);
                Py_DECREF(tmp_args_element_value_119);
                if (tmp_tuple_element_46 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 176;
                    type_description_2 = "o";
                    goto tuple_build_exception_36;
                }
                PyTuple_SET_ITEM(tmp_args_element_value_118, 1, tmp_tuple_element_46);
                tmp_tuple_element_46 = mod_consts[88];
                PyTuple_SET_ITEM0(tmp_args_element_value_118, 2, tmp_tuple_element_46);
            }
            goto tuple_build_noexception_36;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_36:;
            Py_DECREF(tmp_called_value_55);
            Py_DECREF(tmp_args_element_value_115);
            Py_DECREF(tmp_args_element_value_116);
            Py_DECREF(tmp_args_element_value_118);
            goto frame_exception_exit_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_36:;
            frame_918395fd84c1ab8967fd7223220724e2_4->m_frame.f_lineno = 176;
            {
                PyObject *call_args[] = {tmp_args_element_value_115, tmp_args_element_value_116, tmp_args_element_value_117, tmp_args_element_value_118};
                tmp_tuple_element_45 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_55, call_args);
            }

            Py_DECREF(tmp_called_value_55);
            Py_DECREF(tmp_args_element_value_115);
            Py_DECREF(tmp_args_element_value_116);
            Py_DECREF(tmp_args_element_value_118);
            if (tmp_tuple_element_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dictset_value = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_dictset_value, 0, tmp_tuple_element_45);
            tmp_res = PyObject_SetItem(locals_pycaw$api$endpointvolume$$$class__3_IAudioMeterInformation_172, mod_consts[48], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_918395fd84c1ab8967fd7223220724e2_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_918395fd84c1ab8967fd7223220724e2_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_918395fd84c1ab8967fd7223220724e2_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_918395fd84c1ab8967fd7223220724e2_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_918395fd84c1ab8967fd7223220724e2_4);

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


                exception_lineno = 172;

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
        tmp_res = PyObject_SetItem(locals_pycaw$api$endpointvolume$$$class__3_IAudioMeterInformation_172, mod_consts[49], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto try_except_handler_12;
        }
        branch_no_9:;
        {
            PyObject *tmp_assign_source_41;
            PyObject *tmp_called_value_57;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_47;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_57 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_47 = mod_consts[85];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_47);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_47 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_47);
            tmp_tuple_element_47 = locals_pycaw$api$endpointvolume$$$class__3_IAudioMeterInformation_172;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_47);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_bb84ef9b403e7558e48f6d2eb32b070a->m_frame.f_lineno = 172;
            tmp_assign_source_41 = CALL_FUNCTION(tstate, tmp_called_value_57, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_41 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;

                goto try_except_handler_12;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_41;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_40 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_40);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF(locals_pycaw$api$endpointvolume$$$class__3_IAudioMeterInformation_172);
        locals_pycaw$api$endpointvolume$$$class__3_IAudioMeterInformation_172 = NULL;
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

        Py_DECREF(locals_pycaw$api$endpointvolume$$$class__3_IAudioMeterInformation_172);
        locals_pycaw$api$endpointvolume$$$class__3_IAudioMeterInformation_172 = NULL;
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
        exception_lineno = 172;
        goto try_except_handler_10;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_40);
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


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_4;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bb84ef9b403e7558e48f6d2eb32b070a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bb84ef9b403e7558e48f6d2eb32b070a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bb84ef9b403e7558e48f6d2eb32b070a, exception_lineno);
    }



    assertFrameObject(frame_bb84ef9b403e7558e48f6d2eb32b070a);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_4:;
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

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pycaw$api$endpointvolume", false);

    Py_INCREF(module_pycaw$api$endpointvolume);
    return module_pycaw$api$endpointvolume;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pycaw$api$endpointvolume, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pycaw$api$endpointvolume", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
