#include "main.h"

/**
 *jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 *
 *H = hour, m = minutes;
 *
 *Return: 24 hours time;
 *
 */

void jack_bauer(void)
{

int H, m;

for (H = 0; H < 24; H++)
for (m = 0; m <  60; m++)
{
_putchar((H / 10)  + '0');
_putchar((H % 10) + '0');
_putchar(':');
_putchar((m / 10) + '0');
_putchar((m % 10) + '0');
_putchar('\n');
}

}
