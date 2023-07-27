#include "main.h"

/**
 * _strncpy - Write a function that copies a string.
 * @dest: Buffer that stores the string copy
 * @src: Source string
 * @n: Maximum no. of bytes to be copied.
 * Return: A pointer to the rsulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

			return (dest);
}
