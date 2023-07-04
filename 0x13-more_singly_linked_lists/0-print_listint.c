#include "lists.h"

/**
 * print_listint - prints the elements of a list
 * @h: ointer to the ist
 * Return: the numebr of elements of the list
 */

size_t print_listint(const listint_t *h)
{
	size_t t = 0;
	const listint_t *ptr = h;

	if (ptr == NULL)
	{
		return (1);
	}
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		t++;
		ptr = ptr->next;
	}
	return (t);
}
