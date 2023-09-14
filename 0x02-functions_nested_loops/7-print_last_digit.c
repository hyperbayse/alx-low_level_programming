#include "main.h"
/**
 * print_last_digit - print last digit
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int l;
	l = n % 10;
	if (l < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (l);
}
