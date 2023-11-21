
#include <stdlib.h>

/// @brief Implement stack using linked list

struct Node
{
    int data;
    struct Node* next;
};

struct Stack
{
    struct Node* top; // also be the head of the linked list
};

void push(struct Stack* stack, int data)
{

}

int pop(struct Stack* stack)
{

}

// return 1 if the stack is empty otherwise 0
int is_empty(const struct Stack* stack)
{

}

int main()
{
    struct Stack* stack = malloc(sizeof(struct Stack));
    stack->top = NULL;

    push(stack, 1);
    push(stack, 2);
    push(stack, 3);
    push(stack, 4);

    while (!is_empty(stack))
    {
        printf("%d\n", pop(stack));
    }

    free(stack);

    return 0;
}