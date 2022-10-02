#include "main.h"
/**
  *int _islower(int c) - Check for lowercase character.
  *
  * Return : (1), (0)
  */

	int _islower(int c)
{   
	if (c <= 'a' && c >= 'z')
	return (1);
	else
		return (0);
} 
