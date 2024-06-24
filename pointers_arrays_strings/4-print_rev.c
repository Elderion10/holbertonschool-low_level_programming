#include "main.h"
/**
 * print_rev - Prints a string, in reverse
 * followed by a new line
 *
 * @s: The pointer
 */
void print_rev(char *s)
{
	int a, b, yahuri;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	yahuri = a;

	for (b = yahuri - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}

	_putchar('\n');
}
