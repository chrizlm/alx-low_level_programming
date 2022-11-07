#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - multiply args
 * @argc: count
 * @argv: vector
 * Return: 0
 */

int main(int argc, char *argv[])
{

	if (argc > 2)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	else 
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
