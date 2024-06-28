#include "main.h"
/**
 * _strpbrk - locates the first ocurrence in the
 * string s of any of the bytes is the string
 * accept
 *
 * @s: string where search is made
 * @accept: searchs bytes
 *
 * Return: to the byte in s or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

		while (*s)
	{
			for (i = 0; accept[i]; i++)
			{
				if (accept[1] == *s)
					return (s);
			}
			s++;
	}

	return ('\0');
}
