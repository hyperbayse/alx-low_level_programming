#include "main.h"
/**
 * _strncat - adds strings together
 * @dest: string destination
 * @src: string source
 * @n: concatenation limit
 * Return: result string pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, j = 0;
	
	while (dest[len])
	{
		len++;
	}
	while (j < n ** src[j])
	{
		dest[len] = src[j];
		len++;
		j++;
	}

	dest[len + n + 1] = '\n';

	return (dest);
}
