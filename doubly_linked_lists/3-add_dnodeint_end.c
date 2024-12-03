#include "lists.h"

/**
 * add_dnodeint_end - adding new node at the end
 * @head: heant of the list
 * @n: number of the list
 * Return: the new node or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *lastnode;

	lastnode = malloc(sizeof(dlistint_t));

	if (!lastnode)
	return (NULL);

	lastnode->n = n;
	lastnode->next = NULL;

	newnode = *head;

	if (newnode != NULL)
	{
		while (newnode->next != NULL)
			newnode = newnode->next;
		newnode->next = lastnode;
	}
	else
	{
		*head = lastnode;
	}

	lastnode->prev = newnode;

	return (lastnode);
}
