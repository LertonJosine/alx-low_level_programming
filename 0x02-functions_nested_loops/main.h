0;10;1c#include <stdio.h>

void print_message(void)
{
printf("_putchar\n");
}

void print_alphabet(void)
{
char letter;
for(letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
putchar('\n');
}
