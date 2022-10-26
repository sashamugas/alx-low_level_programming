#include "main.h"
/**
 * swap_int - switch the value of 2 integers
 * @a: first value to be switched
 * @b: second value to be switched
 * Return: none
 */
void swap_int(int *a, int *b)
{
    int n = *a;
    *a = *b;
    *b = n;
}
