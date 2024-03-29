#include "main.h"

/**
* create_file - creates a file
* @filename: name of file
* @text_content: NULL terminated string to write to the file
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd, num_letters, fileWR;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (!filename)
		return (-1);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	num_letters = 0;
	while (text_content[num_letters])
	{
		;
		num_letters++;
	}

	fileWR = write(fd, text_content, num_letters);

	if (fileWR == -1)
		return (-1);

	close(fd);

	return (1);
}
