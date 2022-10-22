#include "main.h"
/**
 * print_diagonal - draw a diagonal line
 * @n: take in a number
 */
void print_diagonal(int i)
{
	int a, b;

	if (i <= 0)
	{
		_putchar('\n');
	}
	for (a = 0; a < i; a++)
	{
		for (b = 0; b <= a; b++)
		{
			if (a == b)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else
			{
				_putchar(' ');
			}
		}
	}
}
