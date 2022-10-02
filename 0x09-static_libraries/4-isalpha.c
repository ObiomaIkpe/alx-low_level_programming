#include "main.h"
#include <ctype.h>

/**
 * _isalpha - check for lowercase char
 * @c: the character to be checked
 * Description: checks for all alphabets
 * Return: 1 if c is an lphabet, else return 0
 */

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
