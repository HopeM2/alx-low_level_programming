#include "main.h"

/**
 * print_alphabet - function to print
 *
 * Return: Always 0
 */

Void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		++ch;

	}
	putchar('\n');

	return (0);
}
