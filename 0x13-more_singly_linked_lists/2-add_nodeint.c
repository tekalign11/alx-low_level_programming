#include "lists.h"

/**
 * add_nodeint - adds a node at the beggining
 * @n: the data to be added
 * @head: pointer to pointer to list
 * Return: Pointer to the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	if (head == NULL)
		return (NULL);

	newnode = (listint_t *)malloc(sizeof(listint_t));

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
