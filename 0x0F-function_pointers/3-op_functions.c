#include "3-calc"
#include <stdio.h>

/**
 * op_add - addition function
 * @a: first input
 * @b: second input
 * Return: int
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction function
 * @a: first input
 * @b: second input
 * Return: int 
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication function
 * @a: first input
 * @b: second input
 * Return: int 
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divition function
 * @a: first input
 * @b: second input
 * Return: int 
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulus function
 * @a: first input
 * @b: second input
 * Return: int 
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		error(100);
	}
	return (a % b);
}
