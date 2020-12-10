#include <stdio.h>
#include "zadacha13.h"


int main(){
    int i = 0;
    struct employees employee[10];
    while(1){
        if(i < 10){
            addEmployee(employee);
        }
        else{
            printf("Достигнахте Максималния брой служители");
            break;
        }
        i++;
    }
    for(int i=0;i<10;i++){
        printf("Номер: %d\nИме: %s %s\nСтаж: %d\nЗаплата: %.2f\nНачалник: %s %s",
                employee[i].id, employee[i].firstName, employee[i].lastName, employee[i].exp,
                employee[i].salary, employee[i].empBoss.firstName, employee[i].empBoss.lastName);
    }

}
