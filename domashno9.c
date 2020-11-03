 #include <stdio.h>
 #include <string.h>

void reverse(char s[]);

int main()
{


    // Задача 8
    /*
    int c;
    int i = 0;
    int n = 0;
    while((c = getchar()) != EOF)
    {
        if((c >='a' && c <='z') || (c >='A' && c <='Z'))
        {
            putchar(c);
        }
    }
    */


    // Задача 9
    /*
    int c;
    int i = 0;
    int n = 0;
    while((c = getchar()) != EOF)
    {
        if((c >='a' && c <='z') || (c >='A' && c <='Z')|| (c>='0' && c <='9'))
        {
            if(c>='0' && c <='9')
            {
                ++n;
                continue;
            }
            ++i;
        }
    }
    printf("\n%d\n", i);
    printf("%d\n", n);
    */

    // Задача 10
    /*
    int iValue = 0;
    for(;;)
    {
        printf("%d\n", iValue);
        iValue++;
        if(iValue == 48)
        {
            break;
        }
    }
    */
    

    // Задача 11
    /*
    char szBuf[10] = "za";
    printf("Codes %s ->", szBuf);
    switch(szBuf[0])
    {
    case 'x':
        printf("No\n");
        break;
    case 'y':
    case 'z':
        switch(szBuf[1])
        {
        case 'a':
            printf("Yes, ");
            break;
        case 'x':
            printf("No, ");
            break;
        default:
            break;
        }
        printf("Maybe\n");
        break;
    case 'a':
        printf("Yes\n");
        break;
    default:
        printf("Unknown\n");
        break;
    }
    */

/*
    // Задача 12
    int c;
    int i = 0;
    int n = 0;
    while((c = getchar()) != EOF )
    {   
        ++i;
        if(i > 8)
            putchar(c);
        if(c == '\n')
        {
            i = 0;
        }
    }*/
/*
    // Задача 13
    int c;
    int i = 0;
    
    while((c = getchar()) != EOF )
    {   
        //pass
    }*/



    /*
    // Задача 14
    int c;
    while((c = getchar()) != EOF)
    {
        if((c >= 65) && c <= 90)
        {
            c += 32;
        }
            putchar(c);
    }*/
    
/*
    // Задача 15
    char str[] = "moR";
    reverse(str);
    printf("%s\n", str);*/

    /*
    // Задача 16
    int i;
    int n = 0;
    char str[] = "2345";
    //for(i=0;i<=strlen(str)-1;i++)
    for(i=0;str[i]>='0' && str[i]<='9';i++)
    {
        n = 10 * n + (str[i] - 48);
                
    }
    printf("%d\n", n);*/
        
    /*
    // Задача 17
    int i;
    long long int A = 1;
    for(i=0;i<8;i++)
    {
        A ^= A << 13;
        A ^= A >> 17;
        A ^= A << 5;
        printf("%d\n", A);
    }*/    
    

	return 0;
}



void reverse(char s[])
{
    int i, j, c;
    for(i=0,j=strlen(s)-1;i<j;i++,j--)
    {
            c = s[i];
            s[i] = s[j];
            s[j] = c;
    }
}