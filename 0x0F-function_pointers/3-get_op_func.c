#include "3-calc"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - function
 * @s: character operator
 * @a: int input
 * @b: int input
 * Return: int
 */

int (*get_op_func(char *s))(int a, int b)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;
	while (ops[i][0])
	{
		if (s == ops[i][0])
			return (ops[i][1](a, b));
		else
		{
			printf("Error\n");
			exit(99);
		}
		i++;
	}
	return (NULL);
}
