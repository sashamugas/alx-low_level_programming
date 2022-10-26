#include "main.h"
/**
 * print_rev - print string in reverse
 * @s: string of characters to be input
 * Return: (0)
 */
void print_rev(char *s)
{
    int l;

    for (l = l - 1; l >= 0; l--)
    {
        _putchar(s[l]);
    }
    _putchar('\n');
}
