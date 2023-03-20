#include "main.h"

/**
 * _strchr - function to locate a char in string
 * @c: character to search for
 * @s: string to search
 *
 * Return: c if found and NULL if not
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	if (s[i] == c)
	{
		return (&s[i]);
	}
	return (0);
}
