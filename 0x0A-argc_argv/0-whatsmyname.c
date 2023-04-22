#include "main.h"

/**
 * main - prints the name of its executable file
 * @argc: number of input
 * @argv: array of inputted string
 * Return: 0 as success
 */


int main(int argc __attribute__((unused)), char **argv)
{
	int j;

	for (j = 0; argv[0][j] !='\0'; j++)
		_putchar(argv[0][j]);
	_putchar('\n');

	return (0);
}
