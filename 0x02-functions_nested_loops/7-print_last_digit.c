#include "main.h"

/**
 *print_last_digit -  prints the last digit of a number.
 *
 *@n: number to find it last digit
 *
 *Return: n % 10;
 *
 */

int print_last_digit(int n)
{

if (n > 0)
{
_putchar((n % 10) + '0');
}

else
{
n = n * -1;
_putchar((n % 10) + '0');
}

return (n % 10);

}
