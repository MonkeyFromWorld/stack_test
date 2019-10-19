#include "stack_test.h"

void init_stack(char_stack* s) {
    s->stack = ( char *)malloc(MAX_LEN*sizeof(char));
    s->top = 0;
    s->size = 0;
}

void char_push(char_stack* s, const char c, size_t size) {
    assert(size > 0);
    //拓展栈
    if (s->top + size >= s->size) {
        if (0 == s->size) {
            s->size = STACK_INIT_SIZE;
        while(s->top + size >= s->size)
            s->size += s->size >> 1;
        s->stack = (char*)realloc(s->stack, s->size);
        }
    }
    *s->stack = c;
    s->stack ++;
    s->top += size;
}

void char_pop(char_stack* s, char* e) {
    assert(s->top>0);
     s->stack --;
     *e = *s->stack;
     s->top -= 4;
}

void CreateStack(stack *s)
{
    //创建栈空间
    s->base = ( int *)malloc(MAX_LEN*sizeof(int));
    if(!s->base)//判断是否分配空间
    {
        printf("ERROR!\n");
        exit(0);
    }
    s->top = s->base;//栈底指针值赋给栈顶指针
    s->len = 0;
    s->stacksize = MAX_LEN;
}

void push(stack *s,int e)//入栈
{
    if(s->top-s->base >= MAX_LEN)//如果溢出则增加内存分配
    {
        s->base = (int *)realloc(s->base,(s->stacksize+CRE)*sizeof(int));
        if(!s->base)
        {
            printf("ERROR!\n");
            exit(0);
        }
        s->stacksize += CRE;
    }
    *s->top = e;
    s->top++;
}

void pop(stack *s,int *e)//出栈
{
    if(s->base == s->top)//如果出栈完则报错
        printf("ERROR!\n");
    else
    {
        s->top --;
        *e = *s->top;
        s->len--;
    }
}

void clear(stack *s)//清空栈
{
    s->top = s->base;
    s->len = 0;
    s->stacksize = MAX_LEN;
    printf("clear over!\n");
}

void destroy(stack *s)//销毁栈
{
    int i;
    free(s->base);
    printf("destroy over!\n");
}