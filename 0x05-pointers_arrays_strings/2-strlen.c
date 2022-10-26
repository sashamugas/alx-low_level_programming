#include "main.h"
/**
 * _strleng - return the length of a string
 * @s: argument operated on
 * Return: len
 */
int _strlen(char *s)
{
    int len = 0;

    whiel (*s != '\0')
    {
        s++;
        len++;
    }

    return (len);
}
