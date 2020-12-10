#include <stdio.h>

char *month_name(int n){
    static char *name[] =  {
        "Illegal month",
        "January", "February", "March",
        "April", "May", "June",
        "July", "August", "September",
        "October", "November", "December"
    };
    return(n < 1 || n > 12)? name[0]: name[n];
}

int main(){
    int n= 12;
    char *rez;
    rez = month_name(n);
    printf("%s", rez);
    return 0;
}
