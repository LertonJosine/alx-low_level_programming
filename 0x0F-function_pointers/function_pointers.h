#ifndef HEADER_FILE
#define HEADER_FILE function_pointers.h
void array_iterator(int *array, size_t size, void (*action)(int));
void print_name(char *name, void (*f)(char *));

#endif
