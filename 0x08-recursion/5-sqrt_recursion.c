#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: No. to calculate the square root
 * Return: Result square root
 */

int _sqrt_recursion(int n)

{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - Recurses to find the natural
 * square root of a number
 * @n: No. to calculate the squ root of
 * @i: iterator
 * Return: Yhe resulting squ root
 */

int actual_sqrt_recursion(int n, int i)

{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
