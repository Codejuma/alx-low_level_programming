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
	int j, k, l = 0, length = 0;
	char *string;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k]; k++)
			length++;
	}
	length += ac;

	string = malloc(sizeof(char) * length + 1);
	if (string == NULL)
		return (NULL);

	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k]; k++)
		{
			string[l] = av[k][k];
			l++;
		}
		if (string[c] == '\0')
		{
			string[l++] = '\0';
		}
	}
	return (string);
}
