#include "main.h"

/**
 * print_last_digit - prints the last digits of any number
 * @c: the argument
 * author:ObiomaIkpe
 * Return: returns the last digit
 */


int print_last_digit(int c)
{
	if (n < 0)
		n = -n;

	lastDigit = n % 10;

	if (lastDigit < 0)
		lastDigit = -lastDigit;
	
	_putchar(lastDigit + '0');

	
		return(lastDigit);
	

}
