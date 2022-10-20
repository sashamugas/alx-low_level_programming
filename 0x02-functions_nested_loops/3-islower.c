#include "main.h"

/**
 * _islower: checks if character c is lowercase
 * @c: the character being checked
 *
 * Return: Always 1 (Success)
 * Else: Always 0
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
		return (1);
	else
		return (0);
	_putchar('\n');
}

