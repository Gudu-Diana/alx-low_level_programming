#include "main.h"

/**
 *  _islower - function checking lowercase characters
 *  @c: int used for function arguement
 *
 *  Return: Always 0
 */

int int _islower(int c);
{
	if ( c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
