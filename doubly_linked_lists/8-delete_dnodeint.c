#include "lists.h"

/**
 * delete_dnodeint_at_index - function to delete a node
 * @head: head of the list
 * @index: the element to delete
 * Return: 1 if success or -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;


	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	while (temp != NULL)
	{
		if (i == index)
		{

			if (temp->next != NULL)
				temp->next->prev = temp->prev;


			if (temp->prev != NULL)
				temp->prev->next = temp->next;

			free(temp);
			return (1);
		}
		temp = temp->next;
		i++;
	}
	return (-1);
}
