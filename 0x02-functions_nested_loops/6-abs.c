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
	if (n < 0)
		return (n * -1);
	else
	{
		return (n);
	}

	return (0);
}

