#include <stdlib.h>

struct Node
{
    int data;
    struct Node * next;
};

// insert a node with data to the end of the list
void push_back(struct Node * head, int data)
{

}

struct Node * toLinkedList(int * data_arr, int N)
{
    struct Node * head = malloc(sizeof(struct Node));

    // for element in array
    // push_back(head, element)

    return head;
}

int * getData(struct Node * head)
{
    int *out = NULL;
    int size = 0;

    while (/* condition */)
    {
        size ++;
        out = realloc(out, size * sizeof(int));
        /* code */
    }

    return out;
}

int main()
{
    int arr[] = {1, 4, 3, 7, 6};
    struct Node * linked_list = toLinkedList(arr, 5);

    return 0; // set break point
}

