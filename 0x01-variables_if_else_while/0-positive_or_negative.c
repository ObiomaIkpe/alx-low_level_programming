#include <stdlib.h>

#include <time.h>

#include <stdio.h>



/* betty style doc for function main goes there */

int main(void)

{

	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d, if the number is greater than 0: is positive", n);
	printf("%d, if the number is 0: is zero", n);
	printf("%d, if the number is less than 0: is negative", n);
	return (0);

}
