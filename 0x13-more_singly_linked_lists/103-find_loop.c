#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list
 * @head: list head
 *
 * Return:  address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *i2;
	listint_t *prev;

	i2 = head;
	prev = head;
	while (head && i2 && i2->next)
	{
		head = head->next;
		i2 = i2->next->next;

		if (head == i2)
		{
			head = prev;
			prev = i2;
			while (1)
			{
				i2 = prev;
				while (i2->next != head && i2->next != prev)
				{
					i2 = i2->next;
				}
				if (i2->next == head)
					break;

				head = head->next;
			}
			return (i2->next);
		}
	}
	return (NULL);
}
