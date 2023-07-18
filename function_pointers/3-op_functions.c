#include "3-calc.h"
/**
 * op_add - returns the sum of two integers
 * @a: int a
 * @b: int b
 * Return: int sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the subtraction of int a by int b
 * @a: int a
 * @b: int b
 * Return: int a minus int b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - return the multiplication of int a and int b
 * @a: int a
 * @b: int b
 * Return: int product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - return int a divided by int b
 * @a: int a
 * @b: int b
 * Return: int quotient of int a divided by int b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - return int a modulo int b
 * @a: int a
 * @b: int b
 * Return: int modulo of int a by int b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
