#include <stdio.h>

enum bool{
    true,
    false
};

struct cars{
    char model[10];
    int price;
    double engine;
    enum bool in_stock;
};


int main(){
    struct cars car[20] = {
        {"alfa romeo", 60000, 3.2, 1},
        {"bmw", 40000, 2.2, 1},
        {"lada", 10000, 1.6, 1},
        {"ford", 18000, 1.8, 0},
        {"dacia", 5000, 1.2, 0},
        {"ferari", 660000, 5.0, 1},
        {"fiat", 22000, 1.4, 1},
        {"renaut", 30000, 2.2, 1},
        {"pegeot", 26000, 1.4, 1},
        {"mazda", 33500, 1.9, 0},
        {"toyota", 43100, 2.0, 1},
        {"honda", 40000, 2.0, 1},
        {"audi", 50000, 3.0, 1},
        {"mercedes", 68000, 3.5, 0},
        {"porsche", 260000, 4.2, 1},
        {"lancia", 33000, 1.8, 0},
        {"seat", 27300, 1.9, 1},
        {"shkoda", 12000, 1.6, 1},
        {"trabant", 3000, 1.0, 1},
        {"rover", 21300, 1.4, 1},
    };

    for(int i=0;i<20;i++){
        printf("%s,%d,%.1f,%d\n", car[i].model, car[i].price, car[i].engine, car[i].in_stock);
    }
    return 0;
}
