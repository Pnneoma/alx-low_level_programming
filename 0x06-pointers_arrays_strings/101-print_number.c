#include "main.h"

/**
 * print_number - a function that prints an integer
 * @y: integer parameter
 * Return: 0
 */

void print_number(int y)
{
	unsigned int y1;

	y1 = y;

	if (y < 0)
	{
		_putchar('-');
		y1 = -y;
	}

	if (y1 / 10 != 0)
	{
		print_number(y1 / 10);
	}
	_putchar((y1 % 10) + '0');
}
