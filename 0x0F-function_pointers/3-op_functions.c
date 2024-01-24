#include "3-calc.h"

/**
 * op_add - addition of two numbers
 * @a: augend
 * @b: addend
 *
 * Return: sum
 **/
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtraction of two numbers
 * @a: minuend
 * @b: subtrahend
 *
 * Return: difference
 **/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication of two numbers
 * @a: multiplicand
 * @b: multiplier
 *
 * Return: product
 **/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of two numbers
 * @a: dividend
 * @b: divisor
 *
 * Return: quotient
 **/
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulus of two numbers
 * @a: dividend
 * @b: divisor
 *
 * Return: remainder
 **/
int op_mod(int a, int b)
{
	return (a % b);
}
