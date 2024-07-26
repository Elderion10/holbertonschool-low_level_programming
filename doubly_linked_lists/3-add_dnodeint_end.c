#include "lists.h"
/**
 * add_dnodeint_end - adds a node in the end of a list
 * @head: pointer to pointer
 * @n: the data of the node
 * Return: the address of the new elemnt or null if fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tail;
	dlistint_t *new_node;

	tail = *head;
	while (tail && tail->next)
		tail = tail->next;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if ((!*head))
	{
		new_node->prev = NULL;
		(*head) = new_node;
	}

	if (tail)
		tail->next = new_node;

	else
		*head = new_node;

	return (new_node);
}
