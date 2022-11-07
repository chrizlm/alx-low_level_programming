#include <stdio.h>
#include "main.h"

/**
 * main - print number of args
 * @argc: count
 * @argv: vector
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 1)
		printf("%d\n", argc - 1);
	return (0);
}
