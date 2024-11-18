// string concatenation, copying, and comparison.

#include <stdio.h>
#include <string.h>

int main(){

    char greeting_message[20] = "Hello ";
    char additional_text[] = "World!";
    char copied_message[20];

    // Concatenating strings
    strcat(greeting_message, additional_text); // it appends "World!" to the end of "Hello " (end-to-end addition)
    printf("%s", greeting_message);
    printf("\n...\n");

    // Copying string
    strcpy(copied_message, greeting_message); // it copies greeting_message into copied_message
    printf("%s", copied_message);
    printf("\n...\n");

    // Comparing strings
    printf("%d\n", strcmp(greeting_message, copied_message)); // the strcmp function compares three strings. It returns 0 if they are equal, or a positive/negative value if they are different
    printf("\n...\n");
    printf("%d\n", strcmp(greeting_message, additional_text));
    printf("\n...\n");
    printf("%d\n", strcmp(additional_text, greeting_message));

    return 0;
}