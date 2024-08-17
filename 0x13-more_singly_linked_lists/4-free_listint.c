#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees list
 * @head: parsed head
 * Return: success
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	if (head == NULL)
		exit(1);
	while (temp != NULL)
	{
		temp = temp->next;
		free(temp);
	}
	free(head);
}
