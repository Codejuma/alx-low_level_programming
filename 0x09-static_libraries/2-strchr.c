#include "main.h"
#include <stdio.h>
/**
 * *_strchr - locate char in string
 * @s: searched string
 * @c: char being looked for
 * Return: first occurrence
 */
char *_strchr(char *s, char c)
{
	int j;

	while (1)
	{
		j = *s++;
		if (j == c)
		{
			return (s - 1);
		}
		if (j == 0)
		{
			return (NULL);
		}
	}
}
