#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <stddef.h>

/**
 * print_all - Print data based on a format string.
 * @format: The format string containing types of arguments.
 * @...: Variable number of arguments of different types.
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *separator = "";
char current_format;
char *str;
va_start(args, format);
while (format && format[i])
{
current_format = format[i];
switch (current_format)
{
case 'c':
    printf("%s%c", separator, va_arg(args, int));
    break;
case 'i':
    printf("%s%d", separator, va_arg(args, int));
    break;
case 'f':
    printf("%s%f", separator, (float)va_arg(args, double));
    break;
case 's':
    str = va_arg(args, char *);
    if (str == NULL)
      {
	str = "(nil)";
      }
     printf("%s%s", separator, str);
     break;
default:
     i++;
     continue;
}
separator = ", ";
i++;
}
printf("\n");
va_end(args);
}
