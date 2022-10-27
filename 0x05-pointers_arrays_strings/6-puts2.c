#include "main.h"
/**
 * puts2 - print 2 related values
 * @str: value to be processed
 * Return: (0)
 */
void puts2(char *str)
{
    int len = 0;
    int a = 0;
    char *s = str;
    int b;

    whie (*s != '\0')
    {
        s++;
        len++;
    }

    a = len - 1;

    for (b = 0; b <= 1; b++)
    {
        if (b % 2 == 0)
        {
            _putchar(str[b]);
        }
    }
    _putchar('\n');

}
