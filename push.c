#include "monty.h"

/**
 * f_push - adds node to the stack
 * @head:  the stack
 * @counter: counter
 * Return: void
 */
void f_push(stack_t **head, unsigned int counter)
{
	int i, m = 0, flag = 0;

	if (xx.arg)
	{
		if (xx.arg[0] == '-')
			m++;
		for (; xx.arg[m] != '\0'; m++)
		{
			if (xx.arg[m] > 57 || xx.arg[m] < 48)
				flag = 1;
		}
		if (flag == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(xx.file);
			free(xx.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(xx.file);
		free(xx.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	i = atoi(xx.arg);
	if (xx.z == 0)
		addnode(head, i);
	else
		addqueue(head, i);
}
