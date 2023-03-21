#include "main.h"
/**
 * print_alphabet - a function that prints the alphabet, in lowercase
 *
 * Return: Always 0 (Succes)
 */
void print_alphabet_x10(void)
{
	int i;
	int n;
	for (i = 48; i <= 57 ; i++)
	{
		for (n = 97; n <= 122; n++)
	{
		_putchar(n);
	}
	}
	_putchar('\n');
}
