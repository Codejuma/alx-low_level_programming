#include "main.h"
/**
 * read_textfile - text file and prints it to the
 * POSIX standard output
 * @filename: file name
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 * if filename is NULL return 0, if write fails or
 * does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nr, nw;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nr = read(fd, buf, letters);
	nw = write(STDOUT_FILENO, buf, nr);

	close(fd);

	free(buf);

	return (nw);
}
