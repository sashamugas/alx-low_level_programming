#include "main.h"
/**
 *
 *
 */
void jak_bauer(void)
{
	int d1, d2, d3, d4;

	for (d1 = 48; d1 <= 50; d1++)
	{
		for(d2 = 48; d2 <= 57; d2++)
		{
			for (d3 = 48; d3 <= 53; d3++)
			{
				for (d4 = 48; d4 <= 57; d4++)
				{
					if (d1 >= 50 && d2 >= 52)
					{
						break;
						_putchar(d1);
						_putchar(d2);
						_putchar(58);
						_putchar(d3);
						_putchar(d4);
						_putchar('\n');
					}
				}
			}
		}
	}
}
