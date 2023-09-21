#include "main.h"
/**
 * _strcmp - compare strings
 * @s1: string 1
 * @s2: string 2
 * Return: value in integer
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, r = 0, en;

	while (s1[a])
	{
		a++;
	}

	while (s2[b])
	{
		b++;
	}
	if (a <= b)
	{
		en = a;
	}
	else
	{
		en = b;
	}

	while (c <= en)
	{
		if (s1[c] == s2[c])
		{
			c++;
			continue;
		}
		else
		{
			r = s1[c] - s2[c];
			break;
		}

		c++
	}
	return (r);
}
