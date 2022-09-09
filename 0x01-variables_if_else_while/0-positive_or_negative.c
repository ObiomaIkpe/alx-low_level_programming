#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Function to check the sign of a number
 *
 * Description - Take a random number and check the sign
 *
 * Return: Return integer(0)
 */



int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0 )
	printf("%d is positive\n", n);
	else if (n == 0)
	printf("%d is zero\n", n);
	else
	printf("%d is negative\n", n);
	return (0);

}
