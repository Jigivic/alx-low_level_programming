#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - to print all possible combinations of a single-digit number
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar ((num % 10) + '0');
	if (num == 9)
		continue;
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
