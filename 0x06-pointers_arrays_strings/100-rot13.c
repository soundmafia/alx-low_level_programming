#include "main.h"
#include <stdio.h>

/**
 * rot13 - Write a function that encodes a string using rot13.
 * @s: Pointer to string
 * Return: *s
 */

char *rot13(char *s)

{
	int i;
	int j;
	char data[] =
		"ABCDEFGHIKJLMNOPQRSTUVWXYZabcdefghiklmnopqrstuvwxyz";
	char datarot[] =
		"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghiklm";
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == data[j])
			{
				s[i] = datarot[j];
				break;
			}
		}
	}
	return (s);
}
