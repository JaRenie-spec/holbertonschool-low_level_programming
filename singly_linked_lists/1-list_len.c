#include "lists.h"

/**
 * list_len - function that return the number of element in a linked list
 * @h: the pointer to the struct
 * Return: the number of element
 */

size_t list_len(const list_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		h = h->next;
		node++;
	}
	return (node);
}
