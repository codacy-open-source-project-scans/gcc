/* { dg-skip-if "" { *-*-* } { "-DSTREAMING_COMPATIBLE" } { "" } } */
/* { dg-final { check-function-bodies "**" "" "-DCHECK_ASM" { target { ! ilp32 } } } } */

#include "test_sve_acle.h"

/*
** ldnf1sb_u64_base:
**	ldnf1sb	z0\.d, p0/z, \[x0\]
**	ret
*/
TEST_LOAD (ldnf1sb_u64_base, svuint64_t, int8_t,
	   z0 = svldnf1sb_u64 (p0, x0),
	   z0 = svldnf1sb_u64 (p0, x0))

/*
** ldnf1sb_u64_index:
**	add	(x[0-9]+), x0, x1
**	ldnf1sb	z0\.d, p0/z, \[\1\]
**	ret
*/
TEST_LOAD (ldnf1sb_u64_index, svuint64_t, int8_t,
	   z0 = svldnf1sb_u64 (p0, x0 + x1),
	   z0 = svldnf1sb_u64 (p0, x0 + x1))

/*
** ldnf1sb_u64_1:
**	ldnf1sb	z0\.d, p0/z, \[x0, #1, mul vl\]
**	ret
*/
TEST_LOAD (ldnf1sb_u64_1, svuint64_t, int8_t,
	   z0 = svldnf1sb_u64 (p0, x0 + svcntd ()),
	   z0 = svldnf1sb_u64 (p0, x0 + svcntd ()))

/*
** ldnf1sb_u64_7:
**	ldnf1sb	z0\.d, p0/z, \[x0, #7, mul vl\]
**	ret
*/
TEST_LOAD (ldnf1sb_u64_7, svuint64_t, int8_t,
	   z0 = svldnf1sb_u64 (p0, x0 + svcntd () * 7),
	   z0 = svldnf1sb_u64 (p0, x0 + svcntd () * 7))

/*
** ldnf1sb_u64_8:
**	incb	x0
**	ldnf1sb	z0\.d, p0/z, \[x0\]
**	ret
*/
TEST_LOAD (ldnf1sb_u64_8, svuint64_t, int8_t,
	   z0 = svldnf1sb_u64 (p0, x0 + svcntd () * 8),
	   z0 = svldnf1sb_u64 (p0, x0 + svcntd () * 8))

/*
** ldnf1sb_u64_m1:
**	ldnf1sb	z0\.d, p0/z, \[x0, #-1, mul vl\]
**	ret
*/
TEST_LOAD (ldnf1sb_u64_m1, svuint64_t, int8_t,
	   z0 = svldnf1sb_u64 (p0, x0 - svcntd ()),
	   z0 = svldnf1sb_u64 (p0, x0 - svcntd ()))

/*
** ldnf1sb_u64_m8:
**	ldnf1sb	z0\.d, p0/z, \[x0, #-8, mul vl\]
**	ret
*/
TEST_LOAD (ldnf1sb_u64_m8, svuint64_t, int8_t,
	   z0 = svldnf1sb_u64 (p0, x0 - svcntd () * 8),
	   z0 = svldnf1sb_u64 (p0, x0 - svcntd () * 8))

/*
** ldnf1sb_u64_m9:
**	decd	x0, all, mul #9
**	ldnf1sb	z0\.d, p0/z, \[x0\]
**	ret
*/
TEST_LOAD (ldnf1sb_u64_m9, svuint64_t, int8_t,
	   z0 = svldnf1sb_u64 (p0, x0 - svcntd () * 9),
	   z0 = svldnf1sb_u64 (p0, x0 - svcntd () * 9))

/*
** ldnf1sb_vnum_u64_0:
**	ldnf1sb	z0\.d, p0/z, \[x0\]
**	ret
*/
TEST_LOAD (ldnf1sb_vnum_u64_0, svuint64_t, int8_t,
	   z0 = svldnf1sb_vnum_u64 (p0, x0, 0),
	   z0 = svldnf1sb_vnum_u64 (p0, x0, 0))

/*
** ldnf1sb_vnum_u64_1:
**	ldnf1sb	z0\.d, p0/z, \[x0, #1, mul vl\]
**	ret
*/
TEST_LOAD (ldnf1sb_vnum_u64_1, svuint64_t, int8_t,
	   z0 = svldnf1sb_vnum_u64 (p0, x0, 1),
	   z0 = svldnf1sb_vnum_u64 (p0, x0, 1))

/*
** ldnf1sb_vnum_u64_7:
**	ldnf1sb	z0\.d, p0/z, \[x0, #7, mul vl\]
**	ret
*/
TEST_LOAD (ldnf1sb_vnum_u64_7, svuint64_t, int8_t,
	   z0 = svldnf1sb_vnum_u64 (p0, x0, 7),
	   z0 = svldnf1sb_vnum_u64 (p0, x0, 7))

/*
** ldnf1sb_vnum_u64_8:
**	incb	x0
**	ldnf1sb	z0\.d, p0/z, \[x0\]
**	ret
*/
TEST_LOAD (ldnf1sb_vnum_u64_8, svuint64_t, int8_t,
	   z0 = svldnf1sb_vnum_u64 (p0, x0, 8),
	   z0 = svldnf1sb_vnum_u64 (p0, x0, 8))

/*
** ldnf1sb_vnum_u64_m1:
**	ldnf1sb	z0\.d, p0/z, \[x0, #-1, mul vl\]
**	ret
*/
TEST_LOAD (ldnf1sb_vnum_u64_m1, svuint64_t, int8_t,
	   z0 = svldnf1sb_vnum_u64 (p0, x0, -1),
	   z0 = svldnf1sb_vnum_u64 (p0, x0, -1))

/*
** ldnf1sb_vnum_u64_m8:
**	ldnf1sb	z0\.d, p0/z, \[x0, #-8, mul vl\]
**	ret
*/
TEST_LOAD (ldnf1sb_vnum_u64_m8, svuint64_t, int8_t,
	   z0 = svldnf1sb_vnum_u64 (p0, x0, -8),
	   z0 = svldnf1sb_vnum_u64 (p0, x0, -8))

/*
** ldnf1sb_vnum_u64_m9:
**	decd	x0, all, mul #9
**	ldnf1sb	z0\.d, p0/z, \[x0\]
**	ret
*/
TEST_LOAD (ldnf1sb_vnum_u64_m9, svuint64_t, int8_t,
	   z0 = svldnf1sb_vnum_u64 (p0, x0, -9),
	   z0 = svldnf1sb_vnum_u64 (p0, x0, -9))

/*
** ldnf1sb_vnum_u64_x1:
**	cntd	(x[0-9]+)
**	madd	(x[0-9]+), (?:x1, \1|\1, x1), x0
**	ldnf1sb	z0\.d, p0/z, \[\2\]
**	ret
*/
TEST_LOAD (ldnf1sb_vnum_u64_x1, svuint64_t, int8_t,
	   z0 = svldnf1sb_vnum_u64 (p0, x0, x1),
	   z0 = svldnf1sb_vnum_u64 (p0, x0, x1))
