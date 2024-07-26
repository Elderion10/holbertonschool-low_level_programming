#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: contains the list
 * Return: the numbers of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
