#include "main.h"
  
/**
 * _isdigit - function
 * checks for digits
 * @c: input value
 * Return: 0 or 1
 */

int _isdigit(int c)
{
        int l;

        for (l = 48 ; l <= 57 ; l++)
        {
                if (c == l)
                        return (1);
        }
        return (0);
}
