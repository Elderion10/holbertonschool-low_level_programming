#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: counter
 * @argv: sring
 * Return: 0 if succes
 */
int main(int argc, char **argv)
{
	int i, sum;

		sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
