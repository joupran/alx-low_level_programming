#include "main.h"
/**
 * print_line - prints a line
 * @n: number of lines to be printed
 * Return: void
 */
void print_line(int n)
{
int i;
if (n > 0)
for (i = 0; i < n; i++)
{
_putchar('_');
}
else
{
_putchar('\n');
}
_putchar('\n');
}
