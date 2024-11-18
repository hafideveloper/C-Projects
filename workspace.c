// difference between strlen and sizeof

#include <stdio.h>

int main(){

    char english_alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%d", strlen(english_alphabet));
    printf("\n...\n");
    printf("%d", sizeof(english_alphabet)); //sizeof includes the string terminator
    printf("\n............\n");

    char turkish_alphabet[] = "ABCÇDEFGĞHIİJKLMNOÖPRSŞTUÜVYZ"; //Special characters in Turkish (e.g. Ç, Ğ, İ, Ö, Ş, Ü) usually occupy 2 bytes in UTF-8 encoding
    printf("%d", strlen(turkish_alphabet));
    printf("\n...\n");
    printf("%d", sizeof(turkish_alphabet));
    printf("\n............\n");

    char trial[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%d", strlen(trial));
    printf("\n...\n");
    printf("%d", sizeof(trial)); //Measures the total memory allocated when the array is defined
 
    return 0;
}