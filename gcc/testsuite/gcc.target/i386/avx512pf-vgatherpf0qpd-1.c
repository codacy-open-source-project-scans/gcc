/* { dg-do compile } */
/* { dg-options "-mavx512pf -O2" } */
/* { dg-warning "AVX512PF support will be removed in GCC 15" "" { target *-*-* } 0 } */
/* { dg-final { scan-assembler-times "vgatherpf0qpd\[ \\t\]+\[^\{\n\]*\{%k\[1-7\]\}(?:\n|\[ \\t\]+#)" 2 } } */

#include <immintrin.h>

volatile __m512i idx;
volatile __mmask8 m8;
int *base;

void extern
avx512pf_test (void)
{
  _mm512_prefetch_i64gather_pd (idx, base, 8, _MM_HINT_T0);
  _mm512_mask_prefetch_i64gather_pd (idx, m8, base, 8, _MM_HINT_T0);
}
