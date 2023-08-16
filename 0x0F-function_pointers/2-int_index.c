#include "function_pointers.h"

/**
 * int_index - Write a function that searches for an integer.
 * @array: array
 * @size: The size of the elements in array
 * @cmp: is a pointer to the function to be used to compare values
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))

{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
