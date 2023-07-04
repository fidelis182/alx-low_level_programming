#include "lists.h"

/**
 *free_listint - frees a listint_t list.
 *@head: first element in the linked list
 *
 *Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
