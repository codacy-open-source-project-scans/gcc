/* { dg-do compile { target { powerpc*-*-* } } } */
/* { dg-require-effective-target powerpc_vsx_ok } */
/* { dg-options "-mdejagnu-cpu=power9 -mvsx" } */

#include <altivec.h>

__vector bool long long int
get_data_class_flags (__vector double *p)
{
  __vector double source = *p;

  return vec_test_data_class (source, 256);	/* { dg-error "argument 2 must be a literal between 0 and 127, inclusive" } */
}
