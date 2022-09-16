#include "main.h"

/**
 * print_line - Prints the n number of _
 * @n: number input
 *
 * Return: 0
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
			continue;
		_puthcar('_');
	}
	_putchar('\n');
}
