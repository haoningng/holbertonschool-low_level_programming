#include <stdio.h>
#include "main.h"

void print(int i);

/**
 * main - Entry point
 *
 * Return: 0 if succesful
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i < 100)
			print(i);
			printf(" ");
		else
		{
			print(i);
		}
	}
	printf("\n");
	return (0);
}

/**
 * print - print the integer
 * @i: integer to be printed
 *
 * Return: none
 */
void print(int i)
{
	if (i % 3 == 0 && i % 5 == 0)
	{
		printf("FizzBuzz");
	}
	else if (i % 3 == 0)
	{
		printf("Fizz");
	}
	else if (i % 5 == 0)
	{
		printf("Buzz");
	}
	else
	{
		printf("%d", i);
	}
}
