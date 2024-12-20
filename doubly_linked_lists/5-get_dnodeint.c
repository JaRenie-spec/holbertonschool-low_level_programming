#include "lists.h"

/**
 * get_dnodeint_at_index - get a certain node in a linked list.
 *
 * @head: the head of the list
 * @index: node to get
 * Return: the index nod of the list or null if doesn't exist.
 */


dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		if (i == index)
			break;
		head = head->next;
		i++;
	}
	return (head);
}
