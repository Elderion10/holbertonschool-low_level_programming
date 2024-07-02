#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: counts the words
 * @argv: pointer
 * Return: 0
 */
int main(int argc, char **argv)
{
	int total;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	total = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", total);

	return (0);
}
