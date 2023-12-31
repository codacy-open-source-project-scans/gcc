/* Test trigraphs not supported in C23.  */
/* { dg-do compile } */
/* { dg-options "-std=c23 -pedantic-errors" } */

const char a[] = "??=??(??/??/??)??'??<??!??>??-";
const char b[] = "?""?=?""?(?""?/?""?/?""?)?""?'?""?<?""?!?""?>?""?-";

_Static_assert (sizeof a == sizeof b, "checking trigraph conversions");

/* { dg-prune-output "\\\[-Wtrigraphs" } */
