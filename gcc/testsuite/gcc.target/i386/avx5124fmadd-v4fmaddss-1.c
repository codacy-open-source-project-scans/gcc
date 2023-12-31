/* { dg-do compile } */
/* { dg-options "-O2 -mavx5124fmaps" } */
/* { dg-warning "AVX5124FMAPS support will be removed in GCC 15" "" { target *-*-* } 0 } */
/* { dg-final { scan-assembler-times "v4fmaddss\[ \\t\]+\[^\{\n\]*%xmm\[0-9\]+(?:\n|\[ \\t\]+#)"  1 } } */
/* { dg-final { scan-assembler-times "v4fmaddss\[ \\t\]+\[^\{\n\]*%xmm\[0-9\]+\{%k\[1-7\]\}(?:\n|\[ \\t\]+#)"  1 } } */
/* { dg-final { scan-assembler-times "v4fmaddss\[ \\t\]+\[^\{\n\]*%xmm\[0-9\]+\{%k\[1-7\]\}\{z\}(?:\n|\[ \\t\]+#)"  1 } } */

#include <x86intrin.h>

__m128 a, b, c, d, e, f, x1, x2, x3;
__m128 *mem;
__mmask8 m;

int foo ()
{
  x1 = _mm_4fmadd_ss (a, b, c, d, e, mem);
  x2 = _mm_mask_4fmadd_ss (a, m, b, c, d, e, mem);
  x3 = _mm_maskz_4fmadd_ss (m, a, b, c, d, e, mem);
}
