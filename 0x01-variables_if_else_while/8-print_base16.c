#include <stdio.h>

/**
 * main - print numbers in base 16
 * main: Entry point of the program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char nums;

	for (nums = '0'; nums <= '9'; nums++)
	{
		putchar(nums);
	}

	for (nums = 'a'; nums <= 'f'; nums++)
	{
		putchar(nums);
	}

	putchar('\n');

	return (0);
}
