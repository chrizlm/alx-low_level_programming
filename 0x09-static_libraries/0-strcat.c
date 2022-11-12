#include "main.h"
  
/**
 * _strcat - function
 * concatinates strings
 * @dest: destination
 * @src: source string
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
        int n = 0, t = 0;

        while (dest[n] != '\0')
                n++;
        while (src[t] != '\0')
        {
                dest[n] = src[t];
                n++;
                t++;
        }
        dest[n] = '\0';
        return (dest);
}
