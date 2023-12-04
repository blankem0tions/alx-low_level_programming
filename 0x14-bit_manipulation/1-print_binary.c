#include "main.h"
#include <stdio.h>

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to convert to binary.
 * main - Entry point of the program.
 * Return: @ on success.
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n / 2);

	putchar('0' + (n % 2));
}

