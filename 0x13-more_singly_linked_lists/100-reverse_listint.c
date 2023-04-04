#include "lists.h"

/**
 *reverse_listint -  reverses a listint_t linked list
 *@head: first element in the linked list.
 *
 *Return:a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous_node, *current_node;

	if (*head != NULL)
	{
		previous_node = *head;
		current_node = (*head)->next;
		*head = (*head)->next;
		previous_node->next = NULL;
		while (*head != NULL)
		{
			*head = (*head)->next;
			current_node->next = previous_node;
			previous_node = current_node;
			current_node = *head;
		}
		*head = previous_node;
	}
	return (*head);
}
