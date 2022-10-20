#include "main.h"

/**
 *print_sign - print sign of number.
 *print_sign: takes n, if negative indicate negative, if positive show positive
 *@n: character being checked
 *
 * Return: 1 if @n is positive
 *On negative, return -1, if 0 return 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	} else if(n < 0)
	{
		_putchar(45);
		return (-1);
	}
	_putchar('\n');
}
