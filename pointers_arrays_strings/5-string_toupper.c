#include "main.h"
/**
 * *string_toupper - changes all lowercase
 * letters of a string to uppercase
 * @*: pointer to string
 * @y: string
 * Return: Always y.
 */
char *string_toupper(char *y)
{
	int largo;

	largo = 0;

	while (y[largo] != '\0')
	{
		if (y[largo] >= 97 && y[largo] <= 122)
		{
			y[largo] = y[largo] - 32;
		}
		largo++;
	}
	return (y);
}
