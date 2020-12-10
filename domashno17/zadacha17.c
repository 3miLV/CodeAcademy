#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int t5ot35();
int t6ot42();
int t6ot49();


void sportToto(){
    int rez=0;
    int options;
    printf("Добре дошли в спорт тото."
           "Изберете игра в която да играете:"
           "За 5 от 35 натиснете 1."
           "За 6 от 42 натиснете 2."
           "За 6 от 49 натиснете 3."
           "За изход от програматанатиснете 4");
    scanf("%d", &options);
    switch (options) {
        case 1:
            printf("Вие избрахте играта 5 от 35,"
                   "пожелаваме ви успех!");
            int optArr[5] = {0};
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
    }


}


int t5ot35(){
    int rez = 0;
    char lower = 5, upper = 35;
    char dif = (upper+1) - lower;
    srand(rand()%time(NULL));
    rez = rand()% dif + lower;
    return rez;
}


int t6ot42(){
    int rez = 0;
    char lower = 6, upper = 42;
    char dif = (upper+1) - lower;
    srand(rand()%time(NULL));
    rez = rand()% dif + lower;
    return rez;
}


int t6ot49(){
    int rez = 0;
    char lower = 5, upper = 35;
    char dif = (upper+1) - lower;
    srand(rand()%time(NULL));
    rez = rand()% dif + lower;
    return rez;
}


void push(){
}


int main(){
    int rez;
    rez = t5ot35();
    printf("%d\n", rez);
    rez = t6ot42();
    printf("%d\n", rez);
    rez = t6ot49();
    printf("%d\n", rez);
}
