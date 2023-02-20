#include <stdio.h>
/**
 * main - print in lower and upper case
 *
 * Return: Aways 0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

		putchar('\n');

	return (0);
}
