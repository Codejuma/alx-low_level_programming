#include "main.h"
/**
 * _puts - print string followed by new line
 * @str: string
 *
 * Return: void
 */
void _puts(char *str)
{
	int j;

	j = 0;
	while (*str != '\0')
	{
		_putchar(*str);
		j++;
		str++;
	}
	_putchar('\n');
}
