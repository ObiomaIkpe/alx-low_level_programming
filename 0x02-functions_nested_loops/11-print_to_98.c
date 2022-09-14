#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print numbers from n to 98
 * @n: required number
 *
 * Return: void
 */

void print_to_98(int n)
{
	if ( n <= 97)
	{
		while (n <= 97)
		{
			printf("%d", n);
			n++;
		}
	}
	else
	{
		while (n >= 99)
		{
			printf("%d", n);
			n--;
		}
	}
	printf("98\n");
}
