
// determine whether a given character is alphabetical or not

#include <stdio.h>

int main(){

    char character;

    printf("Please enter a character: ");
    scanf("%c", &character);

    if((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')) 
    {
        // If the character is within the range of 'a'-'z' or 'A'-'Z'
        printf("You entered an alphabetical character.");
    }

    else
    {
        // If the character does not fall within the alphabetical ranges
        printf("You entered a non-alphabetic character.");
    }

    return 0;
}