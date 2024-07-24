#include "lists.h"
/**
 * free_list - frees a list
 * @head: the list to free
 */
void free_list(list_t *head)
{
	list_t *nodefree;

	nodefree = head;

	nodefree = malloc(sizeof(list_t));
	if (!nodefree)
	{
		free(nodefree);
	}
}
