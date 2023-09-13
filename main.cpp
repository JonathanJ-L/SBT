#include <iostream>
#include "node.h"

int main(int argc, char* argv[])
{
    //Pointer to root node. root is NOT the root node
    node* root = new node();
    root->up = nullptr;
    root->down = nullptr;
    root->number = 0;

    //Start i at i = 1 to ignore first cmd arg which is the .exe name
    for (int i = 1; i < argc; i++)
    {
        addNode(root, atoi(argv[i]));
    }
    return 0;
}