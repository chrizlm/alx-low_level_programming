#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - gives change
 * @argc: count
 * @argv: vector
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int coin, change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argv[1][0] == '-')
	{
		printf("0\n");
		return (0);
	}

	coin = atoi(argv[1]);
	change += coin / 25;
	coin = coin % 25;
	change += coin / 10;
	coin = coin % 10;
	change += coin / 5;
	coin = coin % 5;
	change += coin / 2;
	coin = coin % 2;
	change += coin / 1;

	printf("%d\n", change);
	return (0);
}
