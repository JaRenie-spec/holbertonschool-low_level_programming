#include "lists.h"

/**
 * sum_dlistint - function that return the sum of all data of a linked list
 * @head: the head of the list
 * Return: the sum of the data
 */



int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
		head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
