#include "main.h"

/**
 * main - print alphabets in lowercase
 *
 * Description: print lower case letters with _putchar function
 * Return: Always (0)
 */

void print_laphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
	putchar('\n');

	return (0);
}
