#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the diagonal suare sum of the matrix
 * @a: matrix to be used
 * @size: matrix size
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int b, sum1 = 0, sum2 = 0;
	
	for (b = 0; b < size; b++)
	{
		sum1 += a[(size + 1) * b];
		sum2 += a[(size - 1) * (b + 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
