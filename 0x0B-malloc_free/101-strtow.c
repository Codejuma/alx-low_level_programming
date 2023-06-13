#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * strcat_mod - concatenates string with n bytes from another string
 * @dest: final dest
 * @src: source
 * @i: index of beginning char from from source to destination
 * Return: next index to check source string
 */
int strncat_mod(char *dest, char *src, int i, int str_len)
{
	int x;

	for (x = 0; src[i] != ' ' && i < str_len; i++, x++)
		dest[x] = src[i];
	return (i);
}
/**
 * mallocmem - allocates memory for output array and sets NULL at string end
 * @newstr: current string
 * @str: input string
 * @str_len: length of string
 * Return: void
 */
void mallocmem(char **newstr, char *str, int str_len)
{
	int i = 0, x = 0, word_len = 1;

	while (i < str_len)
	{
		if (str[i] != ' ')
		{
			while (str[i] != ' ' && i < str_len)
				i++, word_len++;
			newstr[x] = malloc(sizeof(char) * word_len);
			newstr[x][word_len] = '\0';
			x++, word_len = 1;
		}
		i++;
	}
}
/**
 * word_count - count the number of words
 * @str: input string
 * @str_len: string length
 * Return: 0 on failure, words on success
 */
int word_count(char *str, int str_len)
{
	int i = 0, words = 0;

	while (i < str_len)
	{
		if (str[i] != ' ')
		{
			while (str[i] != ' ' && i < str_len)
				i++;
			words++;
		}
		if (words == 0)
			return (0);
	}
	return (words);
}
/**
 * strtow - splits a string into words
 * @str: input string
 * Return: pointer to a new string
 */
char **strtow(char *str)
{
	char **newstr;
	int i = 0, x = 0, str_len = 0, words;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	while (*(str + str_len) != '\0')
		str_len++;
	words = word_count(str, str_len);
	if (!words)
		return (NULL);
	newstr = malloc((words + 1) * sizeof(char *));
	mallocmem(newstr, str, str_len);
	while (i < str_len)
	{
		if (str[i] != ' ')
		{
			i = strncat_mod(newstr[x], str, i, str_len);
			x++, i--;
		}
		i++;
	}
	newstr[words + 1]  = NULL;
	return (newstr);
}
