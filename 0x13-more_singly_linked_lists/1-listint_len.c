#include "lists.h"

/**
 *listint_len - returns the number of elements in a linked listint_t list
 *@h: singly list
 *
 *Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t number_of_elements = 0;

	while (h)
	{
		h = h->next;
		number_of_elements++;
	}
	return (number_of_elements);
}
