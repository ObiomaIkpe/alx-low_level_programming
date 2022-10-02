#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string inputted
 * Return: void
 */

void print_rev(char *s)
{
	int i, len = 0;

	for (i = 0; *(s + i) != '\0'; i++)
		len++;
	for (i = len - 1; i >= 0; i--)
		_putchar(*(s + i));
	_putchar('\n');
}
