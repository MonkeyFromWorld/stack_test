#include "stack_test.h"
#include "stack_test.c"

int main() {
#if 1
    char str;
    char_stack test;
    init_stack(&test);
    char_push(&test, 'c', 4);
    char_push(&test, '1',4);
    char_push(&test, '2',4);
    char_pop(&test, &str);
    printf("%c,", str);
    char_pop(&test, &str);
    printf("%c,", str);
    char_pop(&test, &str);
    printf("%c,", str);
    char_pop(&test, &str);
    printf("%c,", str);

   // free(test.stack);
#endif
#if 0
    int e,f;
    stack s;
    CreateStack(&s);
    e = 1;
    push(&s,e);
    e = 2;
    push(&s,e);
    e = 3;
    push(&s,e);
    pop(&s,&f);
    printf("%d, ",f);
    pop(&s,&f);
    printf("%d, ",f);
    pop(&s,&f);
    printf("%d, ",f);
    clear(&s);
    destroy(&s);
#endif

    return 0;
}