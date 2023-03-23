#include "monty.h"

#define MAX_LINE_LEN 1024

bus_t bus = {NULL, NULL, NULL, 0};

/**
 * main - monty code interpreter
 * @argc: number of arguments
 * @argv: monty file location
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	char line[MAX_LINE_LEN];
	FILE *file;
	stack_t *stack = NULL;
	unsigned int counter = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");
	bus.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (fgets(line, MAX_LINE_LEN, file))
	{
		bus.content = line;
		counter++;
		execute(line, &stack, counter, file);
	}

	free_stack(stack);
	fclose(file);
	return (0);
}
