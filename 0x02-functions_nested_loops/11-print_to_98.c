#include <stdio.h>

/**
 *print_to_98 - prints numbers to 98
 *print_to_98: prints all natural numbers from given number n to 98
 *@n: number input
 *Return: null
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	} else if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", n);
}
