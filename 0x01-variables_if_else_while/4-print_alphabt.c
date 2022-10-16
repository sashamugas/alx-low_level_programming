#include <stdio.h>

/**
 * main - print the alphabet in lowercase, except for e and q
 * main: entry point of program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a' ; letter <= 'z' ; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);

	}

	putchar('\n');
	return (0);
}
