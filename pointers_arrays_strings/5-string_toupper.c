#include "main.h"
/**
  *
  *
  *
  *
  */
char *string_toupper(char *n)
{
	int i = 0;

	for (; n[i] != '\0'; i++)
	{
	if (n[i] >= 'a' &&  n[i] <= 'z')
	{
	n[i] =  (n[i] - 32);
	}
	}
	return (n);
}
