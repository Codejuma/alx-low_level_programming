#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - allocate memory using malloc
 * @b: number of of by bytes
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);

	if (pointer == NULL)
		exit(98);

	return (pointer);
}
