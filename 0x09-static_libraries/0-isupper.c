#include "main.h"
  
/**
 * _isupper - function
 * that checks for upper case lettes
 * @c: input value
 * Return: 0 or 1
 */

int _isupper(int c)
{
        int l;

        for (l = 65 ; l <= 90 ; l++)
        {
                if (c == l)
                        return (1);
        }
        return (0);
}
