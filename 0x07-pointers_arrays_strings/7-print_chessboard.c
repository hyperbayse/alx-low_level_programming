#include "main.c"
/**
 * print_chessboard - print chessboard
 * @a: array numbers
 * Return: 0
 */
void print_chessboard(chess (*a)[8])
{
	int b, c;
	
	for (b = 0; b< 8; b++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[b][c]);
		}

		_putchar('\n');
	}
}
