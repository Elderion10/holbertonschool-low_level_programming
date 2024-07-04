#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: unsigned int
 *
 * Return: to string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	int a, b;
	int v2n;

	v2n = n;

	for (a = 0; s1[a] != '\0'; a++)
		;
	for (b = 0; s2[b] != '\0'; b++)
		;
	b++;
	str = malloc(a * sizeof(*s1) + b * sizeof(*s2));
	if (str == NULL)
		return (NULL);
	if (v2n >= b)
	{
		str = malloc(sizeof(char) * (a + b + 1));
	}
	else
		str = malloc(sizeof(char) * (a + n + 1));
	return (str);
}
