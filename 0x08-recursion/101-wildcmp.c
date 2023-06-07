#include "main.h"
/**
 * strlen_ignore_wilds - Return string length
 * @s: string to be measured
 *
 * Return: The length
 */
int strlen_ignore_wilds(char *s)
{
	int length = 0, index = 0;

	if (*(s + index))
	{
		if (*s != '*')
			length++;

		index++;
		length += strlen_ignore_wilds(s + index);
	}

	return (length);
}
/**
 * iterate_wild - iterate a string located
 * @wildstring: The string to be iterated
 */
void iterate_wild(char **wildstring)
{
	if (**wildstring == '*')
	{
		(**wildstring)++;
		iterate_wild(wildstring);
	}
}
/**
 * postfix_match - check if s matches the postfix
 * @s: string to be matched
 * @postfix: postfix
 *
 * Return: if s and postfix are same - pointer to null byte
 * Otherwise - pointer to the first unmatched char in postfix
 */
char *postfix_match(char *s, char *postfix)
{
	int string_length = strlen_ignore_wilds(s) - 1;
	int postfix_length = strlen_ignore_wilds(postfix) - 1;

	if (*postfix == '*')
		iterate_wild(&postfix);

	if (*(s + string_length - postfix_length) == *postfix && *postfix != '\0')
	{
		postfix++;
		return (postfix_match(s, postfix));
	}

	return (postfix);
}
/**
 * wildcmp - compare two strings, considering wildcard chars
 * @s1: first string
 * @s2: second string, may contain special char
 *
 * Return: if identical return 1, otherwise return 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		iterate_wild(&s2);
		s2 = postfix_match(s1, s2);
	}
	if (*s2 == '\0')
		return (1);
	if (*s1 != *s2)
		return (0);
	return (wildcmp(++s1, ++s2));
}
