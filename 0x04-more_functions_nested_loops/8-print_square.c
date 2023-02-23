#include "main.h"

/**
 * print_square - Prints n squares according n number of times
 * @size: number of squares of size
 * Return: empty
 */

void print_square(int size)

{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
