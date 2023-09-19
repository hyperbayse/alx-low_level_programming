#include "main.h"
/**
 * _strlen - gives the length of string
 * @s: inpute string
 * Return: String lenght
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s '\0'; s++)
	{
		c++;
	}

	return (c);
}
