#include "node.h"

void addNode(node *proot, int val)
{
    node *n = new node();
    n->up = nullptr;
    n->down = nullptr;
    n->number = val;
    
    node *ptr = proot;
    node *prevptr; // = ptr; ? Probaly not needed as the first 
                   //  statement in while is always executed.
    
    int up_count = 0;
    int down_count = 0;

    //Could theoretically be while(True) with a break in the if statemtents
    //But I feel like have ANY break condition seems better then none
    while(ptr != nullptr)
    {
        prevptr = ptr;
        if(val > ptr->number)
        {
            printf("UP\n");
            up_count++;
            ptr = ptr->up;
            if(ptr == nullptr){
                prevptr->up = n;
            }

        } else if(val <= ptr->number){
            printf("DOWN\n");
            down_count++;
            ptr = ptr->down;
            if(ptr == nullptr){
                prevptr->down = n;
            }
        }
    }
    printf("Added node going up %i times and down %i times\n", up_count, down_count);
}

int search(node *root, int val)
{
    node *ptr = root;
    
    return 0;
}
