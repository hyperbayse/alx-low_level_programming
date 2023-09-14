#include "main.h"
/**
 * _islower - looks for lower case characters
 * Return: 1 if lower case and 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
