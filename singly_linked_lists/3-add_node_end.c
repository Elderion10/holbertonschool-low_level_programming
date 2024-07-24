#include "lists.h"
/**
 * add_node_end - adds a node at the end of the list
 * @head: pointer to pointer
 * @str: the string to duplicate
 * Return: the address of the new element of null if fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tail;
	list_t *new_node;
	int i;

	tail = *head;
	while (tail && tail->next != NULL)
		tail = tail->next;

	for (i = 0; str[i] != '\0'; i++)
		;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = i;
	new_node->next = NULL;

	if (tail)
		tail->next = new_node;
	else
		*head = new_node;
	return (new_node);
}
