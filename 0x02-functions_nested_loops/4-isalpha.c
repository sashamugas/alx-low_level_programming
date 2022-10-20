#include "main.h"
/**
 * _isalpha - check for alphabet.
 * _isalpha: checks for an alphabetic character lowercase or uppercase
 *@c: character being checked.
 *
 * Return: 1 on success, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
	_putchar('\n');
}
