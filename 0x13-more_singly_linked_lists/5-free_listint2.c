#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees a list
 * @head: parsed head
 * Return success
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
