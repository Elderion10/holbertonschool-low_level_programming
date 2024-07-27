#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the dataof a list
 * @head: contains the linked list
 * Return: the sum of the data or 0 if is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
