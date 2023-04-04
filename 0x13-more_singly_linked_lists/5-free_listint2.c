#include "lists.h"

/**
 *free_listint2 - frees a listint_t list.
 *@head: first element of the linked list.
 *
 *Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *node;

	while (*head != NULL)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
	}
	*head = NULL;
}
