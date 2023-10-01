#include "main.h"
/**
 * _strlen_recursion - accounts the lenght of string
 * @s: string input
 * Return: value integer
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
