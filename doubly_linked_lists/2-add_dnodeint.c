#include "lists.h"
/**
 * add_dnodeint - adds a node at the beginning of a list
 * @head: is the first node
 * @n: the data of the node
 * Return: the addres of the new element or null if fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if ((*head))
	{
		(*head)->prev = new_node;
	}
	(*head) = new_node;
	return (new_node);
}
