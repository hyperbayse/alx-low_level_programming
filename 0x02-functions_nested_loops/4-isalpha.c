#include "main.h"
/**
 * _ialpha - looks for upper case characters
 * Return: 1 if upper case and 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
