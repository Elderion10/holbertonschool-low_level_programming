#include "main.h"
/**
 * _isalpha - Checks for alphabetic character.
 * Return: 1 if c a letter, lowercase or uppercase,
 * o otherwise.
 * @c: the character to be checked.
 */
int _isalpha(int c);
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
