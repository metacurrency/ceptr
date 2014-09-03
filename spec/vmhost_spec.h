/**
 * @file vmhost_spec.h
 * @copyright Copyright (C) 2013-2014, The MetaCurrency Project (Eric Harris-Braun, Arthur Brock, et. al).  This file is part of the Ceptr platform and is released under the terms of the license contained in the file LICENSE (GPLv3).
 * @ingroup tests
 */

#include "../src/ceptr.h"
#include "../src/vmhost.h"
#include "http_example.h"

void testVMHostCreate() {
    //! [testVMHostCreate]
    VMHost *v = _v_new();

    spec_is_symbol_equal(v->r,_t_symbol(v->r->root),VM_HOST_RECEPTOR);
    Tnode *ar_tree = _t_child(v->r->root,4);
    spec_is_symbol_equal(v->r,_t_symbol(ar_tree),ACTIVE_RECEPTORS);
    spec_is_ptr_equal(v->active_receptors,ar_tree);
    spec_is_equal(_t_children(ar_tree),0);
    _v_free(v);
    //! [testVMHostCreate]
}

/**
 * generate a test receptor package
 *
 * @snippet spec/vmhost_spec.h makeTestReceptorPackage
 */
//! [makeTestReceptorPackage]
Tnode *_makeTestReceptorPackage() {
    Tnode *p = _t_new_root(RECEPTOR_PACKAGE);
    _t_newr(p,MANIFEST);
    _t_newi(p,RECEPTOR_IDENTIFIER,123456);

    _t_add(p,_t_clone(test_HTTP_symbols));
    _t_add(p,_t_clone(test_HTTP_structures));

    return p;
}
//! [makeTestReceptorPackage]

void testVMHostLoadReceptorPackage() {
    //! [testVMHostLoadReceptorPackage]
    VMHost *v = _v_new();
    Tnode *p = _makeTestReceptorPackage();

    Xaddr x = _v_load_receptor_package(v,p);
    Tnode *p1 = _r_get_instance(v->c,x);

    spec_is_ptr_equal(p,p1);
    _v_free(v);
    //! [testVMHostLoadReceptorPackage]
}

void testVMHostInstallReceptor() {
    //! [testVMHostInstallReceptor]
    VMHost *v = _v_new();

    Tnode *p = _makeTestReceptorPackage();
    Xaddr xp = _v_load_receptor_package(v,p);

    Xaddr x = _v_install_r(v,xp,0,"http server");

    // installing the receptor should instantiate a receptor from the package with the given bindings and symbol label
    Tnode *r = _r_get_instance(v->r,x);
    spec_is_symbol_equal(v->r,x.symbol,INSTALLED_RECEPTOR);
    spec_is_symbol_equal(v->r,_t_symbol(_t_child(r,1)),_r_get_symbol_by_label(v->r,"http server"));

    _v_free(v);
    //! [testVMHostInstallReceptor]
}

void testVMHostActivateReceptor() {
    //! [testVMHostActivateReceptor]
    VMHost *v = _v_new();
    Tnode *p = _makeTestReceptorPackage();
    Xaddr xp = _v_load_receptor_package(v,p);
    Xaddr x = _v_install_r(v,xp,0,"http server");

    _v_activate(v,x);

    // confirm that the activate list has a new child
    spec_is_equal(_t_children(v->active_receptors),1);

    // and that it is the same as the installed receptor
    Tnode *ar = _t_child(v->active_receptors,1);
    Tnode *r = _r_get_instance(v->r,x);
    spec_is_ptr_equal(ar,r);

    _v_free(v);
    //! [testVMHostActivateReceptor]
}

void testVMHost() {
    _setup_HTTPDefs();
    testVMHostCreate();
    testVMHostLoadReceptorPackage();
    testVMHostInstallReceptor();
    testVMHostActivateReceptor();
    _cleanup_HTTPDefs();
}
