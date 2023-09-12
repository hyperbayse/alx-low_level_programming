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
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
