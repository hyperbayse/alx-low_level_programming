#include <stdio.h>
#include "main.h"
/**
 * print_array - prints n arrays integer
 * @a: arrays
 * @n: number of array's element
 * Return: void
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);

		if (j != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
