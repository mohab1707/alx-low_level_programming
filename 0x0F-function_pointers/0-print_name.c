#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - Prints a name using a function pointer
 * @name: Pointer to the name to be printed
 * @f: Pointer to the print function
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
f(name);
}
}
