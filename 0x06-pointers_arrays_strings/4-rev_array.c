#include "main.h"
/**
 * reverse_array - a function that reverses the content of an array of integers
 * @x: array
 * @y: numbers of elements of array
 *
 * Return: void
 */
void reverse_array(int *x, int y)
{
	int a;
	int b;

	for (a = 0; a < y--; a++)
	{
		b = x[a];
		x[a] = x[y];
		x[y] = b;
	}
}
