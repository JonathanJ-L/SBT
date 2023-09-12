#include "node.h"

node* addNode(struct node *root, int val)
{
    node *n = new node();
    n->number = val;
    n->next = 0;

    n->next = root;
    return n;
}

int search(node *root, int val)
{
    node *ptr = root;
    int cntr = 0;
    while (ptr != NULL)
    {
        if(ptr->number == val)
        {
            printf("Found %i at position %i in list\n", val, cntr);
        }
        ptr = ptr->next;
        cntr++;
    }
    //if no number is found return 1 for error
    return 0;
}
