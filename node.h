#pragma once
#include<iostream>

//Could possibly make a rootnode struct that does not have a value and is constant
typedef struct node
{
    int number;
    struct node* up;
    struct node* down;
} node;


/// @brief Prepends a node between 'root' with number = 'val'
/// @param root 
/// @param val 
/// @return Returns a pointer to the newly created prepended node
void addNode(node *proot, int val);

int search(struct node* root, int val);