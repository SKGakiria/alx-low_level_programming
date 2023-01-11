#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create array
 * @size: size of array to create
 * @c: char to initialize with
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	char *j;
	unsigned int i;

	if (size <= 0)
	{
		return (NULL);
	}
	j = malloc(sizeof(char) * size);
	if (j == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		j[i] = c;
	}
	return (j);
}
