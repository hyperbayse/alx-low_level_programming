#include "main.h"
/*
 * 4-rev_array.c
 *
 *  Created on: Apr 10, 2024
 *      Author: absheriff
 */
/**
 * reverse_array - reverses the array
 * @a: pointer to array
 * @n: number of elements
 */
void reverse_array(int *a, int n)
{
	int i, j;

	n = n - 1;

	for (i = 0; i < n; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;

		n--;
	}
}
