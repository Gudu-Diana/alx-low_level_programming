#include "main.h"

/**
 * print_alphabetx10 - function prints alphabet ten times
 *
 * Return: Always 0
 */

void print_alaphabet_x10(void)
{
	char c, i;

	for (i = 0; i <= 9; i++ )
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
