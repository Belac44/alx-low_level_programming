#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _islower - check if upper or lowercase
 * 
 * c - 
 * 
 * Return: 1 if true and 0 otherwise
 */
int _islower(int c)
{
    if (islower(c))
        return (1);
    return (0);
}