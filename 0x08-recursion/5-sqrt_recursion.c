#include <stdio.h>
#include "main.h"

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - returns the power of a number
 * @n: number to be calculated
 * Result: square root;
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - calculates suarte root
 * @n: number input
 * @i: iterator
 * Return: square result
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;
	
	if (sqrt > n) 
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, 1 + 1));
}
