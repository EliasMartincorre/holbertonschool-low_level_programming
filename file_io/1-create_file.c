#include"main.h"
/**
  * create_file - funcion que crea un archivo.
  * @text_content: contenido a ser guardado en el file.
  * @filename: nombre del archivo a crear o truncar.
  * Return: 1 on success and -1 on failure.
  *
  */
int create_file(const char *filename, char *text_content)
{
	int fd1, fd2, length = 0;

	if (filename == NULL)
	{
		return (-1);
	}
fd1 = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
if (fd1 < 0)
{
	return (-1);
}
while (text_content)
{
	length++;
}
fd2 = write(fd1, text_content, length);
if (fd2 < 0)
{
	return (-1);
}
return (1);
}
