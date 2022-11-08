#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <stdbool.h>

/**
 * check_if_num - function checks if arg is num
 * @arr: array element
 * Return: 0 or 1
 */

bool check_if_num(char *arr)
{
	int k;

	for (k = 0; arr[k]; k++)
	{
		if (arr[k] >= '0' && arr[k] <= '9')
			return (1);
	}
	return (0);
}

/**
 * main -function adds positive nums
 * @argc: count
 * @argv: vector
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int i, result = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}else
	{
		for (i = 1; i < argc; i++)
		{
			if (check_if_num(argv[i]))
				result += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", result);
	return (0);
}
