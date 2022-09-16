#include "main.h"

/**
 * _isdigit - checks for digits
 * @c: takes integer c as parameter
 * 
 * Return: 1 if c is a number and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
