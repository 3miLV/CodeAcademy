#include <stdio.h>
#include <string.h>


int globalX = 0;

void reverseString(char str[]);
void reverseString2(char str[]);
void replaceChar();
void lowerCase();
void test();
void stat();
float faceOfCircle(float R);
float ellipseFace(float A, float B);



int main(int argc, char* argv[])
{
        char str[] = "Hello";
        reverseString(str);
        reverseString2(str);
        replaceChar();
        lowerCase();
        test();
        test();
        test();
        stat();
        printf("%f\n", faceOfCircle(1));
        printf("%f\n", faceOfCircle(1.5));
        printf("%f\n", faceOfCircle(13));
        printf("%f\n", ellipseFace(5, 13));

}

void reverseString(char str[])
{
        char rts[5];
        rts[0] = str[4];
        rts[1] = str[3];
        rts[2] = str[2];
        rts[3] = str[1];
        rts[4] = str[0];
        //rts[5] = '\0';
        printf("%s\n", rts);
        return;            
}

void reverseString2(char str[])
{
        char rts[5];
        int i = strlen(str);
        int j = 0;
        while(i>=0)
        {
                rts[j++] = str[--i];
        }
        rts[strlen(str)] = '\0';
        printf("%s\n", rts);
        return;            
}

void replaceChar()
{
        char str[] = "Hello";
        int i = 0;
        while(str[i]!='\0')
        {
                if(str[i] == 'l')
                {
                        str[i] = 'x';
                }
                i++;
        }
        printf("%s\n", str);
        return;
}

void lowerCase()
{
        char str[] = "HELLO";
        int i = 0;
        while(str[i]!='\0')
        {
                if(str[i] >= 'A' && str[i] <='Z')
                {
                        str[i] = str[i] + 32;
                }
                i++;
        }
        printf("%s\n", str);
        return;
}

void test()
{
        globalX += 1;
        printf("globalX = %d\n", globalX);
}

void stat()
{
        static const char* staticHELP = 
        "Here are "
        "instructions for "
        "the program.\n";;
        printf("staticHELP = %s\n", staticHELP);
}

float faceOfCircle(float R)
{
        float result = 0;
        const long double pi = 3.14159265358979323846264338327950288419716939937510582097494459230781640628620899;
        result = pi * R * R;
        return result;
}

float ellipseFace(float A, float B)
{
        float result = 0;
        const long double pi = 3.14159265358979323846264338327950288419716939937510582097494459230781640628620899;
        result = pi * A * B;
        return result;
}