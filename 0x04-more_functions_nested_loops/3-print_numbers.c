#include "main.h"

/**
 * print_numbers - print 0-9
 * Return: The number since 0-9
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
