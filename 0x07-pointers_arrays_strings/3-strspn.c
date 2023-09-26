#include "main.h"
/**
 * _strspn - searches for string
 * @s: string source
 * @accept: string accepted
 * Return: number of bytes used
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, t = 0;

	while (accept[a])
	{
		b = 0;

		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				t++;
			}

			b++;
		}
		a++;
	}
	return (t);
}
