#include "main.h"
  
/**
 * _strcpy - function that copies
 * @dest: input
 * @src: input
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
        int i, n = 0, count = 1;

        while (src[n] != 0)
        {
                count++;
                n++;
        }
        for (i = 0; i < count ; i++)
                dest[i] = src[i];
        return (dest);
}       
