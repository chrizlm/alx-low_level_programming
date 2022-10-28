#include "main.h"

/**
 * _strcmp - function
 * compares string
 * @s1: string one
 * @s2: string two
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int n = 0, count1 = 0, count2 = 0, t = 0;

	while (s1[n] != '\0')
	{
		count1 += s1[n];
		n++;
	}
	while (s2[t] != '\0')
	{
		count2 += s2[t];
		t++;
	}
	return (count1 - count2);
}
