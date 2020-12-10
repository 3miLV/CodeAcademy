#include <stdio.h>
#include <string.h>

struct tagPaper{
    unsigned m_nBookld;
    char     m_szTitle[64];
    char     m_szAuthor[64];
    char     m_szSubject[256];
};

void printPaper(struct tagPaper paper){
    printf("%d\n", paper.m_nBookld);
    printf("%s\n", paper.m_szTitle);
    printf("%s\n", paper.m_szAuthor);
    printf("%s\n", paper.m_szSubject);
}

void printPtrPaper(struct tagPaper* pPaper){
    printf("%d\n", pPaper->m_nBookld);
    printf("%s\n", pPaper->m_szTitle);
    printf("%s\n", pPaper->m_szAuthor);
    printf("%s\n", pPaper->m_szSubject);
}

int main(){
    struct tagPaper myPaper = {123456, "Paper title", "Autor", "paper subject"};
    printPaper(myPaper);
    printf("--\n");
    printPtrPaper(&myPaper);
    return 0;
}
