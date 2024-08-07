#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list
 * @head: pointer to pointer
 * @str: const char pointer
 *
 * Return: the adrres of the new element or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int i;

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
	new_node->next = *head;

	*head = new_node;
	return (*head);
}
