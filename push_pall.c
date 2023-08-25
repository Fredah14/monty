#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * push - pushes an element to the stack.
 * @head: the stack head.
 * @count: the line number.
 * Return: no return
 */

void push(stack_t **head, unsigned int count)
{
  int n, l = 0, flags = 0;
  
if (!instruction_t.arg)
{
if (instruction_t.arg[0] == '-')
l++;
for (; instruction_t.arg[l] != '\0'; l++)
{
if (instruction_t.arg[l] > 57 || instruction_t.arg[l] < 48)
flags = 1
}
if (flags == 1)
{
fprintf(stderr, "L%u: usage: push integer\n", count);
fclose(instruction_t.file);
free(instruction_t.conten)
free stack(head);
exit(EXIT_FAILURE);
}
}
ele
n = atoi(instruction_t.arg);
if (instruction_t.lifo == 0)
add_dnodeint(head, n);
else
add_dnodeint(head, n);
}

/**
 * pall - prints all the values on the stack,
 * starting from the top of the stack.
 * @head: the stack head
 * @count: the line number
 */

void pall(stack_t **head, unsigned int count)
{
stack_t *current;
(void) count;
current = *head;

while (current)
{
printf("%d\n", current->n);
current = current->next;
}
}
