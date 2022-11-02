#include "main.h"

/**
* read_textfile - reads a text file and prints it to the
* POSIX standard output
* @filename: name of file
* @letters: number of letters it should read and print
* Return: actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t lettersR, lettersWR;
	char *buf;

	fd = open(filename, O_RDONLY);/*open file*/

	if (!filename)
		return (0);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (!buf)
		return (0);

	lettersR = read(fd, buf, letters);
	lettersWR = write(STDOUT_FILENO, buf, lettersR);

	close(fd);

	free(buf);

	return (lettersWR);

}
