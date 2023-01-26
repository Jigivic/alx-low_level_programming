#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - check the code for Holbeertom school students.
 * @h: name of the list
 * return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h)
	{
		if (h->str ==NULL)
		{
			printf("[0] (nil) \n");
		}
		else
		{
			printf("[%d] %s\n", h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}
