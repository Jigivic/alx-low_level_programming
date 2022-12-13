#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - to print lowercase in reverse
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char lc;

	for (lc = 'z'; lc >= 'a'; lc--)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
