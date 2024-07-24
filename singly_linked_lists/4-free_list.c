#include "lists.h"
/**
 * free_list - frees a list
 * @head: the list to free
 */
void free_list(list_t *head)
{
	list_t *nodefree;
	list_t *node2free;

	nodefree = head;
	head = NULL;

	nodefree = malloc(sizeof(list_t));
	node2free = malloc(sizeof(list_t));
	if (!nodefree)
	{
		free(nodefree);
	}
	if (!node2free)
	{
		free(node2free);
	}
}
