#include "main.h"

/**
* append_text_to_file - appends text at the end of a file
* @filename: name of file
* @text_content: NULL terminated string to add at the end of the file
* Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, num_letters, fileWR;

	fd = open(filename, O_RDWR | O_APPEND);

	if (!filename)
		return (-1);

	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		text_content = "";
	}
	else
	{
		for (num_letters = 0; text_content[num_letters]; num_letters++)
		{
			;
		}
		fileWR = write(fd, text_content, num_letters++);

		if (fileWR == -1)
			return (-1);
	}
	close(fd);

	return (1);
}
