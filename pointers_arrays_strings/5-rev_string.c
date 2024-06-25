#include "main.h"
/**
 * rev_string - reverse a string
 *@s: string to be reversed
 */
void rev_string(char *s)
{
	char temporal;
	int a, b, b1;

	b = 0;
	b1 = 0;

	while (s[b] != '\0')
	{
		b++;
	}

	b1 = b - 1;

	for (a = 0; a < b / 2; a++)
	{
		temporal = s[a];
		s[a] = s[b1];
		s[b1--] = temporal;
	}
}
