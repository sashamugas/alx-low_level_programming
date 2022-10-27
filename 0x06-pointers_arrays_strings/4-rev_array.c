#include "main.h"
/**
 * reverse_array - reverse the content of an array of integers
 * @a: array 
 * @n: array count
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
    int i;
    int temp;

    for (i = 0; i < n--; i++)
    {
        temp = a[i];
        a[i] = a[n];
        a[n] = temp;
    }
}
