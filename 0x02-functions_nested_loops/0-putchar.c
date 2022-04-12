#include <stdio.h>

int main(void)
{
    int i;
    char name[] = "_putchar";
    for (i = 0;i<9;i++)
        putchar(name[i]);
    putchar('\n');
    return (0);
}