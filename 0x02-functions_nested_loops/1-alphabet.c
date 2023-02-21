#include "main.h"

/**
 * print_alphabet - print the alphabets
 * followed by a new line
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	int n;
	char lowcase;

	for (n = 1, lowcase = 'a'; n <= 26; n++, lowcase++)
	{
		_putchar(lowcase);
	}
	_putchar('\n');
}
