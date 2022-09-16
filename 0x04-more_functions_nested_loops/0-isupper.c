#include "main.h"

/**
 * _isupper - checks for uppercase characters
 * @c: character in question
 * Return: 1 if it is, 0 otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
