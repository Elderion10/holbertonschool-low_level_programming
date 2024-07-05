#include "main.h"

/**
 * _puts_recursion - prints a string followed
 * by a new line
 *
 * @s: the string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') // Base case, is the line code where the loop will stop.
	{
		_putchar('\n');
		return;
	}

	_putchar(*s); // What I need to do to prints the string?
	_puts_recursion(s + 1); // How I make sure the loop can work well?
}
