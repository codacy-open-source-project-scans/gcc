/* { dg-do compile } */
/* { dg-options "-march=rv64if_zfhmin -mabi=lp64f -O" } */

_Float16 foo1 (_Float16 a, _Float16 b)
{
    /* { dg-final { scan-assembler-not {\mfmv\.h\M} } } */
    /* { dg-final { scan-assembler-times {\mfmv\.s\M} 1 } } */
    return b;
}
