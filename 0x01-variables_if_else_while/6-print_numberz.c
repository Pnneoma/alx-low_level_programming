#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: print single digit starting from 0
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
		putchar(d);
	putchar('\n');

	return (0);
}
