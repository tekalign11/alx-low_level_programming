#include "lists.h"

/**
 * free_list - frees the list
 * @head: pointer to the list
 */

void free_list(list_t *head)
{
	list_t *freed;

	freed = head;
	while (freed != NULL)
	{
		freed = freed->next;
		free(freed);
	}
	head = freed;
}
