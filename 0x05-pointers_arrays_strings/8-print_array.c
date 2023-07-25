#include "main.h"
#include <stdio.h>

/**
 * print_array - Write a function that prints n elements of an array of integer
 * followed by a new line.
 * @a: array of int
 * @n: number of elemets of the array to be printed
 * Return: void
 */

void print_array(int *a, int n)

{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
