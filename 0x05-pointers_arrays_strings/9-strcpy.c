#include "main.h"
/**
 * _strcpy - string copy
 * @dest: value destination
 * @src: value source
 * Return: destination pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
