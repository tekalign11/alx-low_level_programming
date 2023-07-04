#include "lists.h"

/**
 * listint_len - prints the number of elements
 * @h: pointer to the list
 * Return: the number of elements of the list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
