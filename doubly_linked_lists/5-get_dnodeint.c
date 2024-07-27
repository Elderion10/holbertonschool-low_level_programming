#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a list
 * @head: the list
 * @index: the data
 * Return: the nth node of a list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head->next; i++)
	{
		head = head->next;
	}
	if (i < index)
	{
		return (NULL);
	}
	return (head);
}
