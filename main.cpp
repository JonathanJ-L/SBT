#include <iostream>
#include "node.h"

int main(int argc, char* argv[])
{
    node* root = NULL;
    for (int i = 1; i < argc; i++)
    {
        int number = atoi(argv[i]);
        root = addNode(root, number);
    }
    search(root, 3);
    
    return 0;
}