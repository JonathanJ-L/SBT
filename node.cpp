#include "node.h"

node *createRoot()
{
    node* root = new node();
    root->up = nullptr;
    root->down = nullptr;
    root->number = 0;
    return root;
}
node *createRoot(int val)
{
    node* root = new node();
    root->up = nullptr;
    root->down = nullptr;
    root->number = val;
    return root;
}

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
        //Save last pointer location
        prevptr = ptr;
        //Move iteration ptr up or down based on val
        //If there is free space set it to the corresponding up or down value
        //of the previous value of pointer
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
    while(ptr != nullptr)
    {
        //Move iteration ptr up or down based on 
        if(val > ptr->number)
        {
            ptr = ptr->up;

        } else if(val < ptr->number){
            ptr = ptr->down;

        } else
        {
            return 1;
        }
    }
    return 0;
}
