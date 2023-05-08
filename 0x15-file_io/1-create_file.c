#include "main.h"

/**
 * create_file - creates a file
 * @text_content: content written in the file
 * Return: 1 on success Or -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
	int x;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	x = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (x == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	rwr = write(x, text_content, nletters);

	if (rwr == -1)
		return (-1);

	close(x);

	return (1);
}