#include "main.h"

/**
 *print_square - print a square using #
 *@size: is the sze of the square
 */
void print_square(int size)
{
int l, c;
if (size > 0)
{
for (l = 1; l <= size; l++)
{
for (c = 1; c <= size; c++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
