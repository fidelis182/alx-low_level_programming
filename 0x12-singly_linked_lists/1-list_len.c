#include "lists.h"

/**
 *list_len - returns number of elements in a linked list_t list
 *@h: singly linked list.
 *
 *Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t num;

	num = 0;
	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
