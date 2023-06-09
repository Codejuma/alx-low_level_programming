#include "main.h"
/**
 * *_strpbrk - search string for any set bytes
 * @s: first string
 * @accept: second string
 * Return: s if found otherwise NULL
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int j, k;

	for (j = 0; *(s + j) != '\0'; j++)
	{
		for (k = 0; *(accept + k) != '\0'; k++)
		{
			if (*(s + j) == *(accept + k))
				return (s + j);
		}
	}
	return ('\0');
}
