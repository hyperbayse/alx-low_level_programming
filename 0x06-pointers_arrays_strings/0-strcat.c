#include "main.h"
#include <stdio.h>
/**
 * _strcat - add strings together
 * @dest: string destination
 * @src: string source
 * Return: string destination pointer
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
	{
		len++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[len] = src[i];
		len++;
	}

	dest[len] = '\n';
	return (dest);
}
