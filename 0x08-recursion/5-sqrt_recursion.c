#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion - returns the power of a number
 * _sqrt - calculates suarte root
 * @n: number input
 * @i: iterator
 * Return: square result
 */
int _sqrt(int n, int i);

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
int _sqrt(int n, int i)
{
	int sqrt = i * i;
	if (sqrt > n) 
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, 1 + 1));
}
