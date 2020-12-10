#include <stdio.h>

int add(int a, int b);
int del(int a, int b);
int mult(int a, int b);
int delete(int a, int b);

int main(int argc, char **argv ){
    int rez, option, x, n;
    int (*func_ptr[4])() = {add, del, mult, delete};
    while (option != 5) {
        printf("\nИзберете операция:\n"
               "За събиране натиснете 1\n"
               "За изваждане натиснете 2\n"
               "За умножение натиснете 3\n"
               "За деление натиснете 4\n"
               "За изход от програмата натиснете 5\n");
        scanf("%d", &option);
        switch (option){
        case 1:
            printf("Въведете желаните числа:");
            scanf("%d %d", &x, &n);
            rez = (*func_ptr[0])(x, n);
            printf("----------------------------------\n");
            printf("Резултатът от операцията е: %d\n", rez);
            printf("----------------------------------");
            break;
        case 2:
            printf("Въведете желаните числа:");
            scanf("%d %d", &x, &n);
            rez = (*func_ptr[1])(x, n);
            printf("----------------------------------\n");
            printf("Резултатът от операцията е: %d\n", rez);
            printf("----------------------------------");
            break;
        case 3:
            printf("Въведете желаните числа:");
            scanf("%d %d", &x, &n);
            rez = (*func_ptr[2])(x, n);
            printf("----------------------------------\n");
            printf("Резултатът от операцията е: %d\n", rez);
            printf("----------------------------------");
            break;
        case 4:
            printf("Въведете желаните числа:");
            scanf("%d %d", &x, &n);
            rez = (*func_ptr[3])(x, n);
            printf("----------------------------------\n");
            printf("Резултатът от операцията е: %d\n", rez);
            printf("----------------------------------");
            break;
        case 5:
            printf("------------------------------------\n");
            printf("Вие успещно излязохте от програмата\n");
            printf("------------------------------------\n");
            break;
        }
    }
    return 0;
}

int add(int a, int b){
    return a + b;
}

int del(int a, int b){
    return a- b;
}

int mult(int a, int b){
    return a * b;
}

int delete(int a, int b){
    return a / b;
}
