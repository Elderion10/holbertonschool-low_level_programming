#include "main.h"
/**
 * _strchr - returs a pointer to the first occurrence
 * of the character c in the string s
 * @s: string targeted
 * @c: character targeted
 * Return: pointer to first occurence of c
 */
char *_strchr(char *s, char c)
{
	int i;

		for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
			;

		if (s[i] == c)
			return (s + i);
	else
			return ('\0');
}
