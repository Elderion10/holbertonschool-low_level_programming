#include "main.h"
/**
 * _strlen - returns the lenght of string
 *
 * @s: the pointr
 *
 * Return: Always a.
 */
int _strlen(char *s)
{
	int a;
	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
