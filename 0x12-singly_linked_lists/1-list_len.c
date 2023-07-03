#include "lists.h"

/**
 * list_len - returns the number of elements of a list
 * @h: pointer to the list
 * Return: the number of elements of a list
 */
size_t list_len(const list_t *h)
{
	int t = 0;

	if (h == NULL)
		return (0);
	else
	{
		while (h != NULL)
		{
			t++;
			h = h->next;
		}
	}
	return (t);
}
