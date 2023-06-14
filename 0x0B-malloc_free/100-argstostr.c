#include <stdlib.h>
#include "main.h"
/**
 * *argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: pointer to array
 * Return: NULL if ac == 0 or av == NULL
 * Returns a pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int i, j, length = 0, index = 0;
	char *string;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			length++;
	}
	length += ac;

	string = malloc(sizeof(char) * (length + 1));
	if (string == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			string[index] = av[i][j];
			index++;
		}
		string[index] = ' ';
		index++;
	}
	string[length] = '\0';

	return (string);
}
