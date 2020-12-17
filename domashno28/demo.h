#pragma one
#include <stdio.h>
#include <stdlib.h>

typedef struct node_t node_t;

typedef struct node_t{
    int data;
    node_t *next;
}node_t;

extern node_t *start;

node_t *Nthelement(int k);
void init();
int add(int n);
int dell(int *n);
void printList();
