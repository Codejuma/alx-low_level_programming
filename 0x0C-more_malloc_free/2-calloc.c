#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of bytes
 *
 * Return: returns a pointer to the allocated memory.
 * if nmemb or size is 0, then _calloc returns NULL
 * if malloc fails, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmembi * size);

	if (p == NULL)
		return (NULL);

	for (a = 0; a < (nmemb * size); a++)
		p[a] = 0;

	return (p);
}
