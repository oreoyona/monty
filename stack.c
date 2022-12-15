#include "monty.h"

/**
 * free_stack - frees a doubly linked list
 * @head: head of stack
 * Return: void
 */
void free_stack(stack_t *head)
{
	stack_t *tmp;

	tmp = head;
	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}

/**
 * f_stack - prints the top of a stack
 * @head: head of stack
 * @counter: counter
 * Return: void
 */
void f_stack(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	xx.z = 0;
}

/**
 * f_pchar - prints the char of a stack
 * @head: i mean..
 * @counter: it is obvious
 * Return: void
 */
void f_pchar(stack_t **head, unsigned int counter)
{
	stack_t *h;

	h = *head;
	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(xx.file);
		free(xx.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(xx.file);
		free(xx.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}
