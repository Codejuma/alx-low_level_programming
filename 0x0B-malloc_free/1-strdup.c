#include <stdlib.h>
#include "main.h"
/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @str: pointer to dublicated string
 * Return: On success, the _strdup returns a pointer to the duplicated string
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *string;
	unsigned int len;
	unsigned int j;

	/*chek if the string is NULL*/
	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	string = malloc(sizeof(char) * (len + 1));

	if (string == NULL)
		return (NULL);

	for (j = 0;  j < lenght; j++)
	{
		string[j] = str[j];
	}
	string[len] =  '\0';
	return (string);
}
