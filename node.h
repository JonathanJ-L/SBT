#pragma once
#include<iostream>

typedef struct node
{
    int number;
    struct node* next;
} node;


/// @brief Prepends a node between 'root' with number = 'val'
/// @param root 
/// @param val 
/// @return Returns a pointer to the newly created prepended node
node* addNode(struct node* root, int val);

int search(struct node* root, int val);