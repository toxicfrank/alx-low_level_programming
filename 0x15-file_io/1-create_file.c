#include "main.h"


/**
 * create_file - creates file
 * @filename: A pointer to the name of the file to create
 * @text_content: A pointer to a string
 * Return: int
 */

int creat_file(const char *filename, char *text_content)
{
	int file_des, count;
	ssize_t content_write;
/*if file name is non-existent, exit*/
	if (filename == NULL)
		return (-1);
	/*create a  file, if not there and write/ trunc it*/
	file_des = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_des == -1)/*on failure, exit*/
		return (-1);
	if (text_content != NULL)/*add content*/
	{
		count = 0;
		/*if the ccounter is not at the null byte of the string, write content*/
		while (*(text_content + count) != '\0')
			count++;
		content_write = write(file_des, text_content, count);
		/*if the writing fails, exit and give a message*/
		if (content_write == -1)
		{
			write(1, "fails\n", 6);
			return (-1);
		}
	}
	close(file_des);
	return (1);
}
