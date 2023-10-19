#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *
 * Return: none
 */
void more_numbers(void)
{
	int num = 0, times = 0;

	while (times < 10)
	{
		while (num < 15)
		{
			_putchar('0' + num);
			num++;
		}
		_putchar('\n');
		times++;
	}
}
