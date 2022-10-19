#include "main.h"

/**
 * main - print the word '_putchar'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char ch[] = "_putchar";

	for (i = 0; i <= 7; i++)
	{
		_putchar(ch[i]);
	}
	_putchar('\n');

	return (0);
}
