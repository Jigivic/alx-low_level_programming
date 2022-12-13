#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - returns alphabet noth lower and upper case
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int low = 'a';
	int upp = 'A';

	while (low <= 'z')
	{
		putchar(low);
		low++;
	}
	while (upp <= 'Z')
	{
		putchar(upp);
		upp++;
	}
	putchar('\n');
	return (0);
}

