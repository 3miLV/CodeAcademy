#include <stdio.h>

#define swap(t, x, y) ( temp = x, x = y, y = temp)
#define swap2(t, x, y) (t temp = x, x = y, y = temp)

//typedef enum eType{INT, STR, FLOAT } eType;
//typedef union my_var{int iValue; float fValue; char cValue[100];} my_var;
//typedef struct my_type{enum eType mType; /*union my_var mVar;*/} my_type;
//void *temp;

int main(){
    char *b = "aaa";
    char *a = "bbb";
    //float x = 4.5;
    //float y = 5.2;
    int x = 4;
    int y = 6;
    swap2(int, x, y);
    printf("%d %d\n", x, y);
    return 0;   
}