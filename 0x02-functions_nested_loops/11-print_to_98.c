#include <stdio.h>
#include "main.h"

/**
 *print_to_98 - prints all natural numbers from n to 98
 *
 *@n: number to test;
 *
 *Return: nothing;
 *
 */

void print_to_98(int n)
{

if (n < 98)
{
for (n = n; n <= 98; n++)
{
printf("%d", n);
if (n == 98)
{
printf("98");
}
}
}

else
{
for (n = n; n >= 98; n--)
{
printf("%d, ", n);
if (n == 98)
{
printf("98");
}
}

}

print("\n");

}
