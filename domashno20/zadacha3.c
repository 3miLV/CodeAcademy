#include <stdio.h>
#include <string.h>

struct my_prod{
    int pr_quantity;
    char pr_name[20];
    float pr_price;
};

int main(){
    struct my_prod prod;
    prod.pr_quantity = 50;
    prod.pr_price = 2.50;
    strcpy(prod.pr_name, "Chocolate");
    printf("%s %.2f %d\n", prod.pr_name, prod.pr_price, prod.pr_quantity);
    return 0;
}
