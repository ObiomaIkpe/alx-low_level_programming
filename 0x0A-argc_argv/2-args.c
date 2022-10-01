#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all inputted arguments
 * @argc: number of arguements inputted
 * @argv: array of arguements inputted
 * Return: 0 as success
 */

int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}


