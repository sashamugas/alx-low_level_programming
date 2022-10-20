#include "main.h"

void print_alphabet_x10(void)
{
	int ch;
	int i = 1;
	while (i <= 10)
	{
		for (ch = 97; ch <= 122; ch++)
		{
			_putchar(ch);
		}
		i++;
		_putchar('\n');
	}
}
