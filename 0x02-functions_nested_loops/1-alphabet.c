#include "main.h"

/**
 * print_alphabet - print alphabets in lowercase
 *
 * Description: print lower case letters with _putchar function
 * Return: Always (0)
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
	_putchar('\n');

}
