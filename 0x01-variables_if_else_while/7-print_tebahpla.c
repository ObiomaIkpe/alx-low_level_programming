#include <stdio.h>
#include <stdlib.h>

/**
 * main -Entry point
 *
 * Return: Always return 0
 */

int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
		putchar(low);
	putchar('\n');

	return (0);
}
