#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @y: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int y)
{
	int z;

	z = 0;
	while (z < y && src[z] != '\0')
	{
		dest[z] = src[z];
		z++;
	}
	while (z < y)
	{
		dest[z] = '\0';
		z++;
	}

	return (dest);
}
