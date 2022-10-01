#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number of arguments inputted
 * @argv: array of arguemnts inputted
 * Return: 0 as sucess
 */

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
return (0);
}
