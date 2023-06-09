#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the number of arguments passed into it
 * @argv: array of strings
 * @argc: size of *argv
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	(void)*argv;
	printf("%d\n", argc - 1);

	return (0);
}
