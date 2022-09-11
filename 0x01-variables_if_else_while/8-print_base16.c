#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;
	char upper;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (upper = 'A'; upper <= 'F'; upper++)
		putchar(upper);
	putchar('\n');

	return 0;
}
