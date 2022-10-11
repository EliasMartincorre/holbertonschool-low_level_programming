#include "main.h"
/**
*
*
*
*
*
*/
char *_strncpy(char *dest, char *src, int n)
	{
 	int i = 0;

	for ( ; dest[i] && i <= (n - 1); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
