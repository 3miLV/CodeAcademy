#ifndef _BINTREE_H_
#define _BINTREE_H_
#include <iostream>
#include "node.h"

class BinTree{
public:
    BinTree();
    BinTree(Node node);
    ~BinTree();
private:
    Node *node;
    BinTree(const BinTree&); 
};
#endif