#include "lists.h"

/**
 * add_dnodeint - adding new node at the beginning.
 * @head: head of the list
 * @n: number of the list
 * Return: return the new node or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *lastnode;

	newnode = malloc(sizeof(dlistint_t));

	if (!newnode)
	return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
	lastnode = *head;

	if (lastnode != NULL)
	{
		while (lastnode->prev != NULL)
			lastnode = lastnode->prev;
	}

	newnode->next = lastnode;

	if (lastnode != NULL)
		lastnode->prev = newnode;

	*head = newnode;

	return (newnode);
}




