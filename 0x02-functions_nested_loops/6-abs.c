#include "main.h"
/**
 * _abs - absolute value.
 * _abs: gives the absolute value of an integer. 
 * @n: input number as integer.
 *
 * Return: absolute value of n
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (n * -1);
	_putchar('\n');
}
