#include "main.h"

/**
 * print_last_digit - prints the last digits of any number
 * @c: the argument
 * author:ObiomaIkpe
 * Return: returns the last digit
 */


int print_last_digit(int);
{
	if (a >= 0 && a <= 9)
		return(a);
	else
	{
		a = _abs(a % 10);
		return(a);
	
