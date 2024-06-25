#include "main.h"
/**
 * puts_half - prints half of a string
 *
 * @str: the pointer when we get the sting
 */
void puts_half(char *str)
{
	int hilo, n, a;

	hilo = 0;

	while (str[hilo] != '\0')
	{
		hilo++;
	}

	if (hilo % 2 == 0)
	{
		for (a = hilo / 2; str[a] != '\0'; a++)
		{
			_putchar(str[a]);
		}
	} else if (hilo % 2)
	{
		for (n = (hilo - 1) / 2; n < hilo - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
