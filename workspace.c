
// determining whether a number is positive or negative using if-else

#include <stdio.h>
#include <stdbool.h>

int main(){

    int number;

    printf("Please enter two number values: ");
    scanf("%d", &number);

    // Check if the number is positive
    if(number > 0)
    {
        printf("The number you entered is positive");
    }

    // Check if the number is negative
    else if(number < 0)
    {
        printf("The number you entered is negative");
    }
    
    // If the number is neither positive nor negative, it must be zero
    else
    {
        printf("The number you entered is zero");
    }

    return 0;
}