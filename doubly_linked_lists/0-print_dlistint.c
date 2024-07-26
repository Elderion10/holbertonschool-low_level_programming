#include "lists.h"
/**
 * print_dlistint - prints all the elements of a list
 * @h: contains the list to print
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		if (!h->n)
		{
			printf("0");
		}
		else
		{
			printf("%d\n", h->n);
		}
		i++;
		h = h->next;
	}
	return (i);
}
