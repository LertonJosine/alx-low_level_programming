#include <stdio.h>

/**
 * print_last_digit - This program will assign a random number
 * to the variable n each time it is executed
 * @n: the number that will be analysed
 * Return: 0 When successful returns a
 */

int print_last_digit(int n)
{
int last_digit;

last_digit = n % 10;
printf("%d", last_digit);

return (last_digit);

}