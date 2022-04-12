#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * main - check the code.
 *
 * 
 * 
 * Return: Always 0.
 */
int _isalpha(int c)
{
    if (isalpha(c))
        return 1;
    return 0;
}