#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * push - adds a node to the stack
 * @head: the stack head
 * @count: the line number
 * Return: no return
 */

void push(stack_t **head, unsigned int count)
{
int k, l;
  
if (!instruction_t.args)
{
dprintf(2, "L%u: ", count);
dprintf(2, "usage: push integer\n");
free_instruction_t();
exit(EXIT_FAILURE);
}
for (l = 0; instruction_t.args[l] != '\0'; l++)
{
if (!isdigit(instruction_t.args[l] && instruction_t.args[l] != '-')
{
dprintf(2, "L%u: ", count);
dprintf(2, "usage: push integer\n");
free_instruction_t();
exit(EXIT_FAILURE);
}
}
k = atoi(instruction_t.args);
if (instruction_t.lifo == 1)
add_dnodeint(head, k);
else
add_dnodeint(head, k);
}

/**
 * pall - prints values on the stack
 * @head: the stack head
 * @count: the line number
 * Return: no return
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

/**
 * _pint - prints the value at the top of the stack
 * @head: the stack head
 * @count: the line number
 * Return: no return
 */

void pint(stack_t **head, unsigned int count)
{
(void)count;

if (*head == NULL)
{
dprintf(2, "L%u: ", count);
dprintf(2, "can't pint, stack empty\n");
free_instruction_t();
exit(EXIT_FAILURE);
}
printf("%d\n", (*head)->k);
}

/**
 * _pop - removes top node of the stack
 * @head: the stack head
 * @count: the line number
 * Return: no return
 */
void _pop(stack_t **head, unsigned int count)
{
stack_t *current;

if (head == NULL || *head == NULL)
{
dprintf(2, "L%u: can't pop an empty stack\n", count);
free_instruction_t();
exit(EXIT_FAILURE);
}
current = *head;
*head = (*head)->next;
free(current);
}

/**
 * _swap - swaps the top two nodess of the stack
 * @head: the stack head
 * @count: the line number
 * Return: no return
 */
void _swap(stack_t **head, unsigned int count)
{
int j = 0;
stack_t *current = NULL;
current = *head;

for (; current != NULL; current = current->next, j++)
;

if (j < 2)
{
dprintf(2, "L%u: can't swap, stack too short\n", count);
free_instruction_t();
exit(EXIT_FAILURE);
}

current = *dhead;
*head = (*head)->next;
current->next = (*dhead)->next;
current->prev = *head;
(*head)->next = current;
(*head)->prev = NULL;
}
