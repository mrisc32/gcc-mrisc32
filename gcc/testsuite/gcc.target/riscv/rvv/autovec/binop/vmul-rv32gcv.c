/* { dg-do compile } */
/* { dg-additional-options "-std=c99 -fno-vect-cost-model -march=rv32gcv_zvfh -mabi=ilp32d --param=riscv-autovec-preference=fixed-vlmax -ffast-math" } */

#include "vmul-template.h"

/* { dg-final { scan-assembler-times {\tvmul\.vv} 16 } } */
