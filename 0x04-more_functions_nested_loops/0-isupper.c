#include "main.h"
#include <ctype.h>

/**
 * _isupper - function to check for uppercase
 * @c: take integer c as parameter
 * Description: use isupper() to check
 * Return: 1 if c is lowercase and 0 otherwise
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
