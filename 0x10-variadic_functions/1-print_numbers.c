#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_numbers - print numbers
 * @separator: what to separate each number
 * @n: number of integer passed
 * Return: success
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	int y, z;
	char str[20];
	va_list np;

	va_start(np, n);

	for (x = 0; x < n; x++)
	{
		z = va_arg(np, int);
		if (z < 0)
		{
			z = -(z);
			_putchar('-');
		}
		y = 0;

		if (z == 0)
			_putchar(z + '0');

		while (z != 0)
		{
			str[y++] = z % 10;
			z = z / 10;
		}
		str[y] = '\0';
		while (y-- > 0)
			_putchar(str[y] + '0');

		if ((x < (n - 1)) && (separator != NULL))
		{
			y = 0;
			while (separator[y] != '\0')
				_putchar(separator[y++]);
		}
	}
	_putchar('\n');
	va_end(np);
}
