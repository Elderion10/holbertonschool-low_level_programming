#include "main.h"
/**
 * print_line - Draws a straight line
 * Return: 0.
 *@n: variable
 */
void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
