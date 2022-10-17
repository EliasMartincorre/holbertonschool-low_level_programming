#include "main.h"
/**
  *_isdigit - cheks for a digit (0 trough 9).
  * @c: is a digit.
  *
  * Return: 1 si el digito es .
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)/** codigo ascii 48=0, 57=9*/
	{
		return (1);
	}
	return (0);
}
