#include <stdio.h>
#include "main.h"

/**
 * times_table - prints the 9 times table starting with 0
 *
 * Return: none
 */
void times_table(void)
{
	int num = 0, increment = 0, rows = 0, columns = 0;

	/* print each row */
	while (rows < 10)
	{
		/* reset num and columns */
		num = 0;
		columns = 0;
		/* print each coloumn */
		while (columns < 10)
		{
			/* print space(s) from second column onwards */
			if (columns > 0)
			{
				if (num < 10)
				{
					printf("  ");
				}
				else
				{
					printf(" ");
				}
			}
			/* print the number */
			printf("%i", num);
			/* print comma in all columns except last column */
			if (columns < 9)
			{
				printf(",");
			}
			/* go to next column */
			columns++;
			/* increase the number by corresponding increment */
			num = num + increment;
		}
		printf("\n");
		increment++;
		rows++;
	}
}
