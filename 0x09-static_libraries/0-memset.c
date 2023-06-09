#include "main.h"
/**
 * *_memset - fill memory with a constant byte
 * @s: memory space
 * @b: the byte char
 * @n: number of times the char is copied
 * Return: pointer to memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}

	return (s);
}
