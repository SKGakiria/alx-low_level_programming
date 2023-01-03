#include "main.h"

/**
 * _memset - function used to do something
 * @s: the string
 * @n: number of bytes
 * @b: constant byte
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
