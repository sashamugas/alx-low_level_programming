#include "main.h"
/**
 * _strcat - append src string to dest string
 * @dest: new string
 * @src: string to be appended
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
    int i;
    int j;

    i = 0;
    while (dest[i] != '\0')
    {
        i++;
    }

    j=0;
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest);
}
