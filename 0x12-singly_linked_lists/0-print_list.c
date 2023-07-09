#include "lists.h"

/**
 * print_list - prints elements of the list
 * @h: pointer
 * Return: number of elements
 */
size_t print_list(const list_t *h)
{
	int t = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		t++;
		h = h->next;
	}
	return (t);
}
