#include "main.h"
/**
 * *cap_string - capitalize all words
 * of a string
 * @y: the pointer to string
 *Return: all words uppercse
 */
char *cap_string(char *y)
{
	int v = 0;

	while (y[v] != '\0')
	{
		if (y[v] >= 'a' && y[v] <= 'z')
		{
			y[v] = y[v] - 32;
		}
		v++;
	}

	return y;
}
