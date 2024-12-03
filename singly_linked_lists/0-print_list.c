#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * print_list - function that print in a linked list
 * @h: the pointer to a struct
 * Return: the number a node in the linked list,if str = NULL return (nil)
 */

size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		node++;
	}
	return (node);
}
