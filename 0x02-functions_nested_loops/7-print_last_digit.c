
#include "main.h"

/**
 * print_last_digit - This program will assign a random number
 * to the variable n each time it is executed
 * @n: the number that will be analysed
 * Return: last_digit When successful returns a
 */

int print_last_digit(int n)
{
int last_digit;
last_digit = n % 10;
if (n < 0)
{
last_digit *= -1;
}
_putchar(last_digit + '0');

return (last_digit);

}
