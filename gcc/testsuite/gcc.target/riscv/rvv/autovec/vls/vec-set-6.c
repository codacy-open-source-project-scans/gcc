/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh_zvl4096b -mabi=lp64d -O3 -fno-schedule-insns -fno-schedule-insns2 -mrvv-max-lmul=m8" } */

#include "def.h"

DEF_VEC_SET_IMM_INDEX (vec_set, v1uhi, uint16_t, 0)
DEF_VEC_SET_IMM_INDEX (vec_set, v2uhi, uint16_t, 0)
DEF_VEC_SET_IMM_INDEX (vec_set, v4uhi, uint16_t, 0)
DEF_VEC_SET_IMM_INDEX (vec_set, v8uhi, uint16_t, 0)
DEF_VEC_SET_IMM_INDEX (vec_set, v16uhi, uint16_t, 0)
DEF_VEC_SET_IMM_INDEX (vec_set, v32uhi, uint16_t, 0)
DEF_VEC_SET_IMM_INDEX (vec_set, v64uhi, uint16_t, 0)
DEF_VEC_SET_IMM_INDEX (vec_set, v128uhi, uint16_t, 0)
DEF_VEC_SET_IMM_INDEX (vec_set, v256uhi, uint16_t, 0)
DEF_VEC_SET_IMM_INDEX (vec_set, v512uhi, uint16_t, 0)
DEF_VEC_SET_IMM_INDEX (vec_set, v1024uhi, uint16_t, 0)
DEF_VEC_SET_IMM_INDEX (vec_set, v2048uhi, uint16_t, 0)

DEF_VEC_SET_IMM_INDEX (vec_set, v2uhi, uint16_t, 1)
DEF_VEC_SET_IMM_INDEX (vec_set, v4uhi, uint16_t, 1)
DEF_VEC_SET_IMM_INDEX (vec_set, v8uhi, uint16_t, 1)
DEF_VEC_SET_IMM_INDEX (vec_set, v16uhi, uint16_t, 1)
DEF_VEC_SET_IMM_INDEX (vec_set, v32uhi, uint16_t, 1)
DEF_VEC_SET_IMM_INDEX (vec_set, v64uhi, uint16_t, 1)
DEF_VEC_SET_IMM_INDEX (vec_set, v128uhi, uint16_t, 1)
DEF_VEC_SET_IMM_INDEX (vec_set, v256uhi, uint16_t, 1)
DEF_VEC_SET_IMM_INDEX (vec_set, v512uhi, uint16_t, 1)
DEF_VEC_SET_IMM_INDEX (vec_set, v1024uhi, uint16_t, 1)
DEF_VEC_SET_IMM_INDEX (vec_set, v2048uhi, uint16_t, 1)

/* { dg-final { scan-assembler-not {csrr} } } */
/* { dg-final { scan-assembler-times {vmv\.s\.x\s+v[0-9]+,\s*[atx][0-9]+} 11 } } */
/* { dg-final { scan-assembler-times {vslideup\.vi\s+v[0-9]+,\s*v[0-9]+,\s*1} 11 } } */
