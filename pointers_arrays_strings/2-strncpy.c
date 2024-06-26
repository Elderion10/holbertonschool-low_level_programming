#include "main.h"
/**
 * *_strncpy - conpies a string
 * @dest: destination of the copie
 * @src: the string to copie
 * @n: the variable when the bytes will copie
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}

	for (; x < n; x++)
	{
		dest[x] = '\0';
	}
	return (dest);
}
