#include <stdio.h>
/**
 * main - print numbers 0 to 9
 * main: Entry point of the program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%i", num);
	}
	putchar('\n');

	return (0);
}
