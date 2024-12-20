#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free all the node
 * @head: the head of the list
 *
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
