#include "monty.h"

/**
 * f_pall - prints everything in the stack
 * @head: double head pointer to the stack
 * @counter: unused line count
 * Return: void
 */
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
