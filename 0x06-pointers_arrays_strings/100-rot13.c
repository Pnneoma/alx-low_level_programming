
#include "main.h"
#include <stdio.h>

/**
 * rot13 - function that encodes a string using rot13
 * @y: pointer to string parameters
 *
 * Return: *y
 */

char *rot13(char *y)
{
	int m;
	int n;
	char raw[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char raw_rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (m = 0; y[m] != '\0'; m++)
	{
		for (n = 0; n < 52; n++)
		{
			if (y[m] == raw[n])
			{
				y[m] = raw_rot[n];
				break;
			}
		}
	}
	return (y);
}
