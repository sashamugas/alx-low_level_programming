#include "main.h"
/**
 * _strncat - appends src string to dest string it will use at most n bytes from src
 * @dest: destination for appended string
 * @src: source of appended string
 * @n: number of bytes
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
    int i;
    int j;

    i = 0;
    while (dest[i] != '\0')
    {
        i++;
    }

    j = 0;

    while (j < n && src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0';
    return (dest);
}
