#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * @brief
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t));
	list_t *lastnode = *head;

	if(newnode == NULL)
		return (0);

	if (head == NULL)
		return (0);

	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	while (lastnode->next != NULL)
		lastnode = lastnode->next;

	lastnode->next = newnode;

	return (newnode);
}
