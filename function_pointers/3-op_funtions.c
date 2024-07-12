#include <stdio.h>
#include <stdio.h>

/**
 * op_add - summs two integers
 * @a: first int
 * @b: second int
 * Return: sum of two int
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - rest two ints
 * @a: first int
 * @b: second int
 * Return: the difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two int
 * @a: first int
 * @b: second int
 * Return: the result of the mult
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two int
 *@a: first int
 *@b: second int
 *Return: the result of the division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - gets the remainder of the division
 * @a: first int
 * @b: second int
 * Return: the remainder of the division
 */
int op_mod(int a, int b,)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
