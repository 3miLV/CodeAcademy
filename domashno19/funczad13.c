#include <stdio.h>
#include "zadacha13.h"

void addEmployee(struct employees *emp){
    printf("Въвеждане на служител:\n");
    printf("Въведете ID: ");
    scanf("%d", &emp->id);
    printf("Въведете име: ");
    scanf("%s", &emp->firstName);
    printf("Въведете презимеме: ");
    scanf("%s", &emp->midName);
    printf("Въведете фамилия: ");
    scanf("%s", &emp->lastName);
    printf("Въведете Позоция: ");
    scanf("%s", &emp->position);
    printf("Въведете  стаж: ");
    scanf("%d", &emp->exp);
    printf("Въведете заплата: ");
    scanf("%f", &emp->salary);
    printf("Име на началник: ");
    scanf("%s", &emp->empBoss.firstName);
    printf("Фамилия на началник: ");
    scanf("%s", &emp->empBoss.lastName);
    printf("\n");
    return;
}
