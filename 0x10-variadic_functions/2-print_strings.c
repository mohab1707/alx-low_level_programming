#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <stddef.h>

/**
 * print_strings - Print strings separated by a separator.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings to be printed.
 * @...: Variable number of string arguments.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
char *str;
va_start(args, n);
for (i = 0; i < n; i++)
{
str = va_arg(args, char *);
if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}
if (separator != NULL && i != n - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(args);
}
