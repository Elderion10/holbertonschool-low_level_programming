#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string to compare.
 * @s2: second string to compare.
 * Return: lol
 */
int _strcmp(char *s1, char *s2)
{
	int contador, lol;

	contador = 0;
	while (s1[contador] == s2[contador] && s1[contador] != '\0')
	{
		contador++;
	}

	lol = s1[contador] - s2[contador];
	return (lol);
}
