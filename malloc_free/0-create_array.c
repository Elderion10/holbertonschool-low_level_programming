#include "main.h"
#include <stdlib.h>
/**
 * *create_array - creates an array of chars
 * and initializes it with a specific char
 *
 * @size: size of the array
 * @c: character
 *
 * Return: NULL if fails, and array if ok
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	array = 0;

	if (size == 0)
		return (NULL);
	if (size != 0)
	{
		array = malloc(size * sizeof(char));
			if (array != NULL)
		{
				for (i = 0; i < size; i++)
					array[i] = c;
		}
	}
	return (array);
}
