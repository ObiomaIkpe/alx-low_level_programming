#include "main.h"
#include <ctype.h>

/**
 * _isalpha - Checks for uppercase char
 * @c: Takes int as an argument
 * Description: checks for uppercase char
 * Return: 1 if "c" is a letter, loweercaseor upper case
 * else return 0
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (( >= 'A' && c <= 'Z'));
}
