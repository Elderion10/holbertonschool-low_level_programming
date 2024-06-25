#include "main.h"
/**
 * puts2 - Prints every other character of a string,
 * starting with the first character
 *
 * @str: string to print the chars from
 */
void puts2(char *str)
{
	int mvp, a;

	mvp = 0;

	while (str[mvp] != '\0')
	{
		mvp++;
	}

	for (a = 0; a < mvp; a += 2)
	{
		_putchar(str[a]);
	}

	_putchar('\n');
}
