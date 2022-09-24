#include "main.h"

/**
 *print_sign - the sign of a number.
 *
 *@n: test integer
 *
 *Return: 1 if positive, 0 if equal, -1 if negative;
 *
 */

int print_sign(int n)
{

if (n > 0)
{
_putchar('+');
return (1);
}

else if (n == 0)
{
_putchar('0');
return (0);
}

else (n < 0)
_putchar('-');
return (-1);

}
