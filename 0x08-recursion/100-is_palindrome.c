#include "main.h"
int check_palindrome(char *s);
/**
 * is_palindrome returns palindrome string
 * @s: string to be checked
 * Return: interger value
 */
int is_palindrome(char *s)
{
	if (*s == '0')
		return (1);
	return (check_palindrome(s));
}

/**
 * check_palindrome - check for string
 * @s: checking string
 * Return: integer
 */
int check_palindrome(char *s)
{
	int l = _strlen_recursion(s) - 1;

	if (*s == s[l])
	{
		s++;
		l--;
	}
	else
	{
		return (0);
	}
	return (1);
}

/**
 * _strlen_recursion - length string
 * @s: string getter
 * Return: string lenght
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
