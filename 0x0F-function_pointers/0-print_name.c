#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Write a function that prints a name.
 * @name: String to be added
 * @f: pointer to a function
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))

{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
