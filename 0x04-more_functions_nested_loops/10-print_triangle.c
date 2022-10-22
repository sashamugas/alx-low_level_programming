#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: takes in a integer for a size of triangle
 */
void print_triangle(int i)
{
	int row, col, a;

	if (i <= 0)
	{
		_putchar('\n');
	}
	for (row = 0; row < i; row++)
	{
		for (col = i - row; col > 1; col--)
		{
			_putchar(' ');
		}
		for (a = row + col; a >= 1; a--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
