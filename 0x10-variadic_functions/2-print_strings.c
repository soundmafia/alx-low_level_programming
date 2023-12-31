#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Write a function that prints strings,
 * followed by a new line.
 * @separator: is the string to be printed between the strings
 * @n: is the number of strings passed to the function.
 * @...: variable no. of strings.
 * Description - If separator is NULL, don’t print it
 * If one of the string is NULL, print (nil) instead
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int index;
	va_list strings;

	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char*);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
