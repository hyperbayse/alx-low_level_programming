#include "main.h"
/**
 * rev_string - string reversal
 * @s: string to be teversed
 * Return: void
 */
void rev_string(char *s)
{
	int i, n;
	char t;

	while (s[n++])
		i++;

	for (n = i - 1; n >= i / 2; n--)
	{
		t = s[n];
		s[n] = s[i - n - 1];
		s[i - n - 1] = t;
	}
}
