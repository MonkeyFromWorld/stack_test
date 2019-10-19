#ifndef STACK_TEST__
#define STACK_TEST__

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

#define STACK_INIT_SIZE 16
#define MAX_LEN 100
#define CRE 50

typedef struct {
    char* stack;
    size_t top;
    size_t size;//size 是当前的堆栈容量,top 是栈顶的位置
}char_stack;

typedef struct {
    int len; //current size
    int *top; //栈顶指针
    int *base; //栈底指针
    int stacksize;
}stack;

void init_stack(char_stack* s);
void char_push(char_stack* s, char c, size_t size);
void char_pop(char_stack* s, char* c);

void CreateStack(stack *s);
void push(stack *s,int e);
void pop(stack *s,int *e);
void destroy(stack *s);

#endif