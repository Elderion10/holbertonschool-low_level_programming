#include "main.h"
/**
 * cap_string - capitalizes most of the words in a string.
 * @y: analized string.
 * @a: stores the separators.
 *
 * Return: String with all words capitalized.
 */
char *cap_string(char *y)
{
	int v;
	int a[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	v = 0;
	while (y[v] != '\0')
	{
		if (y[v] >= 'a' && y[v] <= 'z')
		{
			if (v == 0)
			{
				y[v] = y[v] - 32;
			}
			else

			for (int w = 0; y[v] == w[a]; v++)
				return (y);
		}
		
	}
}
