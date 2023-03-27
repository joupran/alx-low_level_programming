#include <stdio.h>
/**
 * puts2 - prints characters in a string
 * @str: string
 * Return: nothing
 */
void puts2(char *str)
{
int len;
int i = 0;
while (str[i] != '\0')
{
len++;
}
for (i = 0; i < len; i += 2)
{
putchar(str[i]);
}
putchar('\n');
}
