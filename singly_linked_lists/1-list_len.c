#include "lists.h"
/**
 * list_len - returns the number of elements in a linket list
 * @h: contains the list
 * Return: len
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
