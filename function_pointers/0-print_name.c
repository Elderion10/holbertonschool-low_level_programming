#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: char pointer
 * @f: pointer
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
