#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void genPass(char *rez){
    int i;
    char lower = '!', upper = '~';
    char dif = (upper+1) - lower;
    srand(time(NULL));
    for(i=0;i<6;i++){
        *rez++ = rand()% dif + lower;
    }
    *rez = '\0';
    return;
}

int main(){
    char s[6]={0};
    int option;
    printf("Здраейте,\n"
            "За да генерирате парола натиснете 1\n"
            "За да излезете от програмата натиснете 2\n");
    while(option != 2){
        scanf("%d", &option);
        switch (option) {
        case 1:
            printf("Генерираната парола е: ");
            genPass(s);
            printf("%s\n", s);
            printf("Ако генерираната парола не ви харесва натиснете 1\n"
                    "Ако желаете тази парола натиснете 2\n");
            break;
        case 2:
            printf("Благодарим ви за използването на програмата\n"
                   "вие успешно генерирахте вашата парола.\n"
                   "вашата парола е %s\n", s);
            break;
        }
    }
    return 0;
}
