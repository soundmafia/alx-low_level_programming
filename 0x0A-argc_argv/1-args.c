#include <stdio.h>
#include "main.h"

/**
 * main - Write a program that prints the number of arguments passed into it.
 * @argc: count
 * @argv: vector
 * Return: 0 Always
 */

int main(int argc, char *argv[])

{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
