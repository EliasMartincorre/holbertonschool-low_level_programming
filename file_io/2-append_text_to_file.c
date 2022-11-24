#include"main.h"
/**
  * append_text_to_file - Add data to the end of the file.
  * @filename: name of the file to add data.
  * @text_content: string to add in the end.
  * Return: 1 on success and -1 on failure.
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0, fd1 = 0, length = 0;/** descriptores y contador*/

if (filename == NULL)/** verificacion de nulidad*/
{
	return (-1);
}
fd = open(filename, O_RDWR | O_APPEND);/**open file, and add the end*/
if (fd < 0)/**se verifica el exito*/
{
	return (-1);
}
if (text_content == NULL)/** verificacion de nulidad del string*/
{
	close(fd);/**si es nulo se cierra el archivo*/
	return (1);
}
while (*(text_content + length))/** se determina el largo del string*/
{
	length++;
}

fd1 = write(fd, text_content, length);/**add string at the end of file*/
close(fd1);
if (fd1 < 0)/** veriicacion de xito*/
{
	return (-1);
}
return (1);
}
