#include <stdlib.h>
#include <stdio.h>

typedef struct Node NodeType;
// typedef struct Node* NodePtr;
typedef NodeType* NodePtr;

struct Node
{
    int data;
    struct Node * next;
};


// insert a node with data to the end of the list
void push_back(NodePtr head, int data)
{
    NodePtr new_node = malloc(sizeof(NodeType));
    new_node->data = data;
    new_node->next = NULL;

    struct Node *current = head;
    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = new_node;
}

// convert an array to a linked list
NodeType * toLinkedList(int * data_arr, int N)
{
    NodeType *head = malloc(sizeof(NodeType));
    head->data = data_arr[0];
    head->next = NULL;

    for (int i = 1; i < N; i++)
    {
        push_back(head, data_arr[i]);
    }

    return head;
}

void print_list(NodeType * head)
{
    NodeType *current = head;
    while (current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("\n");
}

// get data from linked list, return an array 
int * getData(NodeType * head, int *p_size)
{
    int *out = NULL;
    int size = 0;

    NodeType *current = head;
    while (current != NULL)
    {
        size ++;
        out = realloc(out, size * sizeof(int));
        out[size - 1] = current->data;
        current = current->next;
    }

    *p_size = size;
    return out;
}

void free_list(NodeType * head)
{
    NodeType *current = head;
    while (current != NULL)
    {
        NodeType *temp = current;
        current = current->next;
        free(temp);
    }
}

int main()
{
    int arr[] = {1, 4, 3, 7, 6};
    NodeType * linked_list = toLinkedList(arr, 5);
    print_list(linked_list);

    // declare a structure
    NodeType head_node;
    head_node.data = 1;
    head_node.next = NULL;

    // declare a pointer to a structure
    NodeType * head = &head_node;
    head->data = 1;
    head->next = NULL;

    // (*head).data = 1;
    // (*head).next = NULL;


    // get data from linked list
    int size;
    int *data = getData(linked_list, &size);
    
    for (int i = 0; i < size; i++)
    {
        printf("%d ", data[i]);
    }

    free(data);

    // free linked list
    free_list(linked_list);

    return 0; // set break point
}

