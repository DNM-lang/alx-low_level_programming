#include "main.h"
/**
 * read_textfile -function that reads a text file and prints it to the POSI.
 * @filename: pointer to the file name
 * @letters: letters to be read or writen
 * Return: 0 if the file can not be opened or read, if filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t bytesRead, bytesWritten;
	FILE *file;

	if (filename == NULL)
	{
		return (0);
	}
	file = fopen(filename, "r");

	if (file == NULL)
	{
		return (0);
	}
	buffer = malloc(letters);
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}
	bytesRead = fread(buffer, 1, letters, file);
	if (bytesRead == -1)
	{
		free(buffer);
		fclose(file);
		return (0);
	}
	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	if (bytesWritten == -1 || bytesWritten != bytesRead)
	{
		free(buffer);
		fclose(file);
		return (0);
	}
	free(buffer);
	fclose(file);
	return (bytesWritten);
}
