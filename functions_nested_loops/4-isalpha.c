#include "main.h"
/**
  *_isalpha - this function checks for alphabetic character
  *
  * @c: is a variable.
  * Return: 1 if c a letter.
  */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
		return (1);
	}
	return (0);
}
