
// Ladder-structured if-else for number comparison

#include <stdio.h>
#include <stdbool.h>

int main(){

    int number1, number2, number3, max_number;

    printf("Please enter three numbers: ");
    scanf("%d%d%d", &number1, &number2, &number3);

    if((number1 > number2) && (number1 > number3)) 
    {
        //if number1 is greater than the other two
        max_number = number1; 
    }        
    else if (number2 > number3)
    {
        //if number2 is greater than the other two
        max_number = number2; 
    }
    else
    {
        // if number3 is greater than the other two
        max_number = number3; 
    }

    printf("The largest value among three numbers = %d", max_number); // Print the largest number

    return 0;
}