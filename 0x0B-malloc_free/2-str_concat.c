#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - function
 * for concatinating
 * @s1: first string
 * @s2: second string
 * Return: character pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, t, j = 0, count1 = 1, count2 = 1, total = 0;

	if (s1 == NULL)
		count1 = 0;
	if (s2 == NULL)
		count2 = 0;

	while (s1[j] != '\0')
	{
		count1++;
		j++;
	}

	j = 0;
	while (s2[j] != '\0')
	{
		count2++;
		j++;
	}

	total = count1 + count2;

	str = malloc(sizeof(char) * (total - 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < count1 - 1; i++)
		str[i] = s1[i];

	for (t = 0, j = i; t < count2; t++, j++)
		str[j] = s2[t];

	return (str);
}
