#include "main.h"
#include  <stdio.h>

/**
 * is_not_bit - checks for 0 and 1
 * @b: pointer to an array of characters
 *
 * Return: always 0
 */

int is_not_bit(const char *b)
{
	int i;

	if (b == NULL)
		return (1);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' || b[i] != '1')
		{
			return (0);
		}
		return (0);
	}
}

/**
 * _strlen -  function that returns the length of a string
 * @s: pointer argument
 *
 * Return: always 0
 */

int _strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _pow - function that returns the value of x raised to the
 * power of y
 * @x: base integer x
 * @y: base intger y
 *
 * Return: x raised to the power of y
 */


int _pow(int x, int y)
{
	int i, num;

	i = 0;
	num = 1;

	if (y < 0)
		return (-1);
	while (i < y)
	{
		num = num * x;
		i++;
	}
	return (num);
}


/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to a string
 *
 * Return: the converted number, or 0 if b is null or contains numbers other
 * than 1 and 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i, len;
	unsigned int num;

	if (is_not_bit(b))
		return (0);

	i = 0;
	len = _strlen(b) - 1;
	num = 0;

	while (b[i] != '\0')
	{
		num = num + ((b[i] - '0') * _pow(2, len--));
		i++;
	}
	return (num);
}


