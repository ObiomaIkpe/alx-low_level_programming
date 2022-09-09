#include <stdio.h>

/**
 * main - Prints A - Z via putchar
 *
 * 
 *
 */

int main(void)
{	char letter;

	for (letter = 'a' ; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');
	return(0);
}
	
