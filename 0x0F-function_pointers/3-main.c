#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - function
 * @argc: count
 * @argv: vector
 * Return: int
 */

int main(int argc, char *argv[])
{
	int a, b;
	int (*cal_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	cal_func = get_op_func(argv[2]);

	if (cal_func == NULL || (argv[2][1] != '\0'))
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", cal_func(a, b));

	return (0);
}
