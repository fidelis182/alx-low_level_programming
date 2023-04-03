#include "lists.h"

/**
 **add_nodeint - adds a new node at the beginning
 *of a listint_t list.
 *@head: head of the linked list.
 *@n: integer address
 *
 *Return: address of the head.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	 listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
