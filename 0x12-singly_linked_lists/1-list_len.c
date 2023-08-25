#include "lists.h"

/**
 * list_len - function that returns the number of
 * elements in a linked list_t list
 * @h: pointer to list_t
 * Return: the total no. of elements in head
 */

size_t list_len(const list_t *h)

{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
