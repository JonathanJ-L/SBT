#include <iostream>
#include "node.h"

int main(int argc, char* argv[])
{

    node* root = createRoot();
    addNode(root, 32);
    //Start i at i = 1 to ignore first cmd arg which is the .exe name
    // for (int i = 1; i < argc; i++)
    // {
    //     addNode(root, atoi(argv[i]));
    // }
    //node* root2 = createRoot();
    // for (int i = 1; i < argc; i++)
    // {
    //     addNode(root2, atoi(argv[i]));
    // }
    if(search(root, 32)) {
        printf("Found 32");
    }
    return 0;
}