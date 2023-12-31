#include "lists.h"

/**
 * free_list - Write a function that frees a list_t list.
 * @head: list_t list that is to be freed.
 */

void free_list(list_t *head)

{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
