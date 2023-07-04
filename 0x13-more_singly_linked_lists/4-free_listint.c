#include "lists.h"

/**
 * free_listint - frees the list
 * @head: pointer to the list
 */

void free_listint(listint_t *head)
{
	listint_t *new = head;
	listint_t *next;

	while (new != NULL)
	{
		next = new->next;
		free(new);
		new = next;
	}
}
