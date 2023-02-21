#include "main.h"

/**
 * main - Entry point
 *
 * Description - Print all alphabet in lowercase
 *
 *
 */

void print_alphabet(void)
{
	char lowcase;

	for (lowcase = 'a'; lowcase <= 'z'; lowcase++)
	_putchar(lowcase);

	_putchar('\n');
}
