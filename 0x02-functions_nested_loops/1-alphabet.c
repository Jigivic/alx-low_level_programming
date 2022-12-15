#include "main.h"

/**
 * print_alphabet - entry point
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	char low = 'a';

	while (low <= 'z')
	{
		_putchar(low);
		low++;
	}
	_putchar('\n');
}

