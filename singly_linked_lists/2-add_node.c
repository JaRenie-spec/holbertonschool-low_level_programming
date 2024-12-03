#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adding a new node at the beginning
 * @head: the head of the list
 * @str: element of the node
 * Return: the newnode
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int len = 0;

	while (str[len])
		len++;

	newnode = malloc(sizeof(list_t));

	if (!newnode)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = len;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
