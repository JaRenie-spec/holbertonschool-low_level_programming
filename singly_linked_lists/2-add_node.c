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
	list_t *newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (0);

	if (head == NULL)
		return (0);

	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
