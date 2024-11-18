// operations with strings 

#include <stdio.h>

int main(){

    char  welcome_message1[]= "Hello!"; // contains null character (\0) 
    char  welcome_message2[]= {'H', 'e', 'l', 'l', 'o', '!', '\0'}; // (\0 -> string terminator)

    printf("%lu\n", sizeof(welcome_message1));
    printf("\n...\n");
    printf("%lu\n", sizeof(welcome_message2));

    return 0;
}