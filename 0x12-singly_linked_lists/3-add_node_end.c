#include "lists.h"

/**
 * add_node_end - addes a node at last
 * @head: pointer to the node
 * @str: value of the node to be added
 * Return: pointer to the node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last_node;
	list_t *temp;
	unsigned int length = 0;
	const char *orig_str = str;

	while (*str != '\0')
	{
		length++;
		str++;
	}
	last_node = (list_t *)malloc(sizeof(list_t));
	if (last_node == NULL)
		return (NULL);
	last_node->str = strdup(orig_str);
	last_node->len = length;
	last_node->next = NULL;
	if (*head == NULL)
	{
		(*head) = last_node;
		return (*head);
	}
	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = last_node;
	return (last_node);
}
