/* { dg-do compile } */
/* { dg-options "-fharden-control-flow-redundancy -fhardcfr-check-noreturn-calls=never -fdump-tree-hardcfr -ffat-lto-objects" } */

/* Check that C++ does NOT make for implicit nothrow in noreturn
   handling.  Expected results for =never and =nothrow are the same,
   since the functions are not nothrow.  */

#include "harden-cfr-noret-no-nothrow.C"

/* All 3 noreturn calls.  */
/* { dg-final { scan-tree-dump-times "Associated cleanup" 3 "hardcfr" } } */
/* Out-of-line checks in f.  */
/* { dg-final { scan-tree-dump-times "Inserting out-of-line check in block \[0-9]*'s edge to exit" 1 "hardcfr" } } */
/* { dg-final { scan-tree-dump-times "Inserting out-of-line check before stmt" 1 "hardcfr" } } */
/* { dg-final { scan-tree-dump-times "hardcfr_check" 2 "hardcfr" } } */
/* Inline checks in h and h2.  */
/* { dg-final { scan-tree-dump-times "Inserting inline check before stmt" 2 "hardcfr" } } */
/* { dg-final { scan-tree-dump-times "__builtin_trap" 2 "hardcfr" } } */
