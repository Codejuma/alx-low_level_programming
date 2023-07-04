#include "lists.h"
/**
 * free_listint2 -  frees a listint_t list
 * @head: head list
 *
 * Return: no return
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = cur->next;
			free(temp);
		}
		*head = NULL;
	}
}
