#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: none
 */
void jack_bauer(void)
{
	int min, hour = 0;

	while (hour < 24)
	{
		min = 0;
		while (min < 60)
		{
			printf("%02d:%02d\n", hour, min);
			min++;
		}
		hour++;
	}
}
