#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include"main.h"
/**
  * read_textfile - program read the file.
  * @filename:name the file to read.
  * @letters: size of the text to read.
  * Return: numberthe letter read and print.
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename,  O_RDONLY);/***/
	if (fd == -1)/**stderr codigo de fallo*/
	{
		return (0);
	}

buffer =  malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}

r = read(fd, buffer, letters);/**lectura del archivo*/
if (r == -1)/** verifica sino hubo error*/
{
	free(buffer);/**libera buffer*/
	close(fd);/**close de file*/
	return (0);
}
w = write(STDOUT_FILENO, buffer, r);/**print in the scren*/
if (w == -1)
{
	free(buffer);
	close(fd);
	return (0);
}
	close(fd);
	free(buf);
	return (r);
}
