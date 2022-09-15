#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks for digits
 * @c: takes integer c as parameter
 * Return: 1 if c is an integer and 0 otherwise
 */
int _isdigit(int c)
{
	for (c = 0; c < 10; c++)
	{
		if (isdigit(c))
			return (1);
		else
			return (0);
	}
}
