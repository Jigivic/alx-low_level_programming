#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print lowercase alphabet
 *
 * Return: always 0 (success)
 *
 */
int main(void)
{
	int af = 'a';
	while (af <= 'z')
	{
		putchar(af);
		af++;
	}
	putchar('\n');
	return (0);
}
