#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: the character to be checked
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z');
		return(1);
	return(0);
	
	return(c >= 65 && c <= 90);
	return(c >= 'A' && c <= 'Z');
}
