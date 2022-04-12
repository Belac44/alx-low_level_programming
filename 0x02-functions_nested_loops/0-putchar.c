#include <stdio.h>
#include "main.h"

/**
 * main - starting point
 *
 * Return: return 0 if successful
 */

int main(void)
{
    int i;
    char name[] = "_putchar";
    for (i = 0;i<9;i++)
        _putchar(name[i]);
    _putchar('\n');
    return (0);
}