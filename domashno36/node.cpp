#include "node.h"

Node::Node(){
    std::cout << "constructor" << std::endl;
};

Node::Node(int val, BinTree *left, BinTree *right){
    this->val = val;
    this->left = left;
    this->right = right;
};

Node::~Node(){
    std::cout << "destructor" << std::endl;
};