#pragma once
#include<iostream>

//Could possibly make a rootnode struct that does not have a value and is constant
typedef struct node
{
    int number;
    struct node* up;
    struct node* down;
} node;

node* createRoot();
node* createRoot(int val);

/// @brief Adds a node to rtnode, UP if val is greater and DOWN if val is lower.
/// Continues till a free space is found
/// @param rtnode
/// @param val 
void addNode(node *rtnode, int val);


/// @brief Searches for a value(val) starting from (rtnode) descending.
/// @param rtnode - The starting node of the search
/// @param val    - The value to search for
/// @return Returns 1 if it succeeded finding val, 0 if it failed
int search(struct node* rtnode, int val);