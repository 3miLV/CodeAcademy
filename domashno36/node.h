#ifndef _NODE_H_
#define _NODE_H_
#include "bintree.h"

class Node{
    int val;
    BinTree *left;
    BinTree *right;
    Node();
    Node(int val, BinTree *left, BinTree *right);
    ~Node();
    Node(const Node&);
};
#endif