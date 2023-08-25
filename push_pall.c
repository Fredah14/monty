#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * push - adds a node to the stack
 * @head: the stack head
 * @count: the line number
 * Return: no return
 */

stack_t *stack = NULL;

void push(stack_t **stack, unsigned int line_number)
{
int k, l;
  
if (!instruction_t.args)
{
dprintf(2, "L%u: ", count);
dprintf(2, "usage: push integer\n");
free_instruction_t();
exit(EXIT_FAILURE);
}
for (l=0; instruction_t.argsl] != '\0'; l++)
{
if (!isdigit(instruction_t.argsl] && instruction_t.args[l] != '-)
{
dprintf(2, "L%u: ", count);
dprintf(2, "usage: push integer\n");
free_instruction_t();
exit(EXIT_FAILURE);
}
}
n = atoi(instruction_t.args);
if (instruction_t.lifo == 1)
add_dnodeint(head, n);
else
add_dnodeint(head, n);
}

/**
 * pall - prints values on the stack
 * @head: the stack head
 * @count: the line number
 * Return: no return
 */

void pall(stack_t **stack, unsigned int line_number)
{
stack_t *current;
(void) count;
*count = *head;
 
while (current)
{
printf("%d\n", current->n);
current = current->next;
}
}

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

return 0;
}
