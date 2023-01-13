#include "main.h"

/**
 * _print - print string
 * @str: the string
 * @l: size
 *
 * Return: None
 */

void _print(char *str, int l)
{
	int i, j;

	i = j = 0;
	while (i < l)
	{
		if (str[i] != '0')
		{
			j = 1;
		}
		if (j || i == l - 1)
		{
			putchar(str[i]);
		}
		i++;
	}
	putchar('\n');
	free(str);
}
