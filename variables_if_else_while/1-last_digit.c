#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Return: 0 if succesful
 */
int main(void)
{
	int n;
	int last_d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_d = n % 10;
	if (last_d > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, last_d);
	}
	else if (last_d == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, last_d);
	}
	else if (last_d < 6 && last_d != 0)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last_d);
	}
	return (0);
}
