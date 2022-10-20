#include "main.h"
/**
 *print_last_digit - print last digit.
 *print_last_digit: prints the last digit of a number.
 *@n: number being checked
 * Return: last digit
 */
int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (i < 0)
	{
		_putchar(-i + 48);
		return (-1);
	}
	_putchar(i + 48);
	return (i);
	_putchar('\n');
}
