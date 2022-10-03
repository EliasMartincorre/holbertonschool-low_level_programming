#include "main.h"
/**
* _islower - Check for lowercase character.
*
* @c: variable minuscula
* Return: 1 if character lowercase.
*/

	int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
	return (0);
}
