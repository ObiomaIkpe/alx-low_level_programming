#include "main.h"

/**
 * print_last_digit - prints the last digits of any number
 * @c: the argument
 * author:ObiomaIkpe
 * Return: returns the last digit
 */


int print_last_digit(int c)
{
	int last = c % 10;

	if (c < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
