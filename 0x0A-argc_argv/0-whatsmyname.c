#include <stdio.h>
#include "main.h"

/**
 * main - Write a program that prints its name, followed by a new line.
 * @argc: this counts the argument
 * @argv: this is the argument vector
 * Return: 0 Always
 */

int main(int argc, char *argv[])

{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
