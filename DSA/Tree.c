#include <stdio.h>
#include <stdlib.h>
struct node // contain value and address
{
    int data;
    struct node *back;
    struct node *next;
};

struct level // group of nodes
{
    int *ptr;
    struct level *backLevel;
    struct level *nextLevel;
};

struct Tree
{
    struct level *T;
    int noOfChildren;
    int noOfLevels;
    int depth;
    struct node root;
    struct level *terminals;
};

struct Tree createTree(int values[], int N)
{
    struct Tree theTree;
    printf("Enter the no of children : ");
    scanf("%d", theTree.noOfChildren);
    struct node *nodes = (struct node *)malloc(sizeof(struct node) * theTree.noOfChildren);
    for (int i = 0; i < N; i++)
    {
        nodes[i].data = values[i];
    }
    theTree.root = nodes[0];
    theTree.root.back = NULL;
    theTree.root.next = (&*) malloc(sizeof(&)*theTree.noOfChildren);
    for (int i = 0; i < theTree.noOfChildren; i++)
    {
        theTree.root.next[i] = 
    }
    
}
int main()
{
    int arr[] = {1, 273, 39, 29, 9, 02, 38, 39, 29, 22, 0, 38, 77, 2, 4, 7};
    int size = sizeof(arr) / sizeof(int);

    return 0;
}