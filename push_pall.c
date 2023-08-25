#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * push - adds a node to the stack
 * @head: the stack head
 * Return: no return
 */

stack_t *stack = NULL;

void push(stack_t **stack, unsigned int line_number)
{
if (!instruction_t.args)
{
fprintf(stderr, "L%u: usage: push integer\n", line_number);
exit(EXIT_FAILURE);
}

int value = atoi(instruction_t.args);

stack_t *new_node = malloc(sizeof(stack_t));
if (!new_node)
{
fprintf(stderr, "Error: malloc failed\n");
exit(EXIT_FAILURE);
}

new_node->n = value;
new_node->prev = NULL;
new_node->next = *stack;

if (*stack)
(*stack)->prev = new_node;

*stack = new_node;
}

void pall(stack_t **stack, unsigned int line_number)
{
stack_t *current = *stack;

while (current)
{
printf("%d\n", current->n);
current = current->next;
}
}

int main(int argc, char *argv[])
{
if (strcmp(instruction_t.opcode, "push") == 0)
{
push(&stack, line_number);
}
else if (strcmp(instruction_t.opcode, "pall") == 0)
{
pall(&stack, line_number);
}
else
{
fprintf(stderr, "L%u: unknown instruction %s\n", line_number, instruction_t.opcode);
exit(EXIT_FAILURE);
}

n = atoi(instruction_t.args);
if (instruction_t.lifi == 0)
addnode(head, n);
else
addqueue(head,n= n);
return 0;
}
