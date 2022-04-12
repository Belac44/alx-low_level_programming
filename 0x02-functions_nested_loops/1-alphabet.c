#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - secondary function
 *
 * Description: prints each letter of the alphabet, ending with a newline
 */
void print_alphabet(void)
{
    int i;
    for (i = 'a'; i <= 'z'; i++)
        _putchar(i);
    _putchar('\n');
}