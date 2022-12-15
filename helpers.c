#include "monty.h"

/**
 * addnode - function that adds node to the head stack
 * @head: head of the stack
 * @n: new value
 * Return: void
 */
void addnode(stack_t **head, int n)
{
	stack_t *new_node, *temp;

	temp = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (temp)
		temp->prev = new_node;
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}

/**
 * f_pop - function that prints the top of the stack
 * @head: double head pointer to the stack
 * @counter: line count
 * Return: nothing
 */
void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(xx.file);
		free(xx.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}

/**
 * f_pint - function that prints the top of the stack
 * @head: double head pointer to the stack
 * @counter: counter
 * Return: nothing
 */
void f_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(xx.file);
		free(xx.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}

/**
 * f_nop - function that does nothing
 * @head: double head pointer to the stack
 * @counter: counter
 * Return: nothing
 */
void f_nop(stack_t **head, unsigned int counter)
{
	(void) counter;
	(void) head;
}
