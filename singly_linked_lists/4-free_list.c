#include "lists.h"
/**
 * free_list - frees a list
 * @head: the list to free
 */
void free_list(list_t *head)
{
	list_t *siguiente;

	while (head)
	{
		siguiente = head->next;
		free(head);
		head = siguiente;
	}
}
