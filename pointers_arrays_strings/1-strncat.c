#include "main.h"
/**
 * *_strncat - concatenates two strings
 *@dest: the destination
 *@src: main string
 *@n: variable that contains the bytes
 *Return: Allways dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int var1 = 0;
	int var2 = 0;

	while (dest[var1] != '\0')
	{
		var1++;
	}
	for (var2 = 0; var2 < n && src[var2] != '\0'; var2++, var1++)
	{
		dest[var1] = src[var2];
	}
	dest[var1] = '\0';
	return (dest);
}
