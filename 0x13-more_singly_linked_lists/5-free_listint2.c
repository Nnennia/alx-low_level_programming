#include "lists.h"

/**
 * free_listint2 - free a listint_t list
 * @head: head of linked lit
 * Return: NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
}
