#include "main.h"

/**
 *_abs - computes the absolute value of an integer.
 *
 *@n: test number
 *
 *Return: absolute vaue of n;
 */

int _abs(int n)
{
if (n > 0)
n = n;
_putchar(n);

else
n = n * -1;
_putchar(n);

}
