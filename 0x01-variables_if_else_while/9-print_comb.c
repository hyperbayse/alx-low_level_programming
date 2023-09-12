/*
 * File: 9-print_comb.c
 */
#include <stdio.h>
/**
 * main - Prints a series of comma separated numbers
 * Return: Always (Success);
 */
int main(void)
{
	int c;
	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
		if (c != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
