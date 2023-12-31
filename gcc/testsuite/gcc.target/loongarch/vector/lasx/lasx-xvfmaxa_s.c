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
  *((int *)&__m256_op1[7]) = 0x00005555;
  *((int *)&__m256_op1[6]) = 0x00005555;
  *((int *)&__m256_op1[5]) = 0x000307ff;
  *((int *)&__m256_op1[4]) = 0xfe72e815;
  *((int *)&__m256_op1[3]) = 0x00005555;
  *((int *)&__m256_op1[2]) = 0x00005555;
  *((int *)&__m256_op1[1]) = 0x00000000;
  *((int *)&__m256_op1[0]) = 0x00000015;
  *((int *)&__m256_result[7]) = 0x00005555;
  *((int *)&__m256_result[6]) = 0x00005555;
  *((int *)&__m256_result[5]) = 0x000307ff;
  *((int *)&__m256_result[4]) = 0xfe72e815;
  *((int *)&__m256_result[3]) = 0x00005555;
  *((int *)&__m256_result[2]) = 0x00005555;
  *((int *)&__m256_result[1]) = 0x00000000;
  *((int *)&__m256_result[0]) = 0x00000015;
  __m256_out = __lasx_xvfmaxa_s (__m256_op0, __m256_op1);
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
  *((int *)&__m256_result[7]) = 0x00000000;
  *((int *)&__m256_result[6]) = 0x00000000;
  *((int *)&__m256_result[5]) = 0x00000000;
  *((int *)&__m256_result[4]) = 0x00000000;
  *((int *)&__m256_result[3]) = 0x00000000;
  *((int *)&__m256_result[2]) = 0x00000000;
  *((int *)&__m256_result[1]) = 0x00000000;
  *((int *)&__m256_result[0]) = 0x00000000;
  __m256_out = __lasx_xvfmaxa_s (__m256_op0, __m256_op1);
  ASSERTEQ_32 (__LINE__, __m256_result, __m256_out);

  *((int *)&__m256_op0[7]) = 0x00ff00ff;
  *((int *)&__m256_op0[6]) = 0x00ff00ff;
  *((int *)&__m256_op0[5]) = 0x00ff00ff;
  *((int *)&__m256_op0[4]) = 0x000c0000;
  *((int *)&__m256_op0[3]) = 0x00ff00ff;
  *((int *)&__m256_op0[2]) = 0x00ff00ff;
  *((int *)&__m256_op0[1]) = 0x00ff00ff;
  *((int *)&__m256_op0[0]) = 0x00040000;
  *((int *)&__m256_op1[7]) = 0x00000000;
  *((int *)&__m256_op1[6]) = 0x00000000;
  *((int *)&__m256_op1[5]) = 0x00000000;
  *((int *)&__m256_op1[4]) = 0x00000000;
  *((int *)&__m256_op1[3]) = 0x00000000;
  *((int *)&__m256_op1[2]) = 0x00000000;
  *((int *)&__m256_op1[1]) = 0x00000000;
  *((int *)&__m256_op1[0]) = 0x00000000;
  *((int *)&__m256_result[7]) = 0x00ff00ff;
  *((int *)&__m256_result[6]) = 0x00ff00ff;
  *((int *)&__m256_result[5]) = 0x00ff00ff;
  *((int *)&__m256_result[4]) = 0x000c0000;
  *((int *)&__m256_result[3]) = 0x00ff00ff;
  *((int *)&__m256_result[2]) = 0x00ff00ff;
  *((int *)&__m256_result[1]) = 0x00ff00ff;
  *((int *)&__m256_result[0]) = 0x00040000;
  __m256_out = __lasx_xvfmaxa_s (__m256_op0, __m256_op1);
  ASSERTEQ_32 (__LINE__, __m256_result, __m256_out);

  *((int *)&__m256_op0[7]) = 0x000007ff;
  *((int *)&__m256_op0[6]) = 0x000007ff;
  *((int *)&__m256_op0[5]) = 0x000007ff;
  *((int *)&__m256_op0[4]) = 0xfffff800;
  *((int *)&__m256_op0[3]) = 0x000007ff;
  *((int *)&__m256_op0[2]) = 0x000007ff;
  *((int *)&__m256_op0[1]) = 0x000007ff;
  *((int *)&__m256_op0[0]) = 0xfffff800;
  *((int *)&__m256_op1[7]) = 0xffffffff;
  *((int *)&__m256_op1[6]) = 0xffffffff;
  *((int *)&__m256_op1[5]) = 0x00000000;
  *((int *)&__m256_op1[4]) = 0x00000000;
  *((int *)&__m256_op1[3]) = 0xffffffff;
  *((int *)&__m256_op1[2]) = 0xffffffff;
  *((int *)&__m256_op1[1]) = 0x00000000;
  *((int *)&__m256_op1[0]) = 0x00000000;
  *((int *)&__m256_result[7]) = 0x000007ff;
  *((int *)&__m256_result[6]) = 0x000007ff;
  *((int *)&__m256_result[5]) = 0x000007ff;
  *((int *)&__m256_result[4]) = 0x00000000;
  *((int *)&__m256_result[3]) = 0x000007ff;
  *((int *)&__m256_result[2]) = 0x000007ff;
  *((int *)&__m256_result[1]) = 0x000007ff;
  *((int *)&__m256_result[0]) = 0x00000000;
  __m256_out = __lasx_xvfmaxa_s (__m256_op0, __m256_op1);
  ASSERTEQ_32 (__LINE__, __m256_result, __m256_out);

  *((int *)&__m256_op0[7]) = 0x00000000;
  *((int *)&__m256_op0[6]) = 0x00000001;
  *((int *)&__m256_op0[5]) = 0x001f00e0;
  *((int *)&__m256_op0[4]) = 0x1f1f1fff;
  *((int *)&__m256_op0[3]) = 0x00000000;
  *((int *)&__m256_op0[2]) = 0x00000001;
  *((int *)&__m256_op0[1]) = 0x001f00e0;
  *((int *)&__m256_op0[0]) = 0x1f1f1fff;
  *((int *)&__m256_op1[7]) = 0x80000000;
  *((int *)&__m256_op1[6]) = 0x80000000;
  *((int *)&__m256_op1[5]) = 0x80000000;
  *((int *)&__m256_op1[4]) = 0xff800000;
  *((int *)&__m256_op1[3]) = 0x80000000;
  *((int *)&__m256_op1[2]) = 0x80000000;
  *((int *)&__m256_op1[1]) = 0x80000000;
  *((int *)&__m256_op1[0]) = 0xff800000;
  *((int *)&__m256_result[7]) = 0x00000000;
  *((int *)&__m256_result[6]) = 0x00000001;
  *((int *)&__m256_result[5]) = 0x001f00e0;
  *((int *)&__m256_result[4]) = 0xff800000;
  *((int *)&__m256_result[3]) = 0x00000000;
  *((int *)&__m256_result[2]) = 0x00000001;
  *((int *)&__m256_result[1]) = 0x001f00e0;
  *((int *)&__m256_result[0]) = 0xff800000;
  __m256_out = __lasx_xvfmaxa_s (__m256_op0, __m256_op1);
  ASSERTEQ_32 (__LINE__, __m256_result, __m256_out);

  *((int *)&__m256_op0[7]) = 0x00000000;
  *((int *)&__m256_op0[6]) = 0x00000000;
  *((int *)&__m256_op0[5]) = 0x00000000;
  *((int *)&__m256_op0[4]) = 0x00000001;
  *((int *)&__m256_op0[3]) = 0x00000000;
  *((int *)&__m256_op0[2]) = 0x00000000;
  *((int *)&__m256_op0[1]) = 0x00000000;
  *((int *)&__m256_op0[0]) = 0x00000000;
  *((int *)&__m256_op1[7]) = 0x00000000;
  *((int *)&__m256_op1[6]) = 0x00000000;
  *((int *)&__m256_op1[5]) = 0x00000000;
  *((int *)&__m256_op1[4]) = 0x00000001;
  *((int *)&__m256_op1[3]) = 0x00000000;
  *((int *)&__m256_op1[2]) = 0x00000000;
  *((int *)&__m256_op1[1]) = 0x00000000;
  *((int *)&__m256_op1[0]) = 0x00000000;
  *((int *)&__m256_result[7]) = 0x00000000;
  *((int *)&__m256_result[6]) = 0x00000000;
  *((int *)&__m256_result[5]) = 0x00000000;
  *((int *)&__m256_result[4]) = 0x00000001;
  *((int *)&__m256_result[3]) = 0x00000000;
  *((int *)&__m256_result[2]) = 0x00000000;
  *((int *)&__m256_result[1]) = 0x00000000;
  *((int *)&__m256_result[0]) = 0x00000000;
  __m256_out = __lasx_xvfmaxa_s (__m256_op0, __m256_op1);
  ASSERTEQ_32 (__LINE__, __m256_result, __m256_out);

  *((int *)&__m256_op0[7]) = 0x00009fff;
  *((int *)&__m256_op0[6]) = 0x00002001;
  *((int *)&__m256_op0[5]) = 0x0000ffff;
  *((int *)&__m256_op0[4]) = 0x0000ffff;
  *((int *)&__m256_op0[3]) = 0x00009fff;
  *((int *)&__m256_op0[2]) = 0x00002001;
  *((int *)&__m256_op0[1]) = 0x0000ffff;
  *((int *)&__m256_op0[0]) = 0x0000ffff;
  *((int *)&__m256_op1[7]) = 0xfffeb683;
  *((int *)&__m256_op1[6]) = 0x9ffffd80;
  *((int *)&__m256_op1[5]) = 0xfffe97c0;
  *((int *)&__m256_op1[4]) = 0x20010001;
  *((int *)&__m256_op1[3]) = 0xfffeb683;
  *((int *)&__m256_op1[2]) = 0x9ffffd80;
  *((int *)&__m256_op1[1]) = 0xfffe97c0;
  *((int *)&__m256_op1[0]) = 0x20010001;
  *((int *)&__m256_result[7]) = 0x00009fff;
  *((int *)&__m256_result[6]) = 0x9ffffd80;
  *((int *)&__m256_result[5]) = 0x0000ffff;
  *((int *)&__m256_result[4]) = 0x20010001;
  *((int *)&__m256_result[3]) = 0x00009fff;
  *((int *)&__m256_result[2]) = 0x9ffffd80;
  *((int *)&__m256_result[1]) = 0x0000ffff;
  *((int *)&__m256_result[0]) = 0x20010001;
  __m256_out = __lasx_xvfmaxa_s (__m256_op0, __m256_op1);
  ASSERTEQ_32 (__LINE__, __m256_result, __m256_out);

  *((int *)&__m256_op0[7]) = 0x00000170;
  *((int *)&__m256_op0[6]) = 0x00000080;
  *((int *)&__m256_op0[5]) = 0xc0650055;
  *((int *)&__m256_op0[4]) = 0x0055ffab;
  *((int *)&__m256_op0[3]) = 0x00000170;
  *((int *)&__m256_op0[2]) = 0x00000080;
  *((int *)&__m256_op0[1]) = 0xc0650055;
  *((int *)&__m256_op0[0]) = 0x0055ffab;
  *((int *)&__m256_op1[7]) = 0x00000000;
  *((int *)&__m256_op1[6]) = 0x00000000;
  *((int *)&__m256_op1[5]) = 0x00000000;
  *((int *)&__m256_op1[4]) = 0x00000000;
  *((int *)&__m256_op1[3]) = 0x00000000;
  *((int *)&__m256_op1[2]) = 0x00000000;
  *((int *)&__m256_op1[1]) = 0x00000000;
  *((int *)&__m256_op1[0]) = 0x00000000;
  *((int *)&__m256_result[7]) = 0x00000000;
  *((int *)&__m256_result[6]) = 0x00000000;
  *((int *)&__m256_result[5]) = 0x00000000;
  *((int *)&__m256_result[4]) = 0x00000000;
  *((int *)&__m256_result[3]) = 0x00000000;
  *((int *)&__m256_result[2]) = 0x00000000;
  *((int *)&__m256_result[1]) = 0x00000000;
  *((int *)&__m256_result[0]) = 0x00000000;
  __m256_out = __lasx_xvfmina_s (__m256_op0, __m256_op1);
  ASSERTEQ_32 (__LINE__, __m256_result, __m256_out);

  *((int *)&__m256_op0[7]) = 0x00000000;
  *((int *)&__m256_op0[6]) = 0x00000000;
  *((int *)&__m256_op0[5]) = 0x00000000;
  *((int *)&__m256_op0[4]) = 0xffff0000;
  *((int *)&__m256_op0[3]) = 0x00000000;
  *((int *)&__m256_op0[2]) = 0x00000000;
  *((int *)&__m256_op0[1]) = 0x00000000;
  *((int *)&__m256_op0[0]) = 0xffff0000;
  *((int *)&__m256_op1[7]) = 0xfffefffe;
  *((int *)&__m256_op1[6]) = 0xfffefffe;
  *((int *)&__m256_op1[5]) = 0xfffefffe;
  *((int *)&__m256_op1[4]) = 0xfffefffe;
  *((int *)&__m256_op1[3]) = 0xfffefffe;
  *((int *)&__m256_op1[2]) = 0xfffefffe;
  *((int *)&__m256_op1[1]) = 0xfffefffe;
  *((int *)&__m256_op1[0]) = 0xfffefffe;
  *((int *)&__m256_result[7]) = 0x00000000;
  *((int *)&__m256_result[6]) = 0x00000000;
  *((int *)&__m256_result[5]) = 0x00000000;
  *((int *)&__m256_result[4]) = 0xffff0000;
  *((int *)&__m256_result[3]) = 0x00000000;
  *((int *)&__m256_result[2]) = 0x00000000;
  *((int *)&__m256_result[1]) = 0x00000000;
  *((int *)&__m256_result[0]) = 0xffff0000;
  __m256_out = __lasx_xvfmina_s (__m256_op0, __m256_op1);
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
  *((int *)&__m256_result[7]) = 0x00000000;
  *((int *)&__m256_result[6]) = 0x00000000;
  *((int *)&__m256_result[5]) = 0x00000000;
  *((int *)&__m256_result[4]) = 0x00000000;
  *((int *)&__m256_result[3]) = 0x00000000;
  *((int *)&__m256_result[2]) = 0x00000000;
  *((int *)&__m256_result[1]) = 0x00000000;
  *((int *)&__m256_result[0]) = 0x00000000;
  __m256_out = __lasx_xvfmina_s (__m256_op0, __m256_op1);
  ASSERTEQ_32 (__LINE__, __m256_result, __m256_out);

  *((int *)&__m256_op0[7]) = 0x00fe01f0;
  *((int *)&__m256_op0[6]) = 0x00010000;
  *((int *)&__m256_op0[5]) = 0x00000000;
  *((int *)&__m256_op0[4]) = 0x00c40086;
  *((int *)&__m256_op0[3]) = 0x00fe01f0;
  *((int *)&__m256_op0[2]) = 0x00010000;
  *((int *)&__m256_op0[1]) = 0x00000000;
  *((int *)&__m256_op0[0]) = 0x00c40086;
  *((int *)&__m256_op1[7]) = 0x00000000;
  *((int *)&__m256_op1[6]) = 0x82a54290;
  *((int *)&__m256_op1[5]) = 0x00000000;
  *((int *)&__m256_op1[4]) = 0x028aa700;
  *((int *)&__m256_op1[3]) = 0x00000000;
  *((int *)&__m256_op1[2]) = 0x82a54290;
  *((int *)&__m256_op1[1]) = 0x00000000;
  *((int *)&__m256_op1[0]) = 0x02a54287;
  *((int *)&__m256_result[7]) = 0x00000000;
  *((int *)&__m256_result[6]) = 0x00010000;
  *((int *)&__m256_result[5]) = 0x00000000;
  *((int *)&__m256_result[4]) = 0x00c40086;
  *((int *)&__m256_result[3]) = 0x00000000;
  *((int *)&__m256_result[2]) = 0x00010000;
  *((int *)&__m256_result[1]) = 0x00000000;
  *((int *)&__m256_result[0]) = 0x00c40086;
  __m256_out = __lasx_xvfmina_s (__m256_op0, __m256_op1);
  ASSERTEQ_32 (__LINE__, __m256_result, __m256_out);

  *((int *)&__m256_op0[7]) = 0x00000000;
  *((int *)&__m256_op0[6]) = 0x02a54290;
  *((int *)&__m256_op0[5]) = 0x00000000;
  *((int *)&__m256_op0[4]) = 0x0154dc84;
  *((int *)&__m256_op0[3]) = 0x00000000;
  *((int *)&__m256_op0[2]) = 0x02a54290;
  *((int *)&__m256_op0[1]) = 0x00000000;
  *((int *)&__m256_op0[0]) = 0x00000089;
  *((int *)&__m256_op1[7]) = 0x00000000;
  *((int *)&__m256_op1[6]) = 0x02a54290;
  *((int *)&__m256_op1[5]) = 0x00000000;
  *((int *)&__m256_op1[4]) = 0x0154dc84;
  *((int *)&__m256_op1[3]) = 0x00000000;
  *((int *)&__m256_op1[2]) = 0x02a54290;
  *((int *)&__m256_op1[1]) = 0x00000000;
  *((int *)&__m256_op1[0]) = 0x00000089;
  *((int *)&__m256_result[7]) = 0x00000000;
  *((int *)&__m256_result[6]) = 0x02a54290;
  *((int *)&__m256_result[5]) = 0x00000000;
  *((int *)&__m256_result[4]) = 0x0154dc84;
  *((int *)&__m256_result[3]) = 0x00000000;
  *((int *)&__m256_result[2]) = 0x02a54290;
  *((int *)&__m256_result[1]) = 0x00000000;
  *((int *)&__m256_result[0]) = 0x00000089;
  __m256_out = __lasx_xvfmina_s (__m256_op0, __m256_op1);
  ASSERTEQ_32 (__LINE__, __m256_result, __m256_out);

  *((int *)&__m256_op0[7]) = 0x00000000;
  *((int *)&__m256_op0[6]) = 0x04000000;
  *((int *)&__m256_op0[5]) = 0x00000000;
  *((int *)&__m256_op0[4]) = 0x00000000;
  *((int *)&__m256_op0[3]) = 0x00000000;
  *((int *)&__m256_op0[2]) = 0x04000000;
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
  *((int *)&__m256_result[7]) = 0x00000000;
  *((int *)&__m256_result[6]) = 0x00000000;
  *((int *)&__m256_result[5]) = 0x00000000;
  *((int *)&__m256_result[4]) = 0x00000000;
  *((int *)&__m256_result[3]) = 0x00000000;
  *((int *)&__m256_result[2]) = 0x00000000;
  *((int *)&__m256_result[1]) = 0x00000000;
  *((int *)&__m256_result[0]) = 0x00000000;
  __m256_out = __lasx_xvfmina_s (__m256_op0, __m256_op1);
  ASSERTEQ_32 (__LINE__, __m256_result, __m256_out);

  *((int *)&__m256_op0[7]) = 0x00100000;
  *((int *)&__m256_op0[6]) = 0x00100000;
  *((int *)&__m256_op0[5]) = 0x00100000;
  *((int *)&__m256_op0[4]) = 0x00100000;
  *((int *)&__m256_op0[3]) = 0x00100000;
  *((int *)&__m256_op0[2]) = 0x00100000;
  *((int *)&__m256_op0[1]) = 0x00100000;
  *((int *)&__m256_op0[0]) = 0x00100000;
  *((int *)&__m256_op1[7]) = 0x00000000;
  *((int *)&__m256_op1[6]) = 0x00000000;
  *((int *)&__m256_op1[5]) = 0x00000000;
  *((int *)&__m256_op1[4]) = 0x00000000;
  *((int *)&__m256_op1[3]) = 0x00000000;
  *((int *)&__m256_op1[2]) = 0x00000000;
  *((int *)&__m256_op1[1]) = 0x00000000;
  *((int *)&__m256_op1[0]) = 0x00000000;
  *((int *)&__m256_result[7]) = 0x00000000;
  *((int *)&__m256_result[6]) = 0x00000000;
  *((int *)&__m256_result[5]) = 0x00000000;
  *((int *)&__m256_result[4]) = 0x00000000;
  *((int *)&__m256_result[3]) = 0x00000000;
  *((int *)&__m256_result[2]) = 0x00000000;
  *((int *)&__m256_result[1]) = 0x00000000;
  *((int *)&__m256_result[0]) = 0x00000000;
  __m256_out = __lasx_xvfmina_s (__m256_op0, __m256_op1);
  ASSERTEQ_32 (__LINE__, __m256_result, __m256_out);

  *((int *)&__m256_op0[7]) = 0x00000000;
  *((int *)&__m256_op0[6]) = 0x00000000;
  *((int *)&__m256_op0[5]) = 0x00000000;
  *((int *)&__m256_op0[4]) = 0x00000010;
  *((int *)&__m256_op0[3]) = 0x00000000;
  *((int *)&__m256_op0[2]) = 0x00000000;
  *((int *)&__m256_op0[1]) = 0x00000000;
  *((int *)&__m256_op0[0]) = 0x00000010;
  *((int *)&__m256_op1[7]) = 0x00000000;
  *((int *)&__m256_op1[6]) = 0x00000000;
  *((int *)&__m256_op1[5]) = 0x00000000;
  *((int *)&__m256_op1[4]) = 0x00000000;
  *((int *)&__m256_op1[3]) = 0x00000000;
  *((int *)&__m256_op1[2]) = 0x00000000;
  *((int *)&__m256_op1[1]) = 0x00000000;
  *((int *)&__m256_op1[0]) = 0x00000000;
  *((int *)&__m256_result[7]) = 0x00000000;
  *((int *)&__m256_result[6]) = 0x00000000;
  *((int *)&__m256_result[5]) = 0x00000000;
  *((int *)&__m256_result[4]) = 0x00000000;
  *((int *)&__m256_result[3]) = 0x00000000;
  *((int *)&__m256_result[2]) = 0x00000000;
  *((int *)&__m256_result[1]) = 0x00000000;
  *((int *)&__m256_result[0]) = 0x00000000;
  __m256_out = __lasx_xvfmina_s (__m256_op0, __m256_op1);
  ASSERTEQ_32 (__LINE__, __m256_result, __m256_out);

  *((int *)&__m256_op0[7]) = 0x00000080;
  *((int *)&__m256_op0[6]) = 0x00000080;
  *((int *)&__m256_op0[5]) = 0x00000080;
  *((int *)&__m256_op0[4]) = 0x00000080;
  *((int *)&__m256_op0[3]) = 0x00000080;
  *((int *)&__m256_op0[2]) = 0x00000080;
  *((int *)&__m256_op0[1]) = 0x00000080;
  *((int *)&__m256_op0[0]) = 0x00000080;
  *((int *)&__m256_op1[7]) = 0x00000001;
  *((int *)&__m256_op1[6]) = 0x00000001;
  *((int *)&__m256_op1[5]) = 0x00000001;
  *((int *)&__m256_op1[4]) = 0x00000001;
  *((int *)&__m256_op1[3]) = 0x00000001;
  *((int *)&__m256_op1[2]) = 0x00000001;
  *((int *)&__m256_op1[1]) = 0x00000001;
  *((int *)&__m256_op1[0]) = 0x00000001;
  *((int *)&__m256_result[7]) = 0x00000001;
  *((int *)&__m256_result[6]) = 0x00000001;
  *((int *)&__m256_result[5]) = 0x00000001;
  *((int *)&__m256_result[4]) = 0x00000001;
  *((int *)&__m256_result[3]) = 0x00000001;
  *((int *)&__m256_result[2]) = 0x00000001;
  *((int *)&__m256_result[1]) = 0x00000001;
  *((int *)&__m256_result[0]) = 0x00000001;
  __m256_out = __lasx_xvfmina_s (__m256_op0, __m256_op1);
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
  *((int *)&__m256_result[7]) = 0x00000000;
  *((int *)&__m256_result[6]) = 0x00000000;
  *((int *)&__m256_result[5]) = 0x00000000;
  *((int *)&__m256_result[4]) = 0x00000000;
  *((int *)&__m256_result[3]) = 0x00000000;
  *((int *)&__m256_result[2]) = 0x00000000;
  *((int *)&__m256_result[1]) = 0x00000000;
  *((int *)&__m256_result[0]) = 0x00000000;
  __m256_out = __lasx_xvfmina_s (__m256_op0, __m256_op1);
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
  *((int *)&__m256_result[7]) = 0x00000000;
  *((int *)&__m256_result[6]) = 0x00000000;
  *((int *)&__m256_result[5]) = 0x00000000;
  *((int *)&__m256_result[4]) = 0x00000000;
  *((int *)&__m256_result[3]) = 0x00000000;
  *((int *)&__m256_result[2]) = 0x00000000;
  *((int *)&__m256_result[1]) = 0x00000000;
  *((int *)&__m256_result[0]) = 0x00000000;
  __m256_out = __lasx_xvfmina_s (__m256_op0, __m256_op1);
  ASSERTEQ_32 (__LINE__, __m256_result, __m256_out);

  return 0;
}
