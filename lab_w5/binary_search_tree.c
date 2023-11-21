#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node * left;
    struct Node * right;
};

/// @brief  function to create a node
struct Node * createNode(int data)
{
    struct Node * node = malloc(sizeof (struct Node));
    node->data = data;
    return node;
}

/* build the following tree
              50
           /     \
          30      70
         /  \    /  \
       20   40  60   80 */
struct Node * buildCustomTree()
{
    struct Node * root = createNode(50);
    root->left = createNode(30);
    root ->right = createNode(70);
    return root;
}

void freeMemory(struct Node * root)
{

}

// A utility function to do inorder traversal of BST
void inorder(struct Node* root)
{
    if (root != NULL) 
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}


int main()
{
    struct Node * root = buildCustomTree();
    inorder(root);

    freeMemory(root);
    return 0;
}