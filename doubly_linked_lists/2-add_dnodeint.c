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

	new_node = *head;
	*head = malloc(sizeof(dlistint_t));

	if (!*head)
	{
		free(*head);
		return (NULL);
	}

	(*head)->n = n;
	(*head)->next = new_node;

	return (*head);
}
