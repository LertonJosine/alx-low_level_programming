#include "main.h"

/**
 *times_table - prints the result of the multiplication from 0 to 10
 */

void times_table(void)
{
int result, line, colum;

for (line = 0; line < 10; line++)
{
for (colum = 0; colum < 10; colum++)
{
result = line * colum;
_putchar(result + '0');
_putchar(',')
}
_putchar('\n');
}
}
