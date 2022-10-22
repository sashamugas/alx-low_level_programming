#include "main.h"
/**
 * print_square - print a square
 * @size: takes in the size of the square
 */
void print_square(int i)
{
	int a, b;
	if (i <= 0)
	{
		_putchar('\n');
	}
	for (a = 0; a < i; a++)
	{
		for (b = 0; b < i; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
