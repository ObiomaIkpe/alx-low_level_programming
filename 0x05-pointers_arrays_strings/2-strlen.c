#include "main.h"

/**
 * _strlen - returns the length of string*
 * @s: points to the string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s != '\0')
	{
		s++;
		count++;
	}
	return (count);
	return (*s);
}
