#include "main.h"

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
