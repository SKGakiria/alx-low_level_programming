#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: combination of the two
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len1 = 0, len2 = 0, i = 0, t = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (*(s1 + i))
	{
		len1++, i++;
	}
	while (*(s2 + t))
	{
		len2++, t++;
	}
	len2++;
	concat = malloc(sizeof(char) + (len1 + len2));

	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		*(concat + i) = *(s2 + t);
		i++;
	}
	return (concat);
}
