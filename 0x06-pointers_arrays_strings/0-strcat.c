#include "main.h"

/**
 * strcat - appends the string pointed to by src to the end of the string pointed to by dest
 * @src: string to append 
 * @dest: string to be appended to
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
