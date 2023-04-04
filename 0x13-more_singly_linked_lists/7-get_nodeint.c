#include "lists.h"

/**
 *get_nodeint_at_index - returns the nth node of a listint_t linked list.
 *@head: first element in the linked list
 *@index:is the index of the node, starting at 0
 *
 *Return: returns the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
			current = current->next;
		count++;
	}
	return (current);
}
