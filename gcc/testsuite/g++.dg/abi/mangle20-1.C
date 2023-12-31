// { dg-do compile }
// { dg-options "-fabi-version=2 -fabi-compat-version=2" }

// Copyright (C) 2003 Free Software Foundation, Inc.
// Contributed by Nathan Sidwell 15 Dec 2003 <nathan@codesourcery.com>

// PR 9043
// mangled array types in templates

template <int I> void f(int (*)[2]) {}
template <int I> void g(int (*)[I+2]) {}

static const int I=1;
static const int J=2;

template void f<1>(int (*)[2]);
//  { dg-final { scan-assembler "\n_?_Z1fILi1EEvPA2_i\[: \t\n\]" } }
template void g<1>(int (*)[3]);
//  { dg-final { scan-assembler "\n_?_Z1gILi1EEvPAplT_Li2E_i\[: \t\n\]" } }
