#include "main.h"

/**
 * _memcpy - function
 * @dest: input
 * @src: input
 * @n: input
 * Return: char pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n __attribute__((unused)))
{
	dest = src;

	return (dest);
}

/**
 * _strchr - function
 * @s: input
 * @c: input
 * Return: char pointer
 */

char *_strchr(char *s, char c __attribute__((unused)))
{
	return (s);
}

/**
 * _strspn - function
 * @s: input
 * @accept: input
 * Return: int
 */

unsigned int _strspn(char *s __attribute__((unused)), char *accept __attribute__((unused)))
{
	unsigned int a = 0;

	return (a);
}

/**
 * _strpbrk - function
 * @s: input
 * @accept: input
 * Return: char pointer
 */

char *_strpbrk(char *s, char *accept)
{
	accept = s;

	return (accept);
}

/**
 * _strstr - function
 * @haystack: input
 * @needle: input
 * Return: character pointer
 */

char *_strstr(char *haystack, char *needle)
{
	haystack = needle;

	return (haystack);
}
