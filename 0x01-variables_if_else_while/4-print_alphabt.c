#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - return lowercase except q and e
 *
 * Return: Always 0 (success)
 */
int main(void)

{
	char low = 'a';

	while (low <= 'z')
	{
		if ((low != 'e') && (low != 'q'))
		{
			putchar(low);
		}
		low++;
	}
	putchar('\n');
	return (0);
}
