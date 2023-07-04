#include "lists.h"
/**
 * free_listint - function that frees a listint_t list
 * @head: head list
 *
 * Return: no return
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULLL)
	{
		head = head->next;
		free(temp);
	}
}
