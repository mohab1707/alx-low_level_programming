#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Print the opcodes of a function
 * @main_ptr: Pointer to the main function
 * @bytes: Number of bytes to print
 */
void print_opcodes(int (*main_ptr)(int, char **), int bytes)
{
unsigned char *opcodes = (unsigned char *)main_ptr;
if (bytes < 0)
{
printf("Error\n");
exit(2);
}
for (int i = 0; i < bytes; i++)
{
printf("%02x", opcodes[i]);
if (i < bytes - 1)
{
printf(" ");
}
}
printf("\n");
}
/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success, 1 on incorrect arguments,
 * 2 on negative bytes
 */
int main(int argc, char *argv[])
{
if (argc != 2)
{
printf("Error\n");
return (1);
}
int bytes = atoi(argv[1]);
int (*main_ptr)(int, char **) = &main;
if (bytes < 0)
{
printf("Error\n");
return (2);
}
print_opcodes(main_ptr, bytes);
return (0);
}
