#include "main.h"
/**
 * _islower - Check for lowercase character.
 *
 *int c: variable minuscula
 * return : (1), (0)
 */

	int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
	return (0);
}
