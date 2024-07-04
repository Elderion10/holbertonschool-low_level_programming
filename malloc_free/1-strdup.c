#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a
 * newly allocated space in memory
 * which contains a copy of the
 * string given as a parameter
 *
 * @str: the string given to copy
 *
 * Return: a pointer to the du[licated string
 * or NULL
 */
char *_strdup(char *str)
{
	char *strnuevo;
	unsigned int i;
	int a;

	if (str == NULL)
		return (NULL);
	for (a = 0; str[a] != '\0'; a++)
		;

	strnuevo = malloc(a + 1 * sizeof(char));
	if (strnuevo != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			strnuevo[i] = str[i];

		strnuevo[i] = '\0';
	}
	else
	{
		return (NULL);
	}

	return (strnuevo);
}
