#include "main.h"
/**
* cap_string - upper first letter
*
* @n: puntero hacia un string
* Return: n upper
*/
char *cap_string(char *n)
{
	int i = 0;

for (; n[i] != '\0'; i++)
	{
if (n[i] >= 'a' && n[i] <= 'z')
	{
if (n[i - 1] == '	' ||
	n[i - 1] == '\n' ||
	n[i - 1] == ' ' ||
	n[i - 1] == '\t' ||
	n[i - 1] == ',' ||
	n[i - 1] == ';' ||
	n[i - 1] == '.' ||
	n[i - 1] == '!' ||
	n[i - 1] == '?' ||
	n[i - 1] == '"' ||
	n[i - 1] == ')' ||
	n[i - 1] == '(' ||
	n[i - 1] == '{' ||
	n[i - 1] == '}' ||
	i == 0)
	n[i] =  (n[i] - 32);
	}
}
	return (n);
}
