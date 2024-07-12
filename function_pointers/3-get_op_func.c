#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - selects the correct operation function
 * asked by the user
 * @s: op arg
 * Return: function pointer corresponding to op given
 */
int (*get_op_func(char *s))(int, int)
{

