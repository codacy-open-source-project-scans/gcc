/* { dg-do compile } */
/* { dg-options "-mavx512pf -O2" } */
/* { dg-warning "AVX512PF support will be removed in GCC 15" "" { target *-*-* } 0 } */
/* { dg-final { scan-assembler-times "vscatterpf0dpd\[ \\t\]+\[^\{\n\]*%ymm\[0-9\]+\[^\n\]*\\)\{%k\[1-7\]\}(?:\n|\[ \\t\]+#)" 2 } } */
#include <immintrin.h>

volatile __m256i idx;
volatile __mmask8 m8;
void *base;

void extern
avx512pf_test (void)
{
  _mm512_prefetch_i32scatter_pd (base, idx, 8, _MM_HINT_T0);
  _mm512_mask_prefetch_i32scatter_pd (base, m8, idx, 8, _MM_HINT_ET0);
}
