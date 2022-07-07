#ifndef CALC_H
#define CALC_H

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/* function that returns the sum of `a` and `b` */
int op_add(int a, int b);

/* function that returns the difference of `a` and `b` */
int op_sub(int a, int b);

/* function that returns the product of `a` and `b` */
int op_mul(int a, int b);

/* function that returns the quotient of `a` and `b` */
int op_div(int a, int b);

/* function that returns the modulus of `a` and `b` */
int op_mod(int a, int b);

/* function that returns the operation associated with `op` */
int (*get_op_func(char *s))(int, int);

#endif
