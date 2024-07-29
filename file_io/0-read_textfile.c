#include "main.h"
/**
 * read_textfile - function that reads a text file and prints it
 * to the POSIX standar output
 * @filename: the text file
 * @letters: the data of the file
 *
 * Return: the actual number of letters it could read and
 * print or return 0 if the file can not
 * be opened or read and if the filename is null or if write
 * fails or does not write
 * the expected amoount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, len, chr;
	char *buf;

	if (!filename || !letters)
		return (0);
	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}
	len = read(fd, buf, letters);
	if (len == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	chr = write(1, buf, len);

	free(buf);
	close(fd);
	if (chr != len)
		return (0);
	return (len);
}
