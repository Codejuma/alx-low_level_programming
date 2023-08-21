#include "main.h"
/**
 * *_strpbrk - searches a string for any a set of bytes
 * @s: first string
 * @accept: second string
 * Return: pointer to the byte s if a match is found,
 * otherwise NULL
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int x, y;

	for (x = 0; *(s + x) != '\0'; x++)
	{
		for (y = 0; *(accept + y) != '\0'; y++)
		{
			if (*(s + x) == *(accept + y))
				return (s + x);
		}
	}
	return ('\0');
}
