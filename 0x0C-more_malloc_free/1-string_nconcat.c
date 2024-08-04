#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenate two strings
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int x = 0, y = 0, z = 0;
	char *sp;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

	while (s1[y] != '\0')
		y++;
	while (s2[z] != '\0')
		z++;
	if (z > n)
		z = n;

	sp = malloc((y + z + 1) * sizeof(n));
	if (sp == NULL)
		return (NULL);

	while (s1[x] != '\0')
	{
		sp[x] = s1[x];
		x++;
	}
	y = 0;
	while (y < z)
	{
		sp[x] = s2[y];
		x++;
		y++;
	}

	sp[x] = '\0';
	return (sp);
}