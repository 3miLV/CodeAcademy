#include <stdio.h>
#include <stdlib.h>

enum bool{
    true,
    false
};

struct cars{
    char model[10];
    int price;
    float engine;
    enum bool in_stock;
};

int main(int argc, char* argv[]){
    int i=0;
    struct cars car[20];
    for(int i=0;i<20;i++){
        scanf("%[^,],%d,%f,%d", &car[i].model, &car[i].price, &car[i].engine, &car[i].in_stock);
        
    }
    for(int i=0;i<20;i++){
        printf("%s %d %.1f %d", car[i].model, car[i].price, car[i].engine, car[i].in_stock);
    }
    return 0;
}
