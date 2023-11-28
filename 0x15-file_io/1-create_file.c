#include "main.h"

/**
 * create_file - create file
 * @filename: the file to create
 * @text_content: content of text file
 * Return: on success 1 if faliure -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0, wrten;

	/* Check if filename is NULL*/
	if (filename == NULL)
		return (-1);

	/*Create the file with read and write permissions*/
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	/*If text_content == NULL, set it to an empty string*/
	if (text_content == NULL)
		text_content = "";

	/*Calculate the length of the text_content*/
	while (text_content[len])
		len++;

	/*Write the text_content to the file*/
	wrten = write(fd, text_content, len);
	if (wrten == -1)
		return (-1);
	close(fd);

	/*Return 1 on success*/
	return (1);
}
