#include "main.h"
/**
 * print_array - print n elements of an arra of ints
 * @a: variable for array
 * @n: number of elements in the array. len of array
 * Return: null
 */
void print_array(int *a, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
        if (i != n - 1)
        {
            printf(", ");
        }
    }
    _putchar('\n');
}
