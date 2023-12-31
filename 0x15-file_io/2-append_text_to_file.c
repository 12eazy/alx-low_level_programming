#include "main.h"

/**
 * append_text_to_file - appends text at the end of the task
 * @filename: The file to appends
 * @text_content: content to append to the file
 * Return: on success 1, on failure -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0, wrten;

	if (filename == NULL)
		return (-1);

	/*Open the file in write-only mode and append to it*/
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	/*If text_content is not == NULL*/
	if (text_content)
	{
		/*Calculate the length*/
		while (text_content[len])
			len++;

		wrten = write(fd, text_content, len);

		if (wrten == -1)
			return (-1);
	}
	close(fd);

	/*Return 1 on success*/
	return (1);
}
