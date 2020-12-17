#include "demo.h"

void init(){
    start = NULL;
};


void printList(){
    node_t *ptr = start;
    while (ptr!=NULL) {
        printf("%d,", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

int add(int n){
    node_t *p = start;
    start = (node_t*)malloc(sizeof(node_t));
    if(!start) return -1;
    start->data = n;
    start->next = p;
    return 0;
}

int dell(int *n){
    node_t *p = start;
    if(start){
        *n = start->data;
        start = start->next;
        free(p);
        return 1;
    }else{
        return 0;
    }
}

node_t *Nthelement(int k){
    int i, count=0;
    node_t *p = start;
    node_t *n = start;
    while (n!=NULL) {
        n = n->next;
        count++;
    }
    //while(p->data!=k){
    if(k>count){
        return NULL;
    }
    for(i=0;i<(count-k);i++){
        if(p->next==NULL){
            return NULL;
        }else{
            p = p->next;
        }
    }
    return p;
}
