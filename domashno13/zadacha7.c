#include <stdio.h>

int g_monts[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int is_leap(int y){
    if(y % 4 == 0 && y % 100 != 0){
        return 1;
    }
    else if(y % 4 == 0 && y % 100 == 0 && y % 400 == 0)
    {
        return 1;
    }
    return 0;
}

int getDayOfYaer(int y, int m, int d){
    int i;
    int sum = 0;
    int temp = 0;
    if(is_leap(y) == 0){
        g_monts[1] == 28;
    }
    else{
        g_monts[1] = 29;
    }
    if(g_monts[m-1] < d)
    {
        return -1;
    }
    for(i=0;i<m;i++){
        sum += g_monts[i];
    }
    temp = g_monts[m-1] - d;
    sum -= temp;
    return sum;
}

int main(){
    int y = 2017;
    int m = 7;
    int d = 15;
    int rez = getDayOfYaer(y, m, d);
    if(rez == -1)
        printf("%d не е високосна година.\n", y);
    else
        printf("%d %d %dг. е %d-тия ден от годината.\n", d, m, y, rez);
    return 0;
}
