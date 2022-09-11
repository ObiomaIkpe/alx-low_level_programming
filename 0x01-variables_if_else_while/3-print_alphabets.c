#include <stdio.h>
#include <stdlib.h>

/**
 * main - Function body
 *
 * Description - print the english alphabets
 * Return: always return (0)
 */
int main(void)
{
	char smallLetter;
	char capitalLetter;

	for (smallLetter = 'a'; smallLetter <= 'z'; smallLetter++)
		putchar(smallLetter);
	for (capitalLetter = 'A'; capitalLetter <= 'Z'; capitalLetter++)
		putchar(capitalLetter);
	putchar('\n');

	return (0);
}
