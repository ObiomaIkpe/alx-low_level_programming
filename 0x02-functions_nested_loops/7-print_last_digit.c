#include "main.h"

/**
 * print_last_digit - prints the last digits of any number
 * @c: the argument
 * author:ObiomaIkpe
 * Return: returns the last digit
 */


int print_last_digit(int c)
{
	if (c >= 0 && c <= 9)
		return(c);
	else
	{
		c = _abs(c % 10);
		return(c);
	}

}
