#include <stdio.h>
#include "main.h"
#define UNUSED(argc) (int)(argc)

/**
* main - function
* @argc: count
* @argv: vector
* Return: 0
*/

int main(int argc, char* argv[])
{
	UNUSED(argc);

	printf("%s\n", argv[0]);
	return (0);
}
