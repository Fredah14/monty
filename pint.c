#include "monty.h"

/**                                
 * pint - prints the value at the top of the stack
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
printf("%d\n", (*head)->n);
}

