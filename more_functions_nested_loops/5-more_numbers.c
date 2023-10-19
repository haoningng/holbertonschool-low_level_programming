#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *
 * Return: none
 */
void more_numbers(void)
{
	int num = 0, times = 0, last_digit = num % 10;

	while (times < 10)
	{
		while (num < 15)
		{
			if (num > 9)
			{
				_putchar('0' + 1);
			}
			_putchar('0' + last_digit);
			num++;
			last_digit = num % 10;
		}
		_putchar('\n');
		times++;
	}
}
