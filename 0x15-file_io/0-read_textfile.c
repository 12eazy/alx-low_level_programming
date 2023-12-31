#include "main.h"

/**
 * read_textfile - the function that read a text file
 * @filename: Name of file to read
 * @letters: amount of bytes to reaed
 * Return: actual number of letters that can be read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t prntd, wrten;
	int fd;
	char *buff;

	/*Allocate memory for the buff*/
	buff = malloc(letters);
	if (!buff)
		return (0);

	/*Check if the filename is NULL*/
	if (filename == NULL)
		return (0);

	/*Open file in read-write mode*/
	fd = open(filename, O_RDWR);
	wrten = read(fd, buff, letters);
	prntd = write(STDOUT_FILENO, buff, wrten);
	if (fd == -1 || wrten == -1 || prntd == -1 || prntd != wrten)
	{
		free(buff);
		return (0);
	}
	/* Always close the file descriptor*/
	close(fd);

	/*Free the memory allocated to the buffer*/
	free(buff);

	/* Return the number of letters read or printed*/
	return (prntd);
}
