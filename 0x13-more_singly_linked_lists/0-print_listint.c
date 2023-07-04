#include "lists.h"

/**
 * print_listint - prints the elements of a list
 * @h: ointer to the ist
 * Return: the numebr of elements of the list
 */

size_t print_listint(const listint_t *h)
{
	unsigned int t = 0;
	const listint_t *ptr = NULL;

	ptr = h;
	if (ptr == NULL)
	{
		return (0);
	}
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		t++;
		ptr = ptr->next;
	}
	return (t);
}
