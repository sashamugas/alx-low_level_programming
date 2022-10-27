#include "main.h"
/**
 * *_strcpy - copy string from one pointer to another
 * @*dest: destination of string being copied
 * @*src: source of string being copied
 * Return: *dest
 */
char *_strcpy(char *dest, char *src)
{
    int i = 0;
    int j = 0;

    while (*(src + i) != '\0')
    {
        i++;
    }

    for (; j < i; j++)
    {
        dest[j] = src[j];
    }

    dest[i] = '\0';
    return (dest);
}
