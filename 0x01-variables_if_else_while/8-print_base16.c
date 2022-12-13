#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - to print all numbers of base 16 in lowercase
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	int num;
	char lowc;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}
	for (lowc = 'a'; lowc <= 'f'; lowc++)
	{
		putchar(lowc);
	}
	putchar ('\n');
	return (0);
}
