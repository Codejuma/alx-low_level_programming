#include "lists.h"
/**
 * listint_len - returns the number of elements
 * in a linked listint_t list
 * @h: list head
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
