#include "main.h"

/**
 * simple_print_buffer
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing
 */

void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while(i < size)
	{
		if (1 % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}
