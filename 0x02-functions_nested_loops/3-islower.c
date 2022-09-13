#include "main.h"
#include <ctype.h>

/**
 *_islower(int c) - check for lowercase char
 *@c - the character to be checked
 *Description: checks for lower case characters
 *Return: 1 if c is lowercase, else return 0
 */

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
