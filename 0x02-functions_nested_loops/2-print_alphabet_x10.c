#include "main.h"

/**
 * print_alphabet_x10 - print alphabets ten times
 *
 * Description: print the lowercase letters 10 times
 * Return: nothing today
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 9)
	{
		char lowercase = 'a';

		while (lowercase <= 'z')
		{
			_putchar(lowercase);
			lowercase++;
		}

		_putchar('\n');
		i++;
	}
}
