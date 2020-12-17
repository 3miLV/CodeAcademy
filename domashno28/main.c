#include "demo.h"
#include <time.h>

node_t *start;

int main(){
    int i, x;
    int n = 7;
    init();
    //add(1);
    //add(2);
    srand(time(NULL));
    for(i=0;i<14;++i){
        add(rand() % 14 + 1);
    }
    //dell(&x);
   printList();
   node_t *curr = Nthelement(n);
   printf("%d\n", *curr);
}
