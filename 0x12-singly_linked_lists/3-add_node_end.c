#include "lists.h"

/**
 * add_node - Write a function that adds a new node at the end of a list_t list.
 * @head: double pointer to the list_t lists head
 * @str: string to be stored in the new node
 * Return:  the address of the new element, or NULL if it failed
 * str needs to be duplicated.
 */

list_t *add_node_end(list_t **head, const char *str)

{
	list_t *newNode;
	list_t *current = *head;
	unsigned int length = 0;

	while (str[length])
		length++;

	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = length;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (current->next)
		current = current->next;

	current->next = newNode;

	return (newNode);
}
