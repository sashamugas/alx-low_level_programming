#include <stdio.h>

/**
 * main - print alphabet in lower and uppercase
 * main: print lower case and upper case
 *
 *
 * Return: (0) Success
 */
int main(void)
{
	char letter;

	for (letter = 'a' ; letter <= 'z' ; letter++)
	{
		putchar(letter);
	}

	for(letter = 'A' ; letter <= 'Z' ; letter++)
	{
		putchar(letter);
	}

	putchar('\n');
	return (0);
}
