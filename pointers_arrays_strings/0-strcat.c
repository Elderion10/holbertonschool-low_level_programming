#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: string
 * @src: second string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int var1 = 0;
	int var2 = 0;

	while (dest[var1] != '\0')
	{
		var1++;
	}

	while (src[var2] != '\0')
	{
		dest[var1] = src[var2];
		var1++;
		var2++;
	}

	dest[var1] = '\0';

	return (dest);
}
