/*
 * File: 2-print_alphabet.c
 */
#include <stdio.h>
/**
 * main -Prints th alphabet
 * Return: 0
 */
int main(void)
{
	char l;
	for (l = 'a'; l <= 'z'; l++)
		putchar(l);
	putchar('\n');
	return (0);
}
