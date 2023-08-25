#include "lists.h"

/**
 * add_node - Write a function that adds a new node at
 * the beginning of a list_t list.
 * @head: double pointer to the list_t lists head.
 * @str: string to be stored in the node.
 * Return: the address of the new element, or NULL if it failed,
 * str needs to be duplicated.
 */

list_t *add_node(list_t **head, const char *str)

{
	list_t *newNode;
	unsigned int length = 0;

	while (str[length])
		length++;
			newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = length;
	newNode->next = (*head);
	(*head) = newNode;

	return (*head);
}
