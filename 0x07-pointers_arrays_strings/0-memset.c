#include "holberton.h"
/**
 * _memset - fills the memory with constant byte
 * @s: memory area to be filled
 * @b: constant byte to be used
 * @n: bytes of memory allocated
 * REturn: memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
