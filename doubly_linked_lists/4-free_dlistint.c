#include "lists.h"
/**
 * free_dlistint - frees a list
 * @head: contains the list to free
 */
void free_dlistint(dlistint_t *head)
{
	struct dlistint_s *new_node;

	while (head)
	{
		new_node = head->next;
		free(head);
		head = new_node;
	}
}
