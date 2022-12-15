#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

x_t xx = {NULL, NULL, NULL, 0};
/**
 * main - entry point
 * @argc: njmber of args
 * @argv: list of args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *content;
	FILE *file;
	size_t size;
	ssize_t read_line;
	stack_t *stack;
	unsigned int counter;

	size = 0;
	read_line = 1;
	counter = 0;
	stack = NULL;
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	xx.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		content = NULL;
		read_line = getline(&content, &size, file);
		xx.content = content;
		counter++;
		if (read_line > 0)
		{
			run(content, &stack, counter, file);
		}
		free(content);
	}
	free_stack(stack);
	fclose(file);
	return (0);
}
