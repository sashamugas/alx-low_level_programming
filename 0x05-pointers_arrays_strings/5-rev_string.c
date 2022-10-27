#include "main.h"
/**
 *rev_string - reverses a string
 *@s: value to be operated on
 *Return: (0)
 */
void rev_string(char *s)
{
    int a = 0;
    int b = 0;
    char *c = s;
    int d = 0;
    int f;
    char g;

    while (*c != '\0')
    {
        c++;
        a++;
    }

    b = a - 1;

    for ( ; d < ((b / 2) + 1) ; d++)
    {
        f = (b - d);
        g = s[d];
        s[d] = s[f];
        s[f] = g;
    }
}
