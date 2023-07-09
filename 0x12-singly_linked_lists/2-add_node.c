#include "lists.h"

/**
 * add_node - adds node at the begining
 * @head: poiter to the list
 * @str: pointer to the string to be added
 * Return: the adress of the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *added;

	added = (list_t *)malloc(sizeof(list_t));
	if (added == NULL)
		return (NULL);
	added->str = strdup(str);
	added->next = *head;
	(*head) = added;
	return (added);
}
