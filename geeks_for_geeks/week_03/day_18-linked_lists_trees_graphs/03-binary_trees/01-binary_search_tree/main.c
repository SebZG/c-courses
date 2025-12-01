// C program to to implement binary tree

#include <stdio.h>
#include <stdlib.h>

// Define a structure for tree nodes
typedef struct Node node;

struct Node
{
    int data;
    node *left;
    node *right;
};

// Function to create a new node
node *createNode(int data)
{
    node *newNode = (node *)malloc(sizeof(node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function for insertion a node in a binary tree
void insert(node **root, int data)
{
    node *newNode = createNode(data);
    if (!newNode)
    {
        printf("Memory allocation failed\n");
        return;
    }
    if (*root == NULL)
    {
        *root = newNode;
        return;
    }

    // Level order traversal to find the
    // appropriate place for insertion
    node *temp;
    node *queue[100];
    int front = -1, rear = -1;
    queue[++rear] = *root;

    while (front != rear)
    {
        temp = queue[++front];

        // Insert new node as the left child
        if (temp->left == NULL)
        {
            temp->left = newNode;
            return;
        }
        else // if left child is not missing, push it to the queue
        {
            queue[++rear] = temp->left;
        }
        // Insert new node as the right child
        if (temp->right == NULL)
        {
            temp->right = newNode;
            return;
        }
        else // if right child is not missing, push it to the queue
        {
            queue[++rear] = temp->right;
        }
    }
}

// Function to perform level order traversal to find
// the deepest rightmost node
node *getDeepestRightmostNode(node *root)
{
    node *temp;
    node *queue[100];
    int front = -1, rear = -1;
    queue[++rear] = root;

    while (front != rear)
    {
        temp = queue[++front];

        if (temp->left != NULL)
        {
            queue[++rear] = temp->left;
        }

        if (temp->right != NULL)
        {
            queue[++rear] = temp->right;
        }
    }

    return temp;
}

// Function for deleting deepest rightmost
// node in a binary tree
void deleteDeepestRightmostNode(node *root, node *dNode)
{
    node *temp;
    node *queue[100];
    int front = -1, rear = -1;
    queue[++rear] = root;

    while (front != rear)
    {
        temp = queue[++front];

        if (temp == dNode)
        {
            temp = NULL;
            free(dNode);
            return;
        }

        if (temp->right != NULL)
        {
            if (temp->right == dNode)
            {
                temp->right = NULL;
                free(dNode);
                return;
            }
            else
            {
                queue[++rear] = temp->right;
            }
        }

        if (temp->left != NULL)
        {
            if (temp->left == dNode)
            {
                temp->left = NULL;
                free(dNode);
                return;
            }
            else
            {
                queue[++rear] = temp->left;
            }
        }
    }
}

// Function to delete node in the binary tree
void delete(node **root, int data)
{
    if (*root == NULL)
    {
        printf("Tree is empty.\n");
        return;
    }

    if ((*root)->left == NULL && (*root)->right == NULL)
    {
        if ((*root)->data == data)
        {
            free(*root);
            *root = NULL;
            return;
        }
        else
        {
            printf("Node not found.\n");
        }
    }

    node *temp;
    node *queue[100];
    int front = -1, rear = -1;
    queue[++rear] = *root;
    node *keyNode = NULL;

    while (front != rear)
    {
        temp = queue[++front];

        if (temp->data == data)
        {
            keyNode = temp;
        }

        if (temp->left != NULL)
        {
            queue[++rear] = temp->left;
        }

        if (temp->right != NULL)
        {
            queue[++rear] = temp->right;
        }
    }

    if (keyNode != NULL)
    {
        node *deepestNode = getDeepestRightmostNode(*root);
        keyNode->data = deepestNode->data;
        deleteDeepestRightmostNode(*root, deepestNode);
    }
    else
    {
        printf("Node not found.\n");
    }
}

// Function to search for a node in the binary tree
node *search(node *root, int data)
{
    if (root == NULL)
    {
        return NULL;
    }

    node *temp;
    node *queue[100];
    int front = -1, rear = -1;
    queue[++rear] = root;

    while (front != rear)
    {
        temp = queue[++front];

        if (temp->data == data)
        {
            return temp;
        }

        if (temp->left != NULL)
        {
            queue[+rear] = temp->left;
        }

        if (temp->right != NULL)
        {
            queue[++rear] = temp->right;
        }
    }

    return NULL;
}

// Function to perform inorder traversal in a binary tree
void inorderTraversal(node *root)
{
    if (root == NULL)
    {
        return;
    }

    inorderTraversal(root->left);
    printf("%d ", root->data);
    inorderTraversal(root->right);
}

int main()
{
    node *root = NULL;

    // Inserting nodes
    insert(&root, 20);
    insert(&root, 30);
    insert(&root, 40);
    insert(&root, 50);
    insert(&root, 60);
    insert(&root, 70);
    insert(&root, 80);

    // Inorder traversal
    printf("Inorder traversal of the given Binary Search "
           "Tree is: ");
    inorderTraversal(root);
    printf("\n");

    // Deleting a node
    int deleteValue = 20;
    delete(&root, deleteValue);
    printf("After deletion of %d: ", deleteValue);
    inorderTraversal(root);
    printf("\n");

    // Inserting a new node
    int insertValue = 25;
    insert(&root, insertValue);
    printf("After insertion of %d: ", insertValue);
    inorderTraversal(root);
    printf("\n");

    // Searching for a node
    int target = 25;
    node *searchResult = search(root, target);
    if (searchResult != NULL)
    {
        printf("Node %d found in the BST.\n", target);
    }
    else
    {
        printf("Node %d not found in the BST.\n", target);
    }

    return 0;
}
