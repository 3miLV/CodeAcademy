#include <stdio.h>
#include <string.h>

struct tagPaper{
    unsigned m_nBookId;
    char m_szTitle[64];
    char m_szAuthor[64];
    char m_szSubject[256];
};


int main(){
    struct tagPaper stPaper;

    stPaper.m_nBookId = 123456;
    strcpy(stPaper.m_szTitle, "Paper title");
    strcpy(stPaper.m_szAuthor, "Autor");
    strcpy(stPaper.m_szSubject, "paper subject");

    struct tagPaper book1;
    book1.m_nBookId = 1;
    strcpy(book1.m_szTitle, "Kniga 1");
    strcpy(book1.m_szAuthor, "Avtor 1");
    strcpy(book1.m_szSubject, "Titla 1");

    struct tagPaper book2;
    book2.m_nBookId = 2;
    strcpy(book2.m_szTitle, "Kniga 2");
    strcpy(book2.m_szAuthor, "Avtor 2");
    strcpy(book2.m_szSubject, "Titla 2");

    struct tagPaper book3;
    book3.m_nBookId = 3;
    strcpy(book3.m_szTitle, "Kniga 3");
    strcpy(book3.m_szAuthor, "Avtor 3");
    strcpy(book3.m_szSubject, "Titla 3");

    printf("Paper id: %d\n", stPaper.m_nBookId);
    printf("Paper title: %s\n", stPaper.m_szTitle);
    printf("Paper author: %s\n", stPaper.m_szAuthor);
    printf("Paper subject: %s\n", stPaper.m_szSubject);
    printf("\n");
    printf("Paper id: %d\n", book1.m_nBookId);
    printf("Paper title: %s\n", book1.m_szTitle);
    printf("Paper author: %s\n", book1.m_szAuthor);
    printf("Paper subject: %s\n", book1.m_szSubject);
    printf("\n");
    printf("Paper id: %d\n", book2.m_nBookId);
    printf("Paper title: %s\n", book2.m_szTitle);
    printf("Paper author: %s\n", book2.m_szAuthor);
    printf("Paper subject: %s\n", book2.m_szSubject);
    printf("\n");
    printf("Paper id: %d\n", book3.m_nBookId);
    printf("Paper title: %s\n", book3.m_szTitle);
    printf("Paper author: %s\n", book3.m_szAuthor);
    printf("Paper subject: %s\n", book3.m_szSubject);

    return 0;
}
