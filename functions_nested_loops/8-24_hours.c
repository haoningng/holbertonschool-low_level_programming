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

	while (hour < 25)
	{
		min = 0;
		while (min < 61)
		{
			printf("%02d:%02d", hour, min);
			min++;
		}
		hour++;
	}
}
