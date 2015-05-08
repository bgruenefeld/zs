/*  =========================================================================
    zs - ZS wrapper

    Copyright (c) the Contributors as noted in the AUTHORS file.       
    This file is part of the ZeroScript experiment.                    
                                                                       
    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.           

################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
    =========================================================================
*/

#ifndef zs_library_H_INCLUDED
#define zs_library_H_INCLUDED

//  Set up environment for the application

//  External dependencies
#include <czmq.h>

//  ZS version macros for compile-time API detection

#define ZS_VERSION_MAJOR 0
#define ZS_VERSION_MINOR 0
#define ZS_VERSION_PATCH 0

#define ZS_MAKE_VERSION(major, minor, patch) \
    ((major) * 10000 + (minor) * 100 + (patch))
#define ZS_VERSION \
    ZS_MAKE_VERSION(ZS_VERSION_MAJOR, ZS_VERSION_MINOR, ZS_VERSION_PATCH)

#if defined (__WINDOWS__)
#   if defined LIBZS_STATIC
#       define ZS_EXPORT
#   elif defined LIBZS_EXPORTS
#       define ZS_EXPORT __declspec(dllexport)
#   else
#       define ZS_EXPORT __declspec(dllimport)
#   endif
#else
#   define ZS_EXPORT
#endif

//  Opaque class structures to allow forward references
typedef struct _zs_pipe_t zs_pipe_t;
#define ZS_PIPE_T_DEFINED
typedef struct _zs_vm_t zs_vm_t;
#define ZS_VM_T_DEFINED
typedef struct _zs_repl_t zs_repl_t;
#define ZS_REPL_T_DEFINED


//  Public API classes
#include "zs_pipe.h"
#include "zs_vm.h"
#include "zs_repl.h"

#endif
/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
*/
