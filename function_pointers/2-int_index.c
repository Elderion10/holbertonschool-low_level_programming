#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index - search for an integer
 * @array: array of int
 * @size: the array size
 * @cmp: pointer to function
 * Return: to index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
