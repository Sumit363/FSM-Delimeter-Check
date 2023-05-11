#ifndef STACK_H
#define STACK_H
#include "boolean.h"
#include "stack.h"

typedef struct stacknode{
	char data;
	struct stacknode *next;
	} *stack;

void init_stack (stack *);

boolean is_full (void);

boolean is_empty (stack);

void push (stack *, char);

char pop (stack *);

void print_stack (stack);

#endif