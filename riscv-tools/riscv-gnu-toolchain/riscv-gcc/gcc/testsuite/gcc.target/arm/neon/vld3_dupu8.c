/* Test the `vld3_dupu8' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0" } */
/* { dg-add-options arm_neon } */

#include "arm_neon.h"

void test_vld3_dupu8 (void)
{
  uint8x8x3_t out_uint8x8x3_t;

  out_uint8x8x3_t = vld3_dup_u8 (0);
}

/* { dg-final { scan-assembler "vld3\.8\[ 	\]+\\\{((\[dD\]\[0-9\]+\\\[\\\]-\[dD\]\[0-9\]+\\\[\\\])|(\[dD\]\[0-9\]+\\\[\\\], \[dD\]\[0-9\]+\\\[\\\], \[dD\]\[0-9\]+\\\[\\\]))\\\}, \\\[\[rR\]\[0-9\]+\(:\[0-9\]+\)?\\\]!?\(\[ 	\]+@\[a-zA-Z0-9 \]+\)?\n" } } */