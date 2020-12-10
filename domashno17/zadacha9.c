#include <stdio.h>

int countFreq(char *s);

int main(){
    char *s = "alice was beginning to get very tired of sitting by her sister on the bank, "
            "and of having nothing to do: once or twice she had peeped into the book her sister was reading,"
            " but it had no pictures or conversations in it, ‘and what is the use of a book,’ thought alice"
            " ‘without pictures or conversations?’\n"
            "so she was considering in her own mind (as well as she could, for the hot day made her feel "
            "very sleepy and stupid), whether the pleasure of making a daisy-chain would be worth the trouble"
            " of getting up and picking the daisies, when suddenly a White Rabbit with pink eyes ran close by her.";
    char alphabet[26] = {0};
    while(*s++){
        alphabet[*s - 'a']++;
    }
    for(int i=0;i<26;i++){
        if(alphabet[i]){
            printf("%c - %d\n", i + 'a', alphabet[i]);
        }
    }
    return 0;
}
