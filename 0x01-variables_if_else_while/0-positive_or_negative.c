#include <stdlib.h>

#include <time.h>

#include <stdio.h>



/* betty style doc for function main goes there */

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("if the number is greater than 0: %d is positive\n", n);
	printf("if the number is 0: %d is zero\n", n);
	printf("if the number is less than 0: %d is negative\n", n);
	return (0);

}
