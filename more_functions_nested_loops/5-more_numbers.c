#include "main.h"
/**
 * more_numbers - Prints x10 the numbers 0 to 14
 * Return: Always 0.
 */
void more_numbersa(void)
{
	int a, b;
		for (a = 1; a <= 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)
			_putchar('1');
			_putchar(b % 10 + '0');
		}
			_putchar('\n');
		}
}
