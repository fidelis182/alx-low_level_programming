#include "lists.h"

/**
 *print_list - prints all the elements of a list_t list.
 *@h: singly linked list.
 *
 *Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; h = h->next, i++)
	{
		if (h->str != NULL)
		printf("[%d] %s\n", h->len, h->str);
		else
			printf("[%d] %s\n", 0, "(nil)");
	}
	return (i);
}
