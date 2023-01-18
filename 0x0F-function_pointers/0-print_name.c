#include "function_pointers.h"

/**
 * print_name - prints the name using a pointer to function
 * @name: is the name to be printed
 * @f: is the pointer to a function tha will print the name
 */

void print_name(char *name, void (*f)(char *))
{
(*f)(name);
}
