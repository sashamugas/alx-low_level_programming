#include "main.h"
/**
 * puts_half - print latter half of a string
 * @str: string to be processed
 * Return: null
 */
void puts_half(char *str)
{
    int len = 0;
    char *s = str;
    int n;

    while (*s != '\0')
    {
        s++;
        len++;
    }

    if (len % 2 == 0)
    {
        n = len / 2;
    }
    else
    {
        n = (len + 1) / 2;
    }

    for ( ; n < len; n++)
    {
        _putchar(str[n]);
    }
    _putchar('\n');
}
