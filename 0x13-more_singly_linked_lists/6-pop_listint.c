#include "lists.h"

/**
 *pop_listint - deletes the head node of a listint_t linked list.
 *@head: pointer to the first element
 *
 *Return: and returns the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *current;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		i = (*head)->n;
		current = *head;
		*head = current->next;
		free(current);
		return (i);
	}
}
