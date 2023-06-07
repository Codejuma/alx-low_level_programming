#include "main.h"
/**
 * str_len - determine length of a string
 * @str: input string
 * Return: string length
 */
int str_len(char *str)
{
	int len = 0;

	if (*(str + len))
	{
		len++;
		len += str_len(str + len);
	}
	return (len);
}
/**
 * palindrome_check - checksif the string is palindrome
 * @str: input string
 * @len: length of string
 * @count: number of strings checked
 * Return: 1 if string is palindrome, otherwise 0
 */
int palindrome_check(char *str, int len, int count)
{
	if (str[count] == str[len / 2])
		return (1);
	if (str[count] == str[len - count - 1])
		return (palindrome_check(str, len, count + 1));
	return (0);
}
/**
 * is_palindrome - determine if the string is palindrome
 * @s: input string
 * Return: 1 is string is palindrome, otherwise 0
 */
int is_palindrome(char *s)
{
	int len = str_len(s);
	int count = 0;

	if (!(*s))
		return (1);
	return (palindrome_check(s, len, count));
}
