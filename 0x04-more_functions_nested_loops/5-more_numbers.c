#include "main.h"

/**
 * more_numbers - print 0 to 14 10times
 *
 * Return: void
 */

void more_numbers(void)
{
	int num;
	int count;

	count = 0;
	while (count < 10)
	{
	for (num = 0; num <= 14; num++)
	{
		if (num > 9)
			_putchar((num / 10 + '0');

		_putchar((num % 10) + '0');
	}
	_putchar('\n');
	count++;
	}
}
