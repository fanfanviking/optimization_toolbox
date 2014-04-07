/*
 * =====================================================================================
 *
 *       Filename:  opt_def.h
 *
 *    Description:  common definitions for optimization toolbox library
 *
 *        Version:  1.0
 *        Created:  06/04/14 10:01:38 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Weiheng Ni (), dreamboat91@gmail.com
 *        Company:  University of Victoria, BC, Canada
 *
 * =====================================================================================
 */


#ifndef  __OPT_DEF_H__
#define  __OPT_DEF_H__

/* #####   HEADER FILE INCLUDES   ################################################### */
#include <stdlib.h>

/* #####   EXPORTED MACROS   ######################################################## */
/* Optimization Results */
#define RET_SUCCESS     0

#define RET_FAILURE     -1
#define FAIL_NOBOUND     0
#define FAIL_NONFEASIBLE 1
#define FAIL_LACK_PRCS   2
#define FAIL_DTYPE_ERR   3

/* Optimization Flags */
// precision
#define PRCS_DEFAULT    0x00000000
#define PRCS_BEST       0x00000001
#define PRCS_USER       0x00000002

// algorithm output view
#define VIEW_DEFAULT    0x00000000
#define VIEW_QUIET      0x00000010

// data type control
#define DTYPE_CHECK     0x00000000
#define DTYPE_NOCHECK   0x00000100  

#endif   /* ----- #ifndef __opt_def_INC  ----- */
