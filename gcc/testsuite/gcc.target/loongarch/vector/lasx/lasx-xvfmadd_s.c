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
  *((int *)&__m256_op1[3]) = 0xffffffff;
  *((int *)&__m256_op1[2]) = 0xf328dfff;
  *((int *)&__m256_op1[1]) = 0x6651bfff;
  *((int *)&__m256_op1[0]) = 0x00000000;
  *((int *)&__m256_op2[7]) = 0x0000ffff;
  *((int *)&__m256_op2[6]) = 0x0000ff80;
  *((int *)&__m256_op2[5]) = 0x00004686;
  *((int *)&__m256_op2[4]) = 0x00007f79;
  *((int *)&__m256_op2[3]) = 0x0000ffff;
  *((int *)&__m256_op2[2]) = 0x0000ffff;
  *((int *)&__m256_op2[1]) = 0x0000f328;
  *((int *)&__m256_op2[0]) = 0x0000dfff;
  *((int *)&__m256_result[7]) = 0x0000ffff;
  *((int *)&__m256_result[6]) = 0x0000ff80;
  *((int *)&__m256_result[5]) = 0x00004686;
  *((int *)&__m256_result[4]) = 0x00007f79;
  *((int *)&__m256_result[3]) = 0xffffffff;
  *((int *)&__m256_result[2]) = 0x0000ffff;
  *((int *)&__m256_result[1]) = 0x0000f328;
  *((int *)&__m256_result[0]) = 0x0000dfff;
  __m256_out = __lasx_xvfmadd_s (__m256_op0, __m256_op1, __m256_op2);
  ASSERTEQ_32 (__LINE__, __m256_result, __m256_out);

  *((int *)&__m256_op0[7]) = 0xffffffff;
  *((int *)&__m256_op0[6]) = 0xffffffff;
  *((int *)&__m256_op0[5]) = 0xffffffff;
  *((int *)&__m256_op0[4]) = 0xffffffff;
  *((int *)&__m256_op0[3]) = 0xffffffff;
  *((int *)&__m256_op0[2]) = 0xffffffff;
  *((int *)&__m256_op0[1]) = 0xffffffff;
  *((int *)&__m256_op0[0]) = 0xffffffff;
  *((int *)&__m256_op1[7]) = 0x00000000;
  *((int *)&__m256_op1[6]) = 0x00000000;
  *((int *)&__m256_op1[5]) = 0x00000000;
  *((int *)&__m256_op1[4]) = 0x00000000;
  *((int *)&__m256_op1[3]) = 0x00000000;
  *((int *)&__m256_op1[2]) = 0x00000000;
  *((int *)&__m256_op1[1]) = 0x00000000;
  *((int *)&__m256_op1[0]) = 0x00000000;
  *((int *)&__m256_op2[7]) = 0x00000000;
  *((int *)&__m256_op2[6]) = 0x00000000;
  *((int *)&__m256_op2[5]) = 0x00000000;
  *((int *)&__m256_op2[4]) = 0x00000000;
  *((int *)&__m256_op2[3]) = 0x00000000;
  *((int *)&__m256_op2[2]) = 0x00000000;
  *((int *)&__m256_op2[1]) = 0x00000000;
  *((int *)&__m256_op2[0]) = 0x00000000;
  *((int *)&__m256_result[7]) = 0xffffffff;
  *((int *)&__m256_result[6]) = 0xffffffff;
  *((int *)&__m256_result[5]) = 0xffffffff;
  *((int *)&__m256_result[4]) = 0xffffffff;
  *((int *)&__m256_result[3]) = 0xffffffff;
  *((int *)&__m256_result[2]) = 0xffffffff;
  *((int *)&__m256_result[1]) = 0xffffffff;
  *((int *)&__m256_result[0]) = 0xffffffff;
  __m256_out = __lasx_xvfmadd_s (__m256_op0, __m256_op1, __m256_op2);
  ASSERTEQ_32 (__LINE__, __m256_result, __m256_out);

  *((int *)&__m256_op0[7]) = 0x00000000;
  *((int *)&__m256_op0[6]) = 0x00000000;
  *((int *)&__m256_op0[5]) = 0xfff10000;
  *((int *)&__m256_op0[4]) = 0xfff10000;
  *((int *)&__m256_op0[3]) = 0x00000000;
  *((int *)&__m256_op0[2]) = 0x00000000;
  *((int *)&__m256_op0[1]) = 0xfff10000;
  *((int *)&__m256_op0[0]) = 0xfff10000;
  *((int *)&__m256_op1[7]) = 0x00000000;
  *((int *)&__m256_op1[6]) = 0x00000000;
  *((int *)&__m256_op1[5]) = 0x00000000;
  *((int *)&__m256_op1[4]) = 0x00000000;
  *((int *)&__m256_op1[3]) = 0x00000000;
  *((int *)&__m256_op1[2]) = 0x00000000;
  *((int *)&__m256_op1[1]) = 0x00000000;
  *((int *)&__m256_op1[0]) = 0x00000000;
  *((int *)&__m256_op2[7]) = 0x00000000;
  *((int *)&__m256_op2[6]) = 0x00000000;
  *((int *)&__m256_op2[5]) = 0x00000000;
  *((int *)&__m256_op2[4]) = 0x00000000;
  *((int *)&__m256_op2[3]) = 0x00000000;
  *((int *)&__m256_op2[2]) = 0x00000000;
  *((int *)&__m256_op2[1]) = 0x00000000;
  *((int *)&__m256_op2[0]) = 0x00000000;
  *((int *)&__m256_result[7]) = 0x00000000;
  *((int *)&__m256_result[6]) = 0x00000000;
  *((int *)&__m256_result[5]) = 0xfff10000;
  *((int *)&__m256_result[4]) = 0xfff10000;
  *((int *)&__m256_result[3]) = 0x00000000;
  *((int *)&__m256_result[2]) = 0x00000000;
  *((int *)&__m256_result[1]) = 0xfff10000;
  *((int *)&__m256_result[0]) = 0xfff10000;
  __m256_out = __lasx_xvfmadd_s (__m256_op0, __m256_op1, __m256_op2);
  ASSERTEQ_32 (__LINE__, __m256_result, __m256_out);

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
  *((int *)&__m256_op2[7]) = 0x00000000;
  *((int *)&__m256_op2[6]) = 0x00000000;
  *((int *)&__m256_op2[5]) = 0x803f6004;
  *((int *)&__m256_op2[4]) = 0x1f636003;
  *((int *)&__m256_op2[3]) = 0x00000000;
  *((int *)&__m256_op2[2]) = 0x00000000;
  *((int *)&__m256_op2[1]) = 0x803f6004;
  *((int *)&__m256_op2[0]) = 0x1f636003;
  *((int *)&__m256_result[7]) = 0x00000000;
  *((int *)&__m256_result[6]) = 0x00000000;
  *((int *)&__m256_result[5]) = 0x803f6004;
  *((int *)&__m256_result[4]) = 0x1f636003;
  *((int *)&__m256_result[3]) = 0x00000000;
  *((int *)&__m256_result[2]) = 0x00000000;
  *((int *)&__m256_result[1]) = 0x803f6004;
  *((int *)&__m256_result[0]) = 0x1f636003;
  __m256_out = __lasx_xvfmadd_s (__m256_op0, __m256_op1, __m256_op2);
  ASSERTEQ_32 (__LINE__, __m256_result, __m256_out);

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
  *((int *)&__m256_op1[4]) = 0xffffffff;
  *((int *)&__m256_op1[3]) = 0x00000000;
  *((int *)&__m256_op1[2]) = 0x00000000;
  *((int *)&__m256_op1[1]) = 0x00000000;
  *((int *)&__m256_op1[0]) = 0xffffffff;
  *((int *)&__m256_op2[7]) = 0x00000000;
  *((int *)&__m256_op2[6]) = 0x00000000;
  *((int *)&__m256_op2[5]) = 0x00000000;
  *((int *)&__m256_op2[4]) = 0x00000000;
  *((int *)&__m256_op2[3]) = 0x00000000;
  *((int *)&__m256_op2[2]) = 0x00000000;
  *((int *)&__m256_op2[1]) = 0x00000000;
  *((int *)&__m256_op2[0]) = 0x00000000;
  *((int *)&__m256_result[7]) = 0x00000000;
  *((int *)&__m256_result[6]) = 0x00000000;
  *((int *)&__m256_result[5]) = 0x00000000;
  *((int *)&__m256_result[4]) = 0xffffffff;
  *((int *)&__m256_result[3]) = 0x00000000;
  *((int *)&__m256_result[2]) = 0x00000000;
  *((int *)&__m256_result[1]) = 0x00000000;
  *((int *)&__m256_result[0]) = 0xffffffff;
  __m256_out = __lasx_xvfmadd_s (__m256_op0, __m256_op1, __m256_op2);
  ASSERTEQ_32 (__LINE__, __m256_result, __m256_out);

  *((int *)&__m256_op0[7]) = 0xffffffff;
  *((int *)&__m256_op0[6]) = 0xffffffff;
  *((int *)&__m256_op0[5]) = 0xffb3430a;
  *((int *)&__m256_op0[4]) = 0x006ed8b8;
  *((int *)&__m256_op0[3]) = 0xffffffff;
  *((int *)&__m256_op0[2]) = 0xffffffff;
  *((int *)&__m256_op0[1]) = 0xffb3430a;
  *((int *)&__m256_op0[0]) = 0x006ed8b8;
  *((int *)&__m256_op1[7]) = 0x00000000;
  *((int *)&__m256_op1[6]) = 0x00000000;
  *((int *)&__m256_op1[5]) = 0x000001ff;
  *((int *)&__m256_op1[4]) = 0x000003fe;
  *((int *)&__m256_op1[3]) = 0x00000000;
  *((int *)&__m256_op1[2]) = 0x00000000;
  *((int *)&__m256_op1[1]) = 0x000001ff;
  *((int *)&__m256_op1[0]) = 0x000003fe;
  *((int *)&__m256_op2[7]) = 0x00000000;
  *((int *)&__m256_op2[6]) = 0x00000000;
  *((int *)&__m256_op2[5]) = 0x00000000;
  *((int *)&__m256_op2[4]) = 0x000000ff;
  *((int *)&__m256_op2[3]) = 0x00000000;
  *((int *)&__m256_op2[2]) = 0x00000000;
  *((int *)&__m256_op2[1]) = 0x00000000;
  *((int *)&__m256_op2[0]) = 0x000000ff;
  *((int *)&__m256_result[7]) = 0xffffffff;
  *((int *)&__m256_result[6]) = 0xffffffff;
  *((int *)&__m256_result[5]) = 0xfff3430a;
  *((int *)&__m256_result[4]) = 0x000000ff;
  *((int *)&__m256_result[3]) = 0xffffffff;
  *((int *)&__m256_result[2]) = 0xffffffff;
  *((int *)&__m256_result[1]) = 0xfff3430a;
  *((int *)&__m256_result[0]) = 0x000000ff;
  __m256_out = __lasx_xvfmadd_s (__m256_op0, __m256_op1, __m256_op2);
  ASSERTEQ_32 (__LINE__, __m256_result, __m256_out);

  *((int *)&__m256_op0[7]) = 0xfffeb683;
  *((int *)&__m256_op0[6]) = 0x9ffffd80;
  *((int *)&__m256_op0[5]) = 0xfffe97c0;
  *((int *)&__m256_op0[4]) = 0x20010001;
  *((int *)&__m256_op0[3]) = 0xfffeb683;
  *((int *)&__m256_op0[2]) = 0x9ffffd80;
  *((int *)&__m256_op0[1]) = 0xfffe97c0;
  *((int *)&__m256_op0[0]) = 0x20010001;
  *((int *)&__m256_op1[7]) = 0x00009fff;
  *((int *)&__m256_op1[6]) = 0x9ffffd80;
  *((int *)&__m256_op1[5]) = 0x0000ffff;
  *((int *)&__m256_op1[4]) = 0x20010001;
  *((int *)&__m256_op1[3]) = 0x00009fff;
  *((int *)&__m256_op1[2]) = 0x9ffffd80;
  *((int *)&__m256_op1[1]) = 0x0000ffff;
  *((int *)&__m256_op1[0]) = 0x20010001;
  *((int *)&__m256_op2[7]) = 0x00000000;
  *((int *)&__m256_op2[6]) = 0x00000000;
  *((int *)&__m256_op2[5]) = 0x00002080;
  *((int *)&__m256_op2[4]) = 0xdf5b41cf;
  *((int *)&__m256_op2[3]) = 0x00000000;
  *((int *)&__m256_op2[2]) = 0x00000000;
  *((int *)&__m256_op2[1]) = 0x00002080;
  *((int *)&__m256_op2[0]) = 0xdf5b41cf;
  *((int *)&__m256_result[7]) = 0xfffeb683;
  *((int *)&__m256_result[6]) = 0x007ffd80;
  *((int *)&__m256_result[5]) = 0xfffe97c0;
  *((int *)&__m256_result[4]) = 0xdf5b41cf;
  *((int *)&__m256_result[3]) = 0xfffeb683;
  *((int *)&__m256_result[2]) = 0x007ffd80;
  *((int *)&__m256_result[1]) = 0xfffe97c0;
  *((int *)&__m256_result[0]) = 0xdf5b41cf;
  __m256_out = __lasx_xvfmadd_s (__m256_op0, __m256_op1, __m256_op2);
  ASSERTEQ_32 (__LINE__, __m256_result, __m256_out);

  *((int *)&__m256_op0[7]) = 0x00000000;
  *((int *)&__m256_op0[6]) = 0xffffffff;
  *((int *)&__m256_op0[5]) = 0x00000000;
  *((int *)&__m256_op0[4]) = 0xffffffff;
  *((int *)&__m256_op0[3]) = 0x00000000;
  *((int *)&__m256_op0[2]) = 0xffffffff;
  *((int *)&__m256_op0[1]) = 0x00000000;
  *((int *)&__m256_op0[0]) = 0xffffffff;
  *((int *)&__m256_op1[7]) = 0xfffeb664;
  *((int *)&__m256_op1[6]) = 0x007ffd61;
  *((int *)&__m256_op1[5]) = 0xfffe97a1;
  *((int *)&__m256_op1[4]) = 0xdf5b41b0;
  *((int *)&__m256_op1[3]) = 0xfffeb664;
  *((int *)&__m256_op1[2]) = 0x007ffd61;
  *((int *)&__m256_op1[1]) = 0xfffe97a1;
  *((int *)&__m256_op1[0]) = 0xdf5b41b0;
  *((int *)&__m256_op2[7]) = 0x00000000;
  *((int *)&__m256_op2[6]) = 0x00000000;
  *((int *)&__m256_op2[5]) = 0x00000000;
  *((int *)&__m256_op2[4]) = 0x00000000;
  *((int *)&__m256_op2[3]) = 0x00000000;
  *((int *)&__m256_op2[2]) = 0x00000000;
  *((int *)&__m256_op2[1]) = 0x94d7fb52;
  *((int *)&__m256_op2[0]) = 0x00000000;
  *((int *)&__m256_result[7]) = 0xfffeb664;
  *((int *)&__m256_result[6]) = 0xffffffff;
  *((int *)&__m256_result[5]) = 0xfffe97a1;
  *((int *)&__m256_result[4]) = 0xffffffff;
  *((int *)&__m256_result[3]) = 0xfffeb664;
  *((int *)&__m256_result[2]) = 0xffffffff;
  *((int *)&__m256_result[1]) = 0xfffe97a1;
  *((int *)&__m256_result[0]) = 0xffffffff;
  __m256_out = __lasx_xvfmadd_s (__m256_op0, __m256_op1, __m256_op2);
  ASSERTEQ_32 (__LINE__, __m256_result, __m256_out);

  *((int *)&__m256_op0[7]) = 0x00000000;
  *((int *)&__m256_op0[6]) = 0x00000000;
  *((int *)&__m256_op0[5]) = 0x00000000;
  *((int *)&__m256_op0[4]) = 0x00000000;
  *((int *)&__m256_op0[3]) = 0x00000000;
  *((int *)&__m256_op0[2]) = 0x00000000;
  *((int *)&__m256_op0[1]) = 0x00000000;
  *((int *)&__m256_op0[0]) = 0x00000000;
  *((int *)&__m256_op1[7]) = 0xffffffff;
  *((int *)&__m256_op1[6]) = 0xffffffff;
  *((int *)&__m256_op1[5]) = 0xffffffff;
  *((int *)&__m256_op1[4]) = 0xffffffff;
  *((int *)&__m256_op1[3]) = 0xffffffff;
  *((int *)&__m256_op1[2]) = 0xffffffff;
  *((int *)&__m256_op1[1]) = 0xffffffff;
  *((int *)&__m256_op1[0]) = 0xffffffff;
  *((int *)&__m256_op2[7]) = 0x00000000;
  *((int *)&__m256_op2[6]) = 0x00000000;
  *((int *)&__m256_op2[5]) = 0x00000000;
  *((int *)&__m256_op2[4]) = 0x00000000;
  *((int *)&__m256_op2[3]) = 0x00000000;
  *((int *)&__m256_op2[2]) = 0x00000000;
  *((int *)&__m256_op2[1]) = 0x00000000;
  *((int *)&__m256_op2[0]) = 0x00000000;
  *((int *)&__m256_result[7]) = 0xffffffff;
  *((int *)&__m256_result[6]) = 0xffffffff;
  *((int *)&__m256_result[5]) = 0xffffffff;
  *((int *)&__m256_result[4]) = 0xffffffff;
  *((int *)&__m256_result[3]) = 0xffffffff;
  *((int *)&__m256_result[2]) = 0xffffffff;
  *((int *)&__m256_result[1]) = 0xffffffff;
  *((int *)&__m256_result[0]) = 0xffffffff;
  __m256_out = __lasx_xvfmadd_s (__m256_op0, __m256_op1, __m256_op2);
  ASSERTEQ_32 (__LINE__, __m256_result, __m256_out);

  *((int *)&__m256_op0[7]) = 0x00000000;
  *((int *)&__m256_op0[6]) = 0x00000000;
  *((int *)&__m256_op0[5]) = 0x00000000;
  *((int *)&__m256_op0[4]) = 0x00000000;
  *((int *)&__m256_op0[3]) = 0x00000000;
  *((int *)&__m256_op0[2]) = 0x00000000;
  *((int *)&__m256_op0[1]) = 0x00000000;
  *((int *)&__m256_op0[0]) = 0x00000000;
  *((int *)&__m256_op1[7]) = 0xffffffff;
  *((int *)&__m256_op1[6]) = 0xffffffff;
  *((int *)&__m256_op1[5]) = 0xffffffff;
  *((int *)&__m256_op1[4]) = 0xffffffff;
  *((int *)&__m256_op1[3]) = 0xffffffff;
  *((int *)&__m256_op1[2]) = 0xffffffff;
  *((int *)&__m256_op1[1]) = 0xffffffff;
  *((int *)&__m256_op1[0]) = 0xffffffff;
  *((int *)&__m256_op2[7]) = 0x00000000;
  *((int *)&__m256_op2[6]) = 0x00000000;
  *((int *)&__m256_op2[5]) = 0x00000000;
  *((int *)&__m256_op2[4]) = 0x00000000;
  *((int *)&__m256_op2[3]) = 0x00000000;
  *((int *)&__m256_op2[2]) = 0x00000000;
  *((int *)&__m256_op2[1]) = 0x00000000;
  *((int *)&__m256_op2[0]) = 0x00000000;
  *((int *)&__m256_result[7]) = 0xffffffff;
  *((int *)&__m256_result[6]) = 0xffffffff;
  *((int *)&__m256_result[5]) = 0xffffffff;
  *((int *)&__m256_result[4]) = 0xffffffff;
  *((int *)&__m256_result[3]) = 0xffffffff;
  *((int *)&__m256_result[2]) = 0xffffffff;
  *((int *)&__m256_result[1]) = 0xffffffff;
  *((int *)&__m256_result[0]) = 0xffffffff;
  __m256_out = __lasx_xvfmsub_s (__m256_op0, __m256_op1, __m256_op2);
  ASSERTEQ_32 (__LINE__, __m256_result, __m256_out);

  *((int *)&__m256_op0[7]) = 0x00000000;
  *((int *)&__m256_op0[6]) = 0x00000000;
  *((int *)&__m256_op0[5]) = 0x00000000;
  *((int *)&__m256_op0[4]) = 0x00000000;
  *((int *)&__m256_op0[3]) = 0x00000000;
  *((int *)&__m256_op0[2]) = 0x00000000;
  *((int *)&__m256_op0[1]) = 0x00000000;
  *((int *)&__m256_op0[0]) = 0x00000000;
  *((int *)&__m256_op1[7]) = 0xb70036db;
  *((int *)&__m256_op1[6]) = 0x12c4007e;
  *((int *)&__m256_op1[5]) = 0xb7146213;
  *((int *)&__m256_op1[4]) = 0xfc1e0049;
  *((int *)&__m256_op1[3]) = 0x000000fe;
  *((int *)&__m256_op1[2]) = 0xfe02fffe;
  *((int *)&__m256_op1[1]) = 0xb71c413b;
  *((int *)&__m256_op1[0]) = 0x199d04b5;
  *((int *)&__m256_op2[7]) = 0xb70036db;
  *((int *)&__m256_op2[6]) = 0x12c4007e;
  *((int *)&__m256_op2[5]) = 0xb7146213;
  *((int *)&__m256_op2[4]) = 0xfc1e0049;
  *((int *)&__m256_op2[3]) = 0x000000fe;
  *((int *)&__m256_op2[2]) = 0xfe02fffe;
  *((int *)&__m256_op2[1]) = 0xb71c413b;
  *((int *)&__m256_op2[0]) = 0x199d04b5;
  *((int *)&__m256_result[7]) = 0x370036db;
  *((int *)&__m256_result[6]) = 0x92c4007e;
  *((int *)&__m256_result[5]) = 0x37146213;
  *((int *)&__m256_result[4]) = 0x7c1e0049;
  *((int *)&__m256_result[3]) = 0x800000fe;
  *((int *)&__m256_result[2]) = 0x7e02fffe;
  *((int *)&__m256_result[1]) = 0x371c413b;
  *((int *)&__m256_result[0]) = 0x999d04b5;
  __m256_out = __lasx_xvfmsub_s (__m256_op0, __m256_op1, __m256_op2);
  ASSERTEQ_32 (__LINE__, __m256_result, __m256_out);

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
  *((int *)&__m256_op2[7]) = 0x00000000;
  *((int *)&__m256_op2[6]) = 0x00000000;
  *((int *)&__m256_op2[5]) = 0x00000000;
  *((int *)&__m256_op2[4]) = 0x00000000;
  *((int *)&__m256_op2[3]) = 0x00000000;
  *((int *)&__m256_op2[2]) = 0x00000000;
  *((int *)&__m256_op2[1]) = 0x00000000;
  *((int *)&__m256_op2[0]) = 0x00000000;
  *((int *)&__m256_result[7]) = 0x00000000;
  *((int *)&__m256_result[6]) = 0x00000000;
  *((int *)&__m256_result[5]) = 0x00000000;
  *((int *)&__m256_result[4]) = 0x00000000;
  *((int *)&__m256_result[3]) = 0x00000000;
  *((int *)&__m256_result[2]) = 0x00000000;
  *((int *)&__m256_result[1]) = 0x00000000;
  *((int *)&__m256_result[0]) = 0x00000000;
  __m256_out = __lasx_xvfmsub_s (__m256_op0, __m256_op1, __m256_op2);
  ASSERTEQ_32 (__LINE__, __m256_result, __m256_out);

  *((int *)&__m256_op0[7]) = 0x00000000;
  *((int *)&__m256_op0[6]) = 0x00000000;
  *((int *)&__m256_op0[5]) = 0xffffffff;
  *((int *)&__m256_op0[4]) = 0x00000000;
  *((int *)&__m256_op0[3]) = 0x00000000;
  *((int *)&__m256_op0[2]) = 0x00000000;
  *((int *)&__m256_op0[1]) = 0xffffffff;
  *((int *)&__m256_op0[0]) = 0x00000000;
  *((int *)&__m256_op1[7]) = 0x00000000;
  *((int *)&__m256_op1[6]) = 0x00000000;
  *((int *)&__m256_op1[5]) = 0x3f7f7f7e;
  *((int *)&__m256_op1[4]) = 0xff800000;
  *((int *)&__m256_op1[3]) = 0x00000000;
  *((int *)&__m256_op1[2]) = 0x00000000;
  *((int *)&__m256_op1[1]) = 0x3f7f7f7e;
  *((int *)&__m256_op1[0]) = 0xff800000;
  *((int *)&__m256_op2[7]) = 0x00000000;
  *((int *)&__m256_op2[6]) = 0x00000000;
  *((int *)&__m256_op2[5]) = 0x7fffffff;
  *((int *)&__m256_op2[4]) = 0xff7fffff;
  *((int *)&__m256_op2[3]) = 0x00000000;
  *((int *)&__m256_op2[2]) = 0x00000000;
  *((int *)&__m256_op2[1]) = 0x7fffffff;
  *((int *)&__m256_op2[0]) = 0xff7fffff;
  *((int *)&__m256_result[7]) = 0x00000000;
  *((int *)&__m256_result[6]) = 0x00000000;
  *((int *)&__m256_result[5]) = 0x7fffffff;
  *((int *)&__m256_result[4]) = 0x7fc00000;
  *((int *)&__m256_result[3]) = 0x00000000;
  *((int *)&__m256_result[2]) = 0x00000000;
  *((int *)&__m256_result[1]) = 0x7fffffff;
  *((int *)&__m256_result[0]) = 0x7fc00000;
  __m256_out = __lasx_xvfmsub_s (__m256_op0, __m256_op1, __m256_op2);
  ASSERTEQ_32 (__LINE__, __m256_result, __m256_out);

  *((int *)&__m256_op0[7]) = 0xffffffff;
  *((int *)&__m256_op0[6]) = 0xffffffff;
  *((int *)&__m256_op0[5]) = 0xffffffff;
  *((int *)&__m256_op0[4]) = 0xffffffff;
  *((int *)&__m256_op0[3]) = 0xffffffff;
  *((int *)&__m256_op0[2]) = 0xffffffff;
  *((int *)&__m256_op0[1]) = 0xffffffff;
  *((int *)&__m256_op0[0]) = 0xffffffff;
  *((int *)&__m256_op1[7]) = 0xffffffff;
  *((int *)&__m256_op1[6]) = 0xffffffff;
  *((int *)&__m256_op1[5]) = 0xffffffff;
  *((int *)&__m256_op1[4]) = 0xffffffff;
  *((int *)&__m256_op1[3]) = 0xffffffff;
  *((int *)&__m256_op1[2]) = 0xffffffff;
  *((int *)&__m256_op1[1]) = 0xffffffff;
  *((int *)&__m256_op1[0]) = 0xffffffff;
  *((int *)&__m256_op2[7]) = 0x00000000;
  *((int *)&__m256_op2[6]) = 0x00000000;
  *((int *)&__m256_op2[5]) = 0x00000000;
  *((int *)&__m256_op2[4]) = 0x00000000;
  *((int *)&__m256_op2[3]) = 0x00000000;
  *((int *)&__m256_op2[2]) = 0x00000000;
  *((int *)&__m256_op2[1]) = 0x00000000;
  *((int *)&__m256_op2[0]) = 0x00000000;
  *((int *)&__m256_result[7]) = 0xffffffff;
  *((int *)&__m256_result[6]) = 0xffffffff;
  *((int *)&__m256_result[5]) = 0xffffffff;
  *((int *)&__m256_result[4]) = 0xffffffff;
  *((int *)&__m256_result[3]) = 0xffffffff;
  *((int *)&__m256_result[2]) = 0xffffffff;
  *((int *)&__m256_result[1]) = 0xffffffff;
  *((int *)&__m256_result[0]) = 0xffffffff;
  __m256_out = __lasx_xvfmsub_s (__m256_op0, __m256_op1, __m256_op2);
  ASSERTEQ_32 (__LINE__, __m256_result, __m256_out);

  *((int *)&__m256_op0[7]) = 0x00000000;
  *((int *)&__m256_op0[6]) = 0x00000000;
  *((int *)&__m256_op0[5]) = 0xffffafaf;
  *((int *)&__m256_op0[4]) = 0xb3b3dc9d;
  *((int *)&__m256_op0[3]) = 0x00000000;
  *((int *)&__m256_op0[2]) = 0x00000000;
  *((int *)&__m256_op0[1]) = 0xffffafaf;
  *((int *)&__m256_op0[0]) = 0xb3b3dc9d;
  *((int *)&__m256_op1[7]) = 0x00020000;
  *((int *)&__m256_op1[6]) = 0x00020000;
  *((int *)&__m256_op1[5]) = 0x00220021;
  *((int *)&__m256_op1[4]) = 0x004a007e;
  *((int *)&__m256_op1[3]) = 0x00020000;
  *((int *)&__m256_op1[2]) = 0x00020000;
  *((int *)&__m256_op1[1]) = 0x00220021;
  *((int *)&__m256_op1[0]) = 0x004a007e;
  *((int *)&__m256_op2[7]) = 0x00000001;
  *((int *)&__m256_op2[6]) = 0x00007f7f;
  *((int *)&__m256_op2[5]) = 0x00000001;
  *((int *)&__m256_op2[4]) = 0x00000000;
  *((int *)&__m256_op2[3]) = 0x00000001;
  *((int *)&__m256_op2[2]) = 0x00007f7f;
  *((int *)&__m256_op2[1]) = 0x00000001;
  *((int *)&__m256_op2[0]) = 0x00000000;
  *((int *)&__m256_result[7]) = 0x80000001;
  *((int *)&__m256_result[6]) = 0x80007f7f;
  *((int *)&__m256_result[5]) = 0xffffafaf;
  *((int *)&__m256_result[4]) = 0x80000000;
  *((int *)&__m256_result[3]) = 0x80000001;
  *((int *)&__m256_result[2]) = 0x80007f7f;
  *((int *)&__m256_result[1]) = 0xffffafaf;
  *((int *)&__m256_result[0]) = 0x80000000;
  __m256_out = __lasx_xvfmsub_s (__m256_op0, __m256_op1, __m256_op2);
  ASSERTEQ_32 (__LINE__, __m256_result, __m256_out);

  *((int *)&__m256_op0[7]) = 0xffffffff;
  *((int *)&__m256_op0[6]) = 0xffffffff;
  *((int *)&__m256_op0[5]) = 0xffffffff;
  *((int *)&__m256_op0[4]) = 0xffffffff;
  *((int *)&__m256_op0[3]) = 0xffffffff;
  *((int *)&__m256_op0[2]) = 0xffffffff;
  *((int *)&__m256_op0[1]) = 0xffffffff;
  *((int *)&__m256_op0[0]) = 0xffffffff;
  *((int *)&__m256_op1[7]) = 0x00000000;
  *((int *)&__m256_op1[6]) = 0x00000000;
  *((int *)&__m256_op1[5]) = 0x00000000;
  *((int *)&__m256_op1[4]) = 0x00000000;
  *((int *)&__m256_op1[3]) = 0x00000000;
  *((int *)&__m256_op1[2]) = 0x00000000;
  *((int *)&__m256_op1[1]) = 0x00000000;
  *((int *)&__m256_op1[0]) = 0x00000000;
  *((int *)&__m256_op2[7]) = 0xffffffe5;
  *((int *)&__m256_op2[6]) = 0xffffffe5;
  *((int *)&__m256_op2[5]) = 0xffffffe5;
  *((int *)&__m256_op2[4]) = 0xffffffe5;
  *((int *)&__m256_op2[3]) = 0xffffffe5;
  *((int *)&__m256_op2[2]) = 0xffffffe5;
  *((int *)&__m256_op2[1]) = 0xffffffe5;
  *((int *)&__m256_op2[0]) = 0xffffffe5;
  *((int *)&__m256_result[7]) = 0xffffffe5;
  *((int *)&__m256_result[6]) = 0xffffffe5;
  *((int *)&__m256_result[5]) = 0xffffffe5;
  *((int *)&__m256_result[4]) = 0xffffffe5;
  *((int *)&__m256_result[3]) = 0xffffffe5;
  *((int *)&__m256_result[2]) = 0xffffffe5;
  *((int *)&__m256_result[1]) = 0xffffffe5;
  *((int *)&__m256_result[0]) = 0xffffffe5;
  __m256_out = __lasx_xvfmsub_s (__m256_op0, __m256_op1, __m256_op2);
  ASSERTEQ_32 (__LINE__, __m256_result, __m256_out);

  *((int *)&__m256_op0[7]) = 0xbfffffff;
  *((int *)&__m256_op0[6]) = 0xffff8000;
  *((int *)&__m256_op0[5]) = 0xbfff8000;
  *((int *)&__m256_op0[4]) = 0x80000000;
  *((int *)&__m256_op0[3]) = 0xbfffffff;
  *((int *)&__m256_op0[2]) = 0xffff8000;
  *((int *)&__m256_op0[1]) = 0xbfff8000;
  *((int *)&__m256_op0[0]) = 0x80000000;
  *((int *)&__m256_op1[7]) = 0x00000000;
  *((int *)&__m256_op1[6]) = 0x00000000;
  *((int *)&__m256_op1[5]) = 0x00000000;
  *((int *)&__m256_op1[4]) = 0x00000000;
  *((int *)&__m256_op1[3]) = 0x00000000;
  *((int *)&__m256_op1[2]) = 0x00000000;
  *((int *)&__m256_op1[1]) = 0x00000000;
  *((int *)&__m256_op1[0]) = 0x00000000;
  *((int *)&__m256_op2[7]) = 0x00000000;
  *((int *)&__m256_op2[6]) = 0x00000000;
  *((int *)&__m256_op2[5]) = 0x00000000;
  *((int *)&__m256_op2[4]) = 0x00000000;
  *((int *)&__m256_op2[3]) = 0x00000000;
  *((int *)&__m256_op2[2]) = 0x00000000;
  *((int *)&__m256_op2[1]) = 0x00000000;
  *((int *)&__m256_op2[0]) = 0x00000000;
  *((int *)&__m256_result[7]) = 0x80000000;
  *((int *)&__m256_result[6]) = 0xffff8000;
  *((int *)&__m256_result[5]) = 0x80000000;
  *((int *)&__m256_result[4]) = 0x80000000;
  *((int *)&__m256_result[3]) = 0x80000000;
  *((int *)&__m256_result[2]) = 0xffff8000;
  *((int *)&__m256_result[1]) = 0x80000000;
  *((int *)&__m256_result[0]) = 0x80000000;
  __m256_out = __lasx_xvfmsub_s (__m256_op0, __m256_op1, __m256_op2);
  ASSERTEQ_32 (__LINE__, __m256_result, __m256_out);

  *((int *)&__m256_op0[7]) = 0x00000000;
  *((int *)&__m256_op0[6]) = 0x00000000;
  *((int *)&__m256_op0[5]) = 0x00000000;
  *((int *)&__m256_op0[4]) = 0x00000000;
  *((int *)&__m256_op0[3]) = 0x00000000;
  *((int *)&__m256_op0[2]) = 0x00000000;
  *((int *)&__m256_op0[1]) = 0x00000000;
  *((int *)&__m256_op0[0]) = 0x00000000;
  *((int *)&__m256_op1[7]) = 0x02020102;
  *((int *)&__m256_op1[6]) = 0x02020102;
  *((int *)&__m256_op1[5]) = 0x02020102;
  *((int *)&__m256_op1[4]) = 0x02020102;
  *((int *)&__m256_op1[3]) = 0x02020102;
  *((int *)&__m256_op1[2]) = 0x02020102;
  *((int *)&__m256_op1[1]) = 0x02020102;
  *((int *)&__m256_op1[0]) = 0x02020102;
  *((int *)&__m256_op2[7]) = 0x00000000;
  *((int *)&__m256_op2[6]) = 0x00000000;
  *((int *)&__m256_op2[5]) = 0x00000000;
  *((int *)&__m256_op2[4]) = 0x00000000;
  *((int *)&__m256_op2[3]) = 0x00000000;
  *((int *)&__m256_op2[2]) = 0x00000000;
  *((int *)&__m256_op2[1]) = 0x00000000;
  *((int *)&__m256_op2[0]) = 0x00000000;
  *((int *)&__m256_result[7]) = 0x00000000;
  *((int *)&__m256_result[6]) = 0x00000000;
  *((int *)&__m256_result[5]) = 0x00000000;
  *((int *)&__m256_result[4]) = 0x00000000;
  *((int *)&__m256_result[3]) = 0x00000000;
  *((int *)&__m256_result[2]) = 0x00000000;
  *((int *)&__m256_result[1]) = 0x00000000;
  *((int *)&__m256_result[0]) = 0x00000000;
  __m256_out = __lasx_xvfmsub_s (__m256_op0, __m256_op1, __m256_op2);
  ASSERTEQ_32 (__LINE__, __m256_result, __m256_out);

  *((int *)&__m256_op0[7]) = 0x00000000;
  *((int *)&__m256_op0[6]) = 0x00000008;
  *((int *)&__m256_op0[5]) = 0x00000000;
  *((int *)&__m256_op0[4]) = 0x00000008;
  *((int *)&__m256_op0[3]) = 0x00000000;
  *((int *)&__m256_op0[2]) = 0x00000008;
  *((int *)&__m256_op0[1]) = 0x00000000;
  *((int *)&__m256_op0[0]) = 0x00000008;
  *((int *)&__m256_op1[7]) = 0x00000000;
  *((int *)&__m256_op1[6]) = 0x00000008;
  *((int *)&__m256_op1[5]) = 0x00000000;
  *((int *)&__m256_op1[4]) = 0x00000008;
  *((int *)&__m256_op1[3]) = 0x00000000;
  *((int *)&__m256_op1[2]) = 0x00000008;
  *((int *)&__m256_op1[1]) = 0x00000000;
  *((int *)&__m256_op1[0]) = 0x00000008;
  *((int *)&__m256_op2[7]) = 0x00000000;
  *((int *)&__m256_op2[6]) = 0x00000000;
  *((int *)&__m256_op2[5]) = 0x00000001;
  *((int *)&__m256_op2[4]) = 0x00000001;
  *((int *)&__m256_op2[3]) = 0x00000000;
  *((int *)&__m256_op2[2]) = 0x00000000;
  *((int *)&__m256_op2[1]) = 0x00000001;
  *((int *)&__m256_op2[0]) = 0x00000001;
  *((int *)&__m256_result[7]) = 0x00000000;
  *((int *)&__m256_result[6]) = 0x00000000;
  *((int *)&__m256_result[5]) = 0x80000001;
  *((int *)&__m256_result[4]) = 0x80000001;
  *((int *)&__m256_result[3]) = 0x00000000;
  *((int *)&__m256_result[2]) = 0x00000000;
  *((int *)&__m256_result[1]) = 0x80000001;
  *((int *)&__m256_result[0]) = 0x80000001;
  __m256_out = __lasx_xvfmsub_s (__m256_op0, __m256_op1, __m256_op2);
  ASSERTEQ_32 (__LINE__, __m256_result, __m256_out);

  *((int *)&__m256_op0[7]) = 0x00000000;
  *((int *)&__m256_op0[6]) = 0x00000000;
  *((int *)&__m256_op0[5]) = 0x00000000;
  *((int *)&__m256_op0[4]) = 0x00000040;
  *((int *)&__m256_op0[3]) = 0x00000000;
  *((int *)&__m256_op0[2]) = 0x00000000;
  *((int *)&__m256_op0[1]) = 0x00000000;
  *((int *)&__m256_op0[0]) = 0x00000040;
  *((int *)&__m256_op1[7]) = 0x00000000;
  *((int *)&__m256_op1[6]) = 0x00000000;
  *((int *)&__m256_op1[5]) = 0x00000000;
  *((int *)&__m256_op1[4]) = 0x00000000;
  *((int *)&__m256_op1[3]) = 0x00000000;
  *((int *)&__m256_op1[2]) = 0x00000000;
  *((int *)&__m256_op1[1]) = 0x00000000;
  *((int *)&__m256_op1[0]) = 0x00000000;
  *((int *)&__m256_op2[7]) = 0x40404040;
  *((int *)&__m256_op2[6]) = 0x40404040;
  *((int *)&__m256_op2[5]) = 0x40404040;
  *((int *)&__m256_op2[4]) = 0x40404040;
  *((int *)&__m256_op2[3]) = 0x40404040;
  *((int *)&__m256_op2[2]) = 0x40404040;
  *((int *)&__m256_op2[1]) = 0x40404040;
  *((int *)&__m256_op2[0]) = 0x40404040;
  *((int *)&__m256_result[7]) = 0xc0404040;
  *((int *)&__m256_result[6]) = 0xc0404040;
  *((int *)&__m256_result[5]) = 0xc0404040;
  *((int *)&__m256_result[4]) = 0xc0404040;
  *((int *)&__m256_result[3]) = 0xc0404040;
  *((int *)&__m256_result[2]) = 0xc0404040;
  *((int *)&__m256_result[1]) = 0xc0404040;
  *((int *)&__m256_result[0]) = 0xc0404040;
  __m256_out = __lasx_xvfmsub_s (__m256_op0, __m256_op1, __m256_op2);
  ASSERTEQ_32 (__LINE__, __m256_result, __m256_out);

  return 0;
}
