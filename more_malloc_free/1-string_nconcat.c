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
	unsigned int count, count1;
	unsigned int papa;
	char *ptr;
	unsigned int len1, len2;

	papa = n;
	len1 = 0;
	len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (papa >= len2)
	{
		papa = len2;
		ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	}
	else
		ptr = malloc(sizeof(char) * (len1 + n + 1));
	if (ptr == NULL)
		return (NULL);

	for (count = 0; count < len1; count++)
	{
		ptr[count] = s1[count];
	}
	for (count1 = 0; count1 < papa; count1++)
	{
		ptr[count++] = s2[count1];
	}
	ptr[count] = '\0';

	return (ptr);
}
