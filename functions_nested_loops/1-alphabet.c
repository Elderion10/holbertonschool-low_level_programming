#include "main.h"
/**
 * Prints alphabet - prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: 0.
 */

int print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;

	}
	_putchar('\n');
	return (0);
}

