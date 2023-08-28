#include "lists.h"

/**
 * add_nodeint - adds a new node at the start
 * @head: pointer to the first node
 * @n: data to insert in that new node
 * Return: pointer to the new node, or NULL if unsuccessful
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
