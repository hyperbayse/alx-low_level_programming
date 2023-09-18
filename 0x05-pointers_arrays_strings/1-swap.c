#include "main.h"
/**
 * swap_int - swaps the integers to another
 * Regurn: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c  = *a;
	*a = *b;
	*b = c;
}
