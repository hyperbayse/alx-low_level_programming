#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * insert_nodeint_at_index - insert new node at a given position
 * @head: parsed head
 * @idx: new position index
 * @n: data to be inserted
 * Return: address of the new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	size_t i = 0;
	listint_t *temp = *head;
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (i < idx - 1 && temp != NULL)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
		return (NULL);

	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
