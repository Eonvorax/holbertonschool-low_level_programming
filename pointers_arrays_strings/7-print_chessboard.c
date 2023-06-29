#include "main.h"
/**
 * print_chessboard - prints the chessboard using a given string
 * @a : pointer to 2D char array of size (8,8)
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int h, v;

	for (h = 0; h < 8; h++)
	{
		for (v = 0; v < 8; v++)
		{
			_putchar(a[h][v]);
		}
		_putchar('\n');
	}
}
