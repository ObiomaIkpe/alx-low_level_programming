#include "main.h"
#include <stdio.h>

/**
 * *_abs - finds absolute value of an integer
 * @n: argument
 * Description: Finds absolute value of an integer
 * Return: Always 0
 */

int _abs(int n)
{
	if (n > 0)
		printf(n);
	else
	{
		n *= -1;
		return (n);
	}

	return (0);
}

