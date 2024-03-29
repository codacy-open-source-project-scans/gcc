/* { dg-do compile } */
/* { dg-options "-O2 -mlittle-endian" } */

#pragma GCC aarch64 "arm_sve.h"

svint32_t
dupq (int x1, int x2, int x3, int x4)
{
  return svdupq_s32 (x1, x2, x3, x4);
}

/* { dg-final { scan-assembler-not {\tldr\t} } } */
/* { dg-final { scan-assembler {, [wx]0\n} } } */
/* { dg-final { scan-assembler {\tins\tv[0-9]+\.s\[1\], w2\n} } } */
/* { dg-final { scan-assembler {\tins\tv[0-9]+\.s\[1\], w3\n} } } */
/* { dg-final { scan-assembler {\tzip1\tv[0-9]+\.4s, v[0-9]+\.4s, v[0-9]+\.4s\n} } } */
/* { dg-final { scan-assembler {\tdup\tz[0-9]+\.q, z[0-9]+\.q\[0\]\n} } } */
