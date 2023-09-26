#include "main.h"
/**
 * _memcpy - copyarea in memory
 * @dest: memory area destination
 * @src: memory area source
 * @n: bytes from memory area
 * Return: repaced memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}
