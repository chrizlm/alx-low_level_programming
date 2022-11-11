#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function
 * string concatination until specified
 * length
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: character pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	int count1 = 1, count2 = 1, total = 0;
	int j = 0, t, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

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

	if ((int)n >= count2)
		total = (count1 + count2) - 1;
	else
		total = count1 + n;

	str = malloc(sizeof(*str) * total);

	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (t = 0; (i + t) < total; t++)
		str[i + t] = s2[t];
	str[i + t] = '\0';

	return (str);
}
