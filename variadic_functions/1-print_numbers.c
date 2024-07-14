#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - it is what it is
 * @separator: pointer
 * @n: variable
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list xd;

	va_start(xd, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(xd, int));
		if (i < (n - 1) && separator)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(xd);
}
