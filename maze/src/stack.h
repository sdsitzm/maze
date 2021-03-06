#ifndef STACK_H
#define STACK_H

#include <stdlib.h>
#include <stdbool.h>

typedef struct stack_frame_s
{
  struct stack_frame_s* next;
  int* idx;
} stack_frame_t;

typedef struct stack_s
{
  stack_frame_t* top;
} stack_t;

stack_t* stack_new();
bool stack_empty(stack_t* stack);
int stack_size(stack_t* stack);
int stack_pop(stack_t* stack);
void stack_push(stack_t* stack, int idx);

#endif
