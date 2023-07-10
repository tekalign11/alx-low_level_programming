#include "lists.h"

/**
 * free_list - frees the list
 * @head: pointer to the list
 */

void free_list(list_t *head)
{
	list_t *freed;
	list_t *temp;

	temp = head;
	while (temp != NULL)
	{
		freed = temp->next;
		free(temp->str);
		free(temp);
		temp = freed;
	}
	head = temp;
}
