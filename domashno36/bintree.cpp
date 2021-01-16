#include "bintree.h"

BinTree::BinTree(){
    std::cout << "constructor" << std::endl;
};

BinTree::BinTree(Node node){
    this->node = &node;
};

BinTree::~BinTree(){
    std::cout << "destructor" << std::endl;
};