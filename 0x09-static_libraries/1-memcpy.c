#include "main.h"
/**
 * *_memcpy - copies from one location to another
 * @dest: destination location
 * @src: source location
 * @n: number of bytes being copied
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		*(dest + x) = *(src + x);

	return (dest);
}
