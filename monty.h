#ifndef MONTY_H
#define MONTY_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <ctype.h>

extern char **op_toks;
typedef struct globals
{
int lifo;
unsigned int cont;
char *arg;
stack_t *head;
FILE *fd;
char *buffer;
} global_t;

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void _push(stack_t **head, unsigned int count);
void pall(stack_t **head, unsigned int count);
void pint(stack_t **head, unsigned int oount);
void _pop(stack_t **head, unsigned int oount);
void _swap(stack_t **head, unsigned int oount);
void _queue(stack_t **head, unsigned int oount);
void _stack(stack_t **head, unsigned int oount);
void _add(stack_t **head, unsigned int oount);
void _nop(stack_t **head, unsigned int oount);
void _sub(stack_t **head, unsigned int oount);
void _div(stack_t **head, unsigned int oount);
void _mul(stack_t **head, unsigned int oount);
void _mod(stack_t **head, unsigned int oount);
void pchar(stack_t **head, unsigned int oount);
void _pstr(stack_t **head, unsigned int oount);
void _rotl(stack_t **head, unsigned int oount);
void _rotr(stack_t **head, unsigned int oount);

/*get function*/
void (*get_opcodes(char *opc))(stack_t **stack, unsigned int line_number);

/*imported functions*/
int _sch(char *s, char c);
char *_strtoky(char *s, char *d);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void *_calloc(unsigned int nmemb, unsigned int size);
int _strcmp(char *s1, char *s2);

/* doubly linked list functions */
stack_t *add_dnodeint_end(stack_t **head, const int n);
stack_t *add_dnodeint(stack_t **head, const int n);
void free_dlistint(stack_t *head);

/* main */
void free_vglo(void);

#endif
