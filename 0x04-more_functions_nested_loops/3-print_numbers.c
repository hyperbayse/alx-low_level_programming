#include "main.h"

/**
 * print_numbers - print numbers within the supplied range
 * Return: valid numbers
 */

void print_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		_putchar(x + '0');
	}

	_putchar('\n');
}
