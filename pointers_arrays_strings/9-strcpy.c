#include "main.h"
/**
 * _strcpy - copies the string pointed to by src
 * ncluding the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer in wich we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int var, a;

	var = 0;

	while (src[var] != '\0')
	{
		var++;
	}

		for (a = 0; a < var; a++)
	{
			dest[a] = src[a];
	}
	dest[a] = '\0';

	return (dest);
}
