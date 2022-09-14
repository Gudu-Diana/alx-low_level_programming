#include "main.h"

/**
 *
 * jack_bauer - func that prints every minute of the day of Jack Bauer, starting
 * from 00:00 to 23:59, min loop counts mins, while hour loop counts hours
 * and resets mins
 *
 * Return: 0
 */

void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;
	int rem_hours;
	int rem_minutes;

	while (hours <= 23)
	{
		while (minutes <= 59)
		{
			rem_hours = hours % 10;
			_putchar(hours / 10 + '0');
			_putchar(rem_hours + '0');
			_putchar(':');
			_putchar(minutes / 10 + '0');
			_putchar(rem_minutes + '0');
			minutes++;
			_putchar('\n');
		}
		hours++;
		minutes = 0;
	}
}
