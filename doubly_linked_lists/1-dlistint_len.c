#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * dlistint_len - function to count the number of elements linked
 * @h: the pointer to the struct
 *
 * Return: the number element
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
