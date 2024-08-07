#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: value passed
 * Return: pointer to allocated memory or 98 on failure
 */
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);

	return (i);
}
