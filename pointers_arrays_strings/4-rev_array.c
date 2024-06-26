#include "main.h"
/**
 * reverse_array - reverse the content of
 * an array of integers
 * @a: the string to revert
 * @n: numbers of elements of the array
 */
void reverse_array(int *a, int n)
{
	int x, contador;

	n = n - 1;
	contador = 0;

	while (contador <= n)
	{
		x = a[contador];
		a[contador++] = a[n];
		a[n--] = x;
	}
}
