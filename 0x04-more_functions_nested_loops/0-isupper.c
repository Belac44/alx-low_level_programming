#include <stdio.h>
#include <ctype.h>
/**
 * _isupper - checks if a char is upper
 * @c: The character to evaluate
 *
 * Return: On success 1.
 * 
 */

int _isupper(int c)
{
    if (isupper(c))
        return (1);
    return (0);
}
