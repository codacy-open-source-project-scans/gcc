/* { dg-options "-mlasx -w -fno-strict-aliasing" } */
#include "../simd_correctness_check.h"
#include <lasxintrin.h>

int
main ()
{
  __m256i __m256i_op0, __m256i_op1, __m256i_op2, __m256i_out, __m256i_result;
  __m256 __m256_op0, __m256_op1, __m256_op2, __m256_out, __m256_result;
  __m256d __m256d_op0, __m256d_op1, __m256d_op2, __m256d_out, __m256d_result;

  int int_op0, int_op1, int_op2, int_out, int_result, i = 1, fail;
  long int long_op0, long_op1, long_op2, lont_out, lont_result;
  long int long_int_out, long_int_result;
  unsigned int unsigned_int_out, unsigned_int_result;
  unsigned long int unsigned_long_int_out, unsigned_long_int_result;

  *((int *)&__m256_op0[7]) = 0x80808080;
  *((int *)&__m256_op0[6]) = 0x80808080;
  *((int *)&__m256_op0[5]) = 0x80808080;
  *((int *)&__m256_op0[4]) = 0x80808080;
  *((int *)&__m256_op0[3]) = 0x80808080;
  *((int *)&__m256_op0[2]) = 0x80808080;
  *((int *)&__m256_op0[1]) = 0x80808080;
  *((int *)&__m256_op0[0]) = 0x80808080;
  *((int *)&__m256_op1[7]) = 0xffffffff;
  *((int *)&__m256_op1[6]) = 0xffffffff;
  *((int *)&__m256_op1[5]) = 0xffffffff;
  *((int *)&__m256_op1[4]) = 0xffffffff;
  *((int *)&__m256_op1[3]) = 0xffffffff;
  *((int *)&__m256_op1[2]) = 0xffffffff;
  *((int *)&__m256_op1[1]) = 0xffffffff;
  *((int *)&__m256_op1[0]) = 0xffffffff;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvfcmp_sne_s (__m256_op0, __m256_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((int *)&__m256_op0[7]) = 0xefefefef;
  *((int *)&__m256_op0[6]) = 0xefefefef;
  *((int *)&__m256_op0[5]) = 0xefefefef;
  *((int *)&__m256_op0[4]) = 0xefefefef;
  *((int *)&__m256_op0[3]) = 0xefefefef;
  *((int *)&__m256_op0[2]) = 0xefefef6e;
  *((int *)&__m256_op0[1]) = 0xeeeeeeee;
  *((int *)&__m256_op0[0]) = 0xeeeeeeee;
  *((int *)&__m256_op1[7]) = 0x00000000;
  *((int *)&__m256_op1[6]) = 0x00000000;
  *((int *)&__m256_op1[5]) = 0x00000000;
  *((int *)&__m256_op1[4]) = 0x00000000;
  *((int *)&__m256_op1[3]) = 0x00000000;
  *((int *)&__m256_op1[2]) = 0x00000000;
  *((int *)&__m256_op1[1]) = 0x00000000;
  *((int *)&__m256_op1[0]) = 0x00000000;
  *((unsigned long *)&__m256i_result[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[0]) = 0xffffffffffffffff;
  __m256i_out = __lasx_xvfcmp_sne_s (__m256_op0, __m256_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((int *)&__m256_op0[7]) = 0x7f800000;
  *((int *)&__m256_op0[6]) = 0x7f800000;
  *((int *)&__m256_op0[5]) = 0x7f800000;
  *((int *)&__m256_op0[4]) = 0x7f800000;
  *((int *)&__m256_op0[3]) = 0x7f800000;
  *((int *)&__m256_op0[2]) = 0x7f800000;
  *((int *)&__m256_op0[1]) = 0x7f800000;
  *((int *)&__m256_op0[0]) = 0x7f800000;
  *((int *)&__m256_op1[7]) = 0x00000000;
  *((int *)&__m256_op1[6]) = 0x00000000;
  *((int *)&__m256_op1[5]) = 0x00000000;
  *((int *)&__m256_op1[4]) = 0x00000000;
  *((int *)&__m256_op1[3]) = 0x00000000;
  *((int *)&__m256_op1[2]) = 0x00000000;
  *((int *)&__m256_op1[1]) = 0x00000000;
  *((int *)&__m256_op1[0]) = 0x00000000;
  *((unsigned long *)&__m256i_result[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[0]) = 0xffffffffffffffff;
  __m256i_out = __lasx_xvfcmp_sne_s (__m256_op0, __m256_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((int *)&__m256_op0[7]) = 0x00000000;
  *((int *)&__m256_op0[6]) = 0x00000000;
  *((int *)&__m256_op0[5]) = 0x00000000;
  *((int *)&__m256_op0[4]) = 0x0000ffff;
  *((int *)&__m256_op0[3]) = 0x00000000;
  *((int *)&__m256_op0[2]) = 0x00000000;
  *((int *)&__m256_op0[1]) = 0x00000000;
  *((int *)&__m256_op0[0]) = 0x0000ffff;
  *((int *)&__m256_op1[7]) = 0x00ff00ff;
  *((int *)&__m256_op1[6]) = 0x00ff00ff;
  *((int *)&__m256_op1[5]) = 0x00ff00ff;
  *((int *)&__m256_op1[4]) = 0x00ff00ff;
  *((int *)&__m256_op1[3]) = 0x00ff00ff;
  *((int *)&__m256_op1[2]) = 0x00ff00ff;
  *((int *)&__m256_op1[1]) = 0x00ff00ff;
  *((int *)&__m256_op1[0]) = 0x00ff00ff;
  *((unsigned long *)&__m256i_result[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[0]) = 0xffffffffffffffff;
  __m256i_out = __lasx_xvfcmp_sne_s (__m256_op0, __m256_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((int *)&__m256_op0[7]) = 0x00000000;
  *((int *)&__m256_op0[6]) = 0x00000000;
  *((int *)&__m256_op0[5]) = 0x00000000;
  *((int *)&__m256_op0[4]) = 0x00000000;
  *((int *)&__m256_op0[3]) = 0x00000000;
  *((int *)&__m256_op0[2]) = 0x00000000;
  *((int *)&__m256_op0[1]) = 0x00000000;
  *((int *)&__m256_op0[0]) = 0x00000000;
  *((int *)&__m256_op1[7]) = 0x00000000;
  *((int *)&__m256_op1[6]) = 0x00000000;
  *((int *)&__m256_op1[5]) = 0x80000000;
  *((int *)&__m256_op1[4]) = 0x80000000;
  *((int *)&__m256_op1[3]) = 0x00000000;
  *((int *)&__m256_op1[2]) = 0x00000000;
  *((int *)&__m256_op1[1]) = 0x80000000;
  *((int *)&__m256_op1[0]) = 0x80000000;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvfcmp_sne_s (__m256_op0, __m256_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((int *)&__m256_op0[7]) = 0x00000000;
  *((int *)&__m256_op0[6]) = 0x00000000;
  *((int *)&__m256_op0[5]) = 0x00000000;
  *((int *)&__m256_op0[4]) = 0x00000000;
  *((int *)&__m256_op0[3]) = 0x00000000;
  *((int *)&__m256_op0[2]) = 0x00000000;
  *((int *)&__m256_op0[1]) = 0x00000000;
  *((int *)&__m256_op0[0]) = 0x00000000;
  *((int *)&__m256_op1[7]) = 0x00000000;
  *((int *)&__m256_op1[6]) = 0x00000000;
  *((int *)&__m256_op1[5]) = 0x00000000;
  *((int *)&__m256_op1[4]) = 0x00000000;
  *((int *)&__m256_op1[3]) = 0x00000000;
  *((int *)&__m256_op1[2]) = 0x00000000;
  *((int *)&__m256_op1[1]) = 0x00000000;
  *((int *)&__m256_op1[0]) = 0x00000000;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvfcmp_sne_s (__m256_op0, __m256_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((int *)&__m256_op0[7]) = 0x00000000;
  *((int *)&__m256_op0[6]) = 0x00000000;
  *((int *)&__m256_op0[5]) = 0x00000000;
  *((int *)&__m256_op0[4]) = 0x40404040;
  *((int *)&__m256_op0[3]) = 0x00000000;
  *((int *)&__m256_op0[2]) = 0x00000000;
  *((int *)&__m256_op0[1]) = 0x00000000;
  *((int *)&__m256_op0[0]) = 0x40404040;
  *((int *)&__m256_op1[7]) = 0x00000000;
  *((int *)&__m256_op1[6]) = 0x00000000;
  *((int *)&__m256_op1[5]) = 0xfefefefe;
  *((int *)&__m256_op1[4]) = 0x3f800000;
  *((int *)&__m256_op1[3]) = 0x00000000;
  *((int *)&__m256_op1[2]) = 0x00000000;
  *((int *)&__m256_op1[1]) = 0xfefefefe;
  *((int *)&__m256_op1[0]) = 0x3f800000;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0xffffffffffffffff;
  __m256i_out = __lasx_xvfcmp_sne_s (__m256_op0, __m256_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((int *)&__m256_op0[7]) = 0x00000000;
  *((int *)&__m256_op0[6]) = 0x00000000;
  *((int *)&__m256_op0[5]) = 0x00000000;
  *((int *)&__m256_op0[4]) = 0x00000000;
  *((int *)&__m256_op0[3]) = 0x00000000;
  *((int *)&__m256_op0[2]) = 0x00000000;
  *((int *)&__m256_op0[1]) = 0x00000000;
  *((int *)&__m256_op0[0]) = 0x00000000;
  *((int *)&__m256_op1[7]) = 0x00000000;
  *((int *)&__m256_op1[6]) = 0x00000000;
  *((int *)&__m256_op1[5]) = 0x00000000;
  *((int *)&__m256_op1[4]) = 0x00000000;
  *((int *)&__m256_op1[3]) = 0x00000000;
  *((int *)&__m256_op1[2]) = 0x00000000;
  *((int *)&__m256_op1[1]) = 0x00000000;
  *((int *)&__m256_op1[0]) = 0x00000000;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvfcmp_sne_s (__m256_op0, __m256_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((int *)&__m256_op0[7]) = 0x00000000;
  *((int *)&__m256_op0[6]) = 0x00000000;
  *((int *)&__m256_op0[5]) = 0xffff0101;
  *((int *)&__m256_op0[4]) = 0x00000001;
  *((int *)&__m256_op0[3]) = 0x00000000;
  *((int *)&__m256_op0[2]) = 0x00000000;
  *((int *)&__m256_op0[1]) = 0xffff0101;
  *((int *)&__m256_op0[0]) = 0x00000001;
  *((int *)&__m256_op1[7]) = 0x00000000;
  *((int *)&__m256_op1[6]) = 0x00000000;
  *((int *)&__m256_op1[5]) = 0x00000000;
  *((int *)&__m256_op1[4]) = 0x00000000;
  *((int *)&__m256_op1[3]) = 0x00000000;
  *((int *)&__m256_op1[2]) = 0x00000000;
  *((int *)&__m256_op1[1]) = 0x00000000;
  *((int *)&__m256_op1[0]) = 0x00000000;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x00000000ffffffff;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x00000000ffffffff;
  __m256i_out = __lasx_xvfcmp_sne_s (__m256_op0, __m256_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((int *)&__m256_op0[7]) = 0x00000000;
  *((int *)&__m256_op0[6]) = 0x01010101;
  *((int *)&__m256_op0[5]) = 0x55555501;
  *((int *)&__m256_op0[4]) = 0xfefefeab;
  *((int *)&__m256_op0[3]) = 0x00000000;
  *((int *)&__m256_op0[2]) = 0x01010101;
  *((int *)&__m256_op0[1]) = 0x55555501;
  *((int *)&__m256_op0[0]) = 0xfefefeab;
  *((int *)&__m256_op1[7]) = 0x0010bfc8;
  *((int *)&__m256_op1[6]) = 0x0010bf52;
  *((int *)&__m256_op1[5]) = 0xfff1bfca;
  *((int *)&__m256_op1[4]) = 0x0011bfcb;
  *((int *)&__m256_op1[3]) = 0x0010bfc8;
  *((int *)&__m256_op1[2]) = 0x0010bf52;
  *((int *)&__m256_op1[1]) = 0xfff1bfca;
  *((int *)&__m256_op1[0]) = 0x0011bfcb;
  *((unsigned long *)&__m256i_result[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[0]) = 0xffffffffffffffff;
  __m256i_out = __lasx_xvfcmp_sune_s (__m256_op0, __m256_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((int *)&__m256_op0[7]) = 0x00000000;
  *((int *)&__m256_op0[6]) = 0x00000000;
  *((int *)&__m256_op0[5]) = 0x00000000;
  *((int *)&__m256_op0[4]) = 0x00000000;
  *((int *)&__m256_op0[3]) = 0x00000000;
  *((int *)&__m256_op0[2]) = 0x00000000;
  *((int *)&__m256_op0[1]) = 0x00000000;
  *((int *)&__m256_op0[0]) = 0x00000000;
  *((int *)&__m256_op1[7]) = 0x80008000;
  *((int *)&__m256_op1[6]) = 0x00000000;
  *((int *)&__m256_op1[5]) = 0x80008000;
  *((int *)&__m256_op1[4]) = 0x00000000;
  *((int *)&__m256_op1[3]) = 0x80008000;
  *((int *)&__m256_op1[2]) = 0x00000000;
  *((int *)&__m256_op1[1]) = 0x80008000;
  *((int *)&__m256_op1[0]) = 0x00000000;
  *((unsigned long *)&__m256i_result[3]) = 0xffffffff00000000;
  *((unsigned long *)&__m256i_result[2]) = 0xffffffff00000000;
  *((unsigned long *)&__m256i_result[1]) = 0xffffffff00000000;
  *((unsigned long *)&__m256i_result[0]) = 0xffffffff00000000;
  __m256i_out = __lasx_xvfcmp_sune_s (__m256_op0, __m256_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((int *)&__m256_op0[7]) = 0x00000000;
  *((int *)&__m256_op0[6]) = 0x00060000;
  *((int *)&__m256_op0[5]) = 0x00000000;
  *((int *)&__m256_op0[4]) = 0x00000000;
  *((int *)&__m256_op0[3]) = 0x00000000;
  *((int *)&__m256_op0[2]) = 0x00060000;
  *((int *)&__m256_op0[1]) = 0x00000000;
  *((int *)&__m256_op0[0]) = 0x00000000;
  *((int *)&__m256_op1[7]) = 0x00000000;
  *((int *)&__m256_op1[6]) = 0x00000000;
  *((int *)&__m256_op1[5]) = 0x00000166;
  *((int *)&__m256_op1[4]) = 0x00000000;
  *((int *)&__m256_op1[3]) = 0x00000000;
  *((int *)&__m256_op1[2]) = 0x00000000;
  *((int *)&__m256_op1[1]) = 0x00000166;
  *((int *)&__m256_op1[0]) = 0x00000000;
  *((unsigned long *)&__m256i_result[3]) = 0x00000000ffffffff;
  *((unsigned long *)&__m256i_result[2]) = 0xffffffff00000000;
  *((unsigned long *)&__m256i_result[1]) = 0x00000000ffffffff;
  *((unsigned long *)&__m256i_result[0]) = 0xffffffff00000000;
  __m256i_out = __lasx_xvfcmp_sune_s (__m256_op0, __m256_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((int *)&__m256_op0[7]) = 0x0000004a;
  *((int *)&__m256_op0[6]) = 0x557baac4;
  *((int *)&__m256_op0[5]) = 0x556caad9;
  *((int *)&__m256_op0[4]) = 0xaabbaa88;
  *((int *)&__m256_op0[3]) = 0x0000004a;
  *((int *)&__m256_op0[2]) = 0x557baac4;
  *((int *)&__m256_op0[1]) = 0x556caad9;
  *((int *)&__m256_op0[0]) = 0xaabbaa88;
  *((int *)&__m256_op1[7]) = 0x09090909;
  *((int *)&__m256_op1[6]) = 0x09090909;
  *((int *)&__m256_op1[5]) = 0x09090909;
  *((int *)&__m256_op1[4]) = 0x09090909;
  *((int *)&__m256_op1[3]) = 0x09090909;
  *((int *)&__m256_op1[2]) = 0x09090909;
  *((int *)&__m256_op1[1]) = 0x09090909;
  *((int *)&__m256_op1[0]) = 0x09090909;
  *((unsigned long *)&__m256i_result[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[0]) = 0xffffffffffffffff;
  __m256i_out = __lasx_xvfcmp_sune_s (__m256_op0, __m256_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((int *)&__m256_op0[7]) = 0x00000000;
  *((int *)&__m256_op0[6]) = 0x00000000;
  *((int *)&__m256_op0[5]) = 0x00000000;
  *((int *)&__m256_op0[4]) = 0x00000000;
  *((int *)&__m256_op0[3]) = 0x00000000;
  *((int *)&__m256_op0[2]) = 0x00000000;
  *((int *)&__m256_op0[1]) = 0x00000000;
  *((int *)&__m256_op0[0]) = 0x00000000;
  *((int *)&__m256_op1[7]) = 0x00000000;
  *((int *)&__m256_op1[6]) = 0x00000000;
  *((int *)&__m256_op1[5]) = 0x00000000;
  *((int *)&__m256_op1[4]) = 0x00000000;
  *((int *)&__m256_op1[3]) = 0x00000000;
  *((int *)&__m256_op1[2]) = 0x00000000;
  *((int *)&__m256_op1[1]) = 0x00000000;
  *((int *)&__m256_op1[0]) = 0x00000000;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvfcmp_sune_s (__m256_op0, __m256_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((int *)&__m256_op0[7]) = 0x80000000;
  *((int *)&__m256_op0[6]) = 0x00000000;
  *((int *)&__m256_op0[5]) = 0x80000000;
  *((int *)&__m256_op0[4]) = 0x00000000;
  *((int *)&__m256_op0[3]) = 0x80000000;
  *((int *)&__m256_op0[2]) = 0x00000000;
  *((int *)&__m256_op0[1]) = 0x80000000;
  *((int *)&__m256_op0[0]) = 0x00000000;
  *((int *)&__m256_op1[7]) = 0x80000000;
  *((int *)&__m256_op1[6]) = 0x00000000;
  *((int *)&__m256_op1[5]) = 0x80000000;
  *((int *)&__m256_op1[4]) = 0x00000000;
  *((int *)&__m256_op1[3]) = 0x80000000;
  *((int *)&__m256_op1[2]) = 0x00000000;
  *((int *)&__m256_op1[1]) = 0x80000000;
  *((int *)&__m256_op1[0]) = 0x00000000;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvfcmp_sune_s (__m256_op0, __m256_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((int *)&__m256_op0[7]) = 0x00000000;
  *((int *)&__m256_op0[6]) = 0x00000000;
  *((int *)&__m256_op0[5]) = 0x00000000;
  *((int *)&__m256_op0[4]) = 0x00000020;
  *((int *)&__m256_op0[3]) = 0x00000000;
  *((int *)&__m256_op0[2]) = 0x00000000;
  *((int *)&__m256_op0[1]) = 0x00000000;
  *((int *)&__m256_op0[0]) = 0x00000020;
  *((int *)&__m256_op1[7]) = 0x00000000;
  *((int *)&__m256_op1[6]) = 0x00000000;
  *((int *)&__m256_op1[5]) = 0x00000000;
  *((int *)&__m256_op1[4]) = 0x00000000;
  *((int *)&__m256_op1[3]) = 0x00000000;
  *((int *)&__m256_op1[2]) = 0x00000000;
  *((int *)&__m256_op1[1]) = 0x00000000;
  *((int *)&__m256_op1[0]) = 0x00000000;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x00000000ffffffff;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x00000000ffffffff;
  __m256i_out = __lasx_xvfcmp_sune_s (__m256_op0, __m256_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((int *)&__m256_op0[7]) = 0x00000000;
  *((int *)&__m256_op0[6]) = 0x00000000;
  *((int *)&__m256_op0[5]) = 0x00000000;
  *((int *)&__m256_op0[4]) = 0x00000000;
  *((int *)&__m256_op0[3]) = 0x00000000;
  *((int *)&__m256_op0[2]) = 0x00000000;
  *((int *)&__m256_op0[1]) = 0x00000000;
  *((int *)&__m256_op0[0]) = 0x00000000;
  *((int *)&__m256_op1[7]) = 0x00000000;
  *((int *)&__m256_op1[6]) = 0x00000000;
  *((int *)&__m256_op1[5]) = 0x00000000;
  *((int *)&__m256_op1[4]) = 0x00000000;
  *((int *)&__m256_op1[3]) = 0x00000000;
  *((int *)&__m256_op1[2]) = 0x00000000;
  *((int *)&__m256_op1[1]) = 0x00000000;
  *((int *)&__m256_op1[0]) = 0x00000000;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvfcmp_sune_s (__m256_op0, __m256_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256d_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op0[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op0[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvfcmp_sne_d (__m256d_op0, __m256d_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256d_op0[3]) = 0xbabababababababa;
  *((unsigned long *)&__m256d_op0[2]) = 0xbabababababababa;
  *((unsigned long *)&__m256d_op0[1]) = 0xbabababababababa;
  *((unsigned long *)&__m256d_op0[0]) = 0xbabababababababa;
  *((unsigned long *)&__m256d_op1[3]) = 0x88888a6d0962002e;
  *((unsigned long *)&__m256d_op1[2]) = 0xdb8a3109fe0f0020;
  *((unsigned long *)&__m256d_op1[1]) = 0x0000007fff01fffb;
  *((unsigned long *)&__m256d_op1[0]) = 0xdb8e20990cce025a;
  *((unsigned long *)&__m256i_result[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[0]) = 0xffffffffffffffff;
  __m256i_out = __lasx_xvfcmp_sne_d (__m256d_op0, __m256d_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256d_op0[3]) = 0x0000000000000009;
  *((unsigned long *)&__m256d_op0[2]) = 0x0000000000000009;
  *((unsigned long *)&__m256d_op0[1]) = 0x0000000000000009;
  *((unsigned long *)&__m256d_op0[0]) = 0x0000000000000009;
  *((unsigned long *)&__m256d_op1[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[0]) = 0xffffffffffffffff;
  __m256i_out = __lasx_xvfcmp_sne_d (__m256d_op0, __m256d_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256d_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op0[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op0[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvfcmp_sne_d (__m256d_op0, __m256d_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256d_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op0[2]) = 0x0000000000010001;
  *((unsigned long *)&__m256d_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op0[0]) = 0x0000000000010001;
  *((unsigned long *)&__m256d_op1[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0xffffffffffffffff;
  __m256i_out = __lasx_xvfcmp_sne_d (__m256d_op0, __m256d_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256d_op0[3]) = 0xfffffffffffffe00;
  *((unsigned long *)&__m256d_op0[2]) = 0xfffffffffffffe00;
  *((unsigned long *)&__m256d_op0[1]) = 0xfffffffffffffe00;
  *((unsigned long *)&__m256d_op0[0]) = 0xfffffffffffffe00;
  *((unsigned long *)&__m256d_op1[3]) = 0x8000000000000000;
  *((unsigned long *)&__m256d_op1[2]) = 0x000000ffff88ff88;
  *((unsigned long *)&__m256d_op1[1]) = 0x8000000000000000;
  *((unsigned long *)&__m256d_op1[0]) = 0x000000ffff88ff88;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvfcmp_sne_d (__m256d_op0, __m256d_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256d_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op0[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op0[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvfcmp_sne_d (__m256d_op0, __m256d_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256d_op0[3]) = 0x00000005ffffffff;
  *((unsigned long *)&__m256d_op0[2]) = 0x00000007ffffffce;
  *((unsigned long *)&__m256d_op0[1]) = 0x00000005ffffffff;
  *((unsigned long *)&__m256d_op0[0]) = 0x00000007ffffffce;
  *((unsigned long *)&__m256d_op1[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[0]) = 0xffffffffffffffff;
  __m256i_out = __lasx_xvfcmp_sne_d (__m256d_op0, __m256d_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256d_op0[3]) = 0xff00000000000000;
  *((unsigned long *)&__m256d_op0[2]) = 0x00000000000000fe;
  *((unsigned long *)&__m256d_op0[1]) = 0xff00000000000000;
  *((unsigned long *)&__m256d_op0[0]) = 0x00000000000000fe;
  *((unsigned long *)&__m256d_op1[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256d_op1[2]) = 0xfffffffffffebeb8;
  *((unsigned long *)&__m256d_op1[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256d_op1[0]) = 0xfffffffffffebeb8;
  *((unsigned long *)&__m256i_result[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[0]) = 0xffffffffffffffff;
  __m256i_out = __lasx_xvfcmp_sune_d (__m256d_op0, __m256d_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256d_op0[3]) = 0xfafafafafafafafa;
  *((unsigned long *)&__m256d_op0[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op0[1]) = 0xfefefefefefefefe;
  *((unsigned long *)&__m256d_op0[0]) = 0x0000000000fefefe;
  *((unsigned long *)&__m256d_op1[3]) = 0x0101010101010101;
  *((unsigned long *)&__m256d_op1[2]) = 0x0101010101010203;
  *((unsigned long *)&__m256d_op1[1]) = 0x0101010101010101;
  *((unsigned long *)&__m256d_op1[0]) = 0x0101010101010101;
  *((unsigned long *)&__m256i_result[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[0]) = 0xffffffffffffffff;
  __m256i_out = __lasx_xvfcmp_sune_d (__m256d_op0, __m256d_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256d_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op0[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op0[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256d_op1[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256d_op1[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256d_op1[0]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[0]) = 0xffffffffffffffff;
  __m256i_out = __lasx_xvfcmp_sune_d (__m256d_op0, __m256d_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256d_op0[3]) = 0x0000ffee0000ff4c;
  *((unsigned long *)&__m256d_op0[2]) = 0x0000ff050000ff3c;
  *((unsigned long *)&__m256d_op0[1]) = 0x0000fff90000ff78;
  *((unsigned long *)&__m256d_op0[0]) = 0x0000ffa80000ff31;
  *((unsigned long *)&__m256d_op1[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[0]) = 0xffffffffffffffff;
  __m256i_out = __lasx_xvfcmp_sune_d (__m256d_op0, __m256d_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256d_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op0[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op0[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[3]) = 0x0020002000200020;
  *((unsigned long *)&__m256d_op1[2]) = 0x0020000000200000;
  *((unsigned long *)&__m256d_op1[1]) = 0x0020002000200020;
  *((unsigned long *)&__m256d_op1[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvfcmp_sune_d (__m256d_op0, __m256d_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256d_op0[3]) = 0x000000017bfffff0;
  *((unsigned long *)&__m256d_op0[2]) = 0x0000000180007fe8;
  *((unsigned long *)&__m256d_op0[1]) = 0x000000017bfffff0;
  *((unsigned long *)&__m256d_op0[0]) = 0x0000000180007fe8;
  *((unsigned long *)&__m256d_op1[3]) = 0x00000000ffffffff;
  *((unsigned long *)&__m256d_op1[2]) = 0x0100000001000100;
  *((unsigned long *)&__m256d_op1[1]) = 0x00000000ffffffff;
  *((unsigned long *)&__m256d_op1[0]) = 0x0100000001000100;
  *((unsigned long *)&__m256i_result[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[0]) = 0xffffffffffffffff;
  __m256i_out = __lasx_xvfcmp_sune_d (__m256d_op0, __m256d_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256d_op0[3]) = 0x0c6a240000000000;
  *((unsigned long *)&__m256d_op0[2]) = 0x0f00204000000000;
  *((unsigned long *)&__m256d_op0[1]) = 0x0c6a240000000000;
  *((unsigned long *)&__m256d_op0[0]) = 0x0f00204000000000;
  *((unsigned long *)&__m256d_op1[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[0]) = 0xffffffffffffffff;
  __m256i_out = __lasx_xvfcmp_sune_d (__m256d_op0, __m256d_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256d_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op0[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op0[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[2]) = 0x0000000000010001;
  *((unsigned long *)&__m256d_op1[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[0]) = 0x0000000000010001;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0xffffffffffffffff;
  __m256i_out = __lasx_xvfcmp_sune_d (__m256d_op0, __m256d_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256d_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op0[2]) = 0x00000000000a0008;
  *((unsigned long *)&__m256d_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op0[0]) = 0x00000000000a0008;
  *((unsigned long *)&__m256d_op1[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256d_op1[2]) = 0xffffffff00000000;
  *((unsigned long *)&__m256d_op1[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256d_op1[0]) = 0xffffffff00000000;
  *((unsigned long *)&__m256i_result[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[0]) = 0xffffffffffffffff;
  __m256i_out = __lasx_xvfcmp_sune_d (__m256d_op0, __m256d_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256d_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op0[2]) = 0x00000000ffffffff;
  *((unsigned long *)&__m256d_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op0[0]) = 0x00000000ffffffff;
  *((unsigned long *)&__m256d_op1[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0xffffffffffffffff;
  __m256i_out = __lasx_xvfcmp_sune_d (__m256d_op0, __m256d_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256d_op0[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256d_op0[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256d_op0[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256d_op0[0]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256d_op1[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[2]) = 0x00000000ffffffff;
  *((unsigned long *)&__m256d_op1[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[0]) = 0x00000000ffffffff;
  *((unsigned long *)&__m256i_result[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[0]) = 0xffffffffffffffff;
  __m256i_out = __lasx_xvfcmp_sune_d (__m256d_op0, __m256d_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256d_op0[3]) = 0x000000010000685e;
  *((unsigned long *)&__m256d_op0[2]) = 0x000020a4ffffbe4f;
  *((unsigned long *)&__m256d_op0[1]) = 0x000000010000685e;
  *((unsigned long *)&__m256d_op0[0]) = 0x000020a4ffffbe4f;
  *((unsigned long *)&__m256d_op1[3]) = 0x0087ff87f807ff87;
  *((unsigned long *)&__m256d_op1[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[1]) = 0x0087ff87f807ff87;
  *((unsigned long *)&__m256d_op1[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[0]) = 0xffffffffffffffff;
  __m256i_out = __lasx_xvfcmp_sune_d (__m256d_op0, __m256d_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256d_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op0[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op0[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvfcmp_sune_d (__m256d_op0, __m256d_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256d_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op0[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op0[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[3]) = 0xfd02fd02fd02fd02;
  *((unsigned long *)&__m256d_op1[2]) = 0xfd02fd02fd02fd02;
  *((unsigned long *)&__m256d_op1[1]) = 0xfd02fd02fd02fd02;
  *((unsigned long *)&__m256d_op1[0]) = 0xfd02fd02fd02fd02;
  *((unsigned long *)&__m256i_result[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[0]) = 0xffffffffffffffff;
  __m256i_out = __lasx_xvfcmp_sune_d (__m256d_op0, __m256d_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256d_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op0[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op0[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256d_op1[3]) = 0x7fffffff80000000;
  *((unsigned long *)&__m256d_op1[2]) = 0x7fffffff80000000;
  *((unsigned long *)&__m256d_op1[1]) = 0x7fffffff80000000;
  *((unsigned long *)&__m256d_op1[0]) = 0x7fffffff80000000;
  *((unsigned long *)&__m256i_result[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[0]) = 0xffffffffffffffff;
  __m256i_out = __lasx_xvfcmp_sune_d (__m256d_op0, __m256d_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  return 0;
}
