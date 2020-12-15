#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void help(char *prog){
    printf("Usage: %s [OPTION]... [FILE]\n"
           "без попдадени параметри изкарва броя на  думите в подадения фаил\n"
           "-c - изкарва броя на символите в подадения файл.\n"
           "-l - изкарва броя на редовете в подадения файл.\n"
           "-w - изкарва броя на думите в подадения фаил\n", prog);
}

int main(int argc, char *argv[]){
    int c_words=0, c_rows=0, c_chars=0;
    FILE *fp = NULL;
    char *prog = argv[0], ch;
    //fp = fopen(argv[1], "r");
        if((fp=fopen(argv[1], "r")) != NULL || (fp=fopen(argv[2], "r")) != NULL ||
            (fp=fopen(argv[3], "r")) != NULL || (fp=fopen(argv[4], "r")) != NULL){
            while((ch = fgetc(fp))!=EOF){
                if(ch == '\n'){
                    c_rows++;
                }if(ch != '\n' || ch != ' '){
                    c_chars++;
                }if(ch == ' ' && ch+1 != ' '|| ch == '\n'){
                    c_words++;
                }
            }
        }else if(strcmp(argv[1], "-h") == 0 && argc == 2){
                help(prog);
                exit(1);
        }else {
            fprintf(stderr, "%s: can not open file\n",prog);
            exit(2);
        }

    if(argc == 2){
        printf("Брой Думи: %d\n", c_words);
    }else if(strcmp(argv[1], "-l") == 0 && argc == 3){
        printf("Брой редове: %d\n", c_rows);
    }else if(strcmp(argv[1], "-c") == 0 && argc == 3){
        printf("Брой символи: %d\n", c_chars);
    }else if(strcmp(argv[1], "-w") == 0 && argc == 3){
        printf("Брой думи: %d\n", c_words);
    }else if(strcmp(argv[1], "-l") == 0 && strcmp(argv[2], "-w") == 0 && argc == 4){
        printf("Брой редове: %d\nБрой думи: %d\n", c_rows, c_words);
    }else if(strcmp(argv[1], "-c") == 0 && strcmp(argv[2], "-w") == 0 && argc == 4){
        printf("Брой символи: %d\nБрой думи: %d\n", c_chars, c_words);
    }else if(strcmp(argv[1], "-l") == 0 && strcmp(argv[2], "-c") == 0 && argc == 4){
        printf("Брой редове: %d\nБрой символи: %d\n", c_rows, c_chars);
    }else if(strcmp(argv[1], "-w") == 0 && strcmp(argv[2], "-l") == 0 && argc == 4){
        printf("Брой думи: %d\nБрой редове: %d\n", c_words, c_rows);
    }else if(strcmp(argv[1], "-w") == 0 && strcmp(argv[2], "-c") == 0 && argc == 4){
        printf("Брой думи: %d\nБрой символи: %d\n", c_words, c_chars);
    }else if(strcmp(argv[1], "-c") == 0 && strcmp(argv[2], "-l") == 0 && argc == 4){
        printf("Брой символи: %d\nБрой редове: %d\n", c_chars, c_rows);
    }else if(strcmp(argv[1], "-c") == 0 && strcmp(argv[2], "-l") == 0 && strcmp(argv[3], "-w") == 0){
        printf("Брой символи: %d\nБрой редове: %d\nБрой думи: %d\n", c_chars, c_rows, c_words);
    }else if(strcmp(argv[1], "-l") == 0 && strcmp(argv[2], "-c") == 0 && strcmp(argv[3], "-w") == 0){
        printf("Брой редове: %d\nБрой символи: %d\nБрой думи: %d\n", c_rows, c_chars, c_words);
    }else if(strcmp(argv[1], "-c") == 0 && strcmp(argv[2], "-w") == 0 && strcmp(argv[3], "-l") == 0){
        printf("Брой символи: %d\nБрой думи: %d\nБрой редове: %d\n", c_chars, c_words, c_rows);
    }else if(strcmp(argv[1], "-l") == 0 && strcmp(argv[2], "-w") == 0 && strcmp(argv[3], "-c") == 0){
        printf("Брой редове: %d\nБрой думи: %d\nБрой символи: %d\n", c_rows, c_words, c_chars);
    }else if(strcmp(argv[1], "-w") == 0 && strcmp(argv[2], "-l") == 0 && strcmp(argv[3], "-c") == 0){
        printf("Брой думи: %d\nБрой редове: %d\nБрой символи: %d\n", c_words, c_rows, c_chars);
    }else if(strcmp(argv[1], "-w") == 0 && strcmp(argv[2], "-c") == 0 && strcmp(argv[3], "-l") == 0){
        printf("Брой думи: %d\nБрой символи: %d\nБрой редове: %d\n", c_words, c_chars, c_rows);
    }else{
        fprintf(stderr, "Грешен синтаксис изпълнете: \"%s -h\" за повече информация.\n", prog);
    }
    fclose(fp);
    return 0;
}
