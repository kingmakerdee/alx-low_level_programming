#include "main.h"

/**
 * times_table - prints the 9 times table starting with 0
 *
 * Return: 0
 *
 */

void times_table(void)
{
	int acc, down, b;

	for (acc = 0; down <= 9; acc++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (down = 1; down <= 9; down++)
		{
			b = (acc * down);
			if ((b / 10) > 0)
			{
				_putchar((b / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((b % 10) + '0');
			if (down < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
