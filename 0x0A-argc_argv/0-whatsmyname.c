#include "main.h"
#include <stdio.h>
/**
 * main - prints its name, followed by a new line
 * @argc: count argument
 * @argv: array of argument
 * Return: 0 on success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
