#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Return: return 0 if successful
 */
int main(void)
{
	int n;
	int rem;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	rem = n % 10;
	if (rem < 6 && rem != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n,rem);
	else if (rem > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, rem);
	else
		printf("Last digit of %d is %d and is 0\n", n, rem);
	return (0);
}
