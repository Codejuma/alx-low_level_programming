#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array then initializes it with a specific char
 * @size: array size
 * @c: character given
 * Return: NULL if size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int j;

	if (size  == 0)
		return (NULL);

	array =  malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
	{
		array[j] = c;
	}

	return (array);
}
