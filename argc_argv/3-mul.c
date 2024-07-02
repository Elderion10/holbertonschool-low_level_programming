#include <stdio.h>
/**
 * main - entry point
 * @argc: counts the words
 * @argv: pointer
 * Return: 1 if error and 0 if works
 */
int main(int argc, char **argv)
{
	int total;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	total = (int) *argv[1] * (int) *argv[2];

	printf("%d\n", total);

	return (0);
}
