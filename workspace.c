
// determining whether a number is positive or negative using if-else

#include <stdio.h>
#include <stdbool.h>

int main(){

    int number1, number2, number3, max_number;

    printf("Please enter three numbers: ");
    scanf("%d%d%d", &number1, &number2, &number3);

    if(number1 > number2) // Compare first two numbers to find the larger one
    {
        if(number1 > number3) // If number1 is larger than number2, compare it with number3
        {
            max_number = number1; // if number1 > number2, but number1 > number3
        }
        else
        {
            max_number = number3; // if number1 > number2, but number1 is not greater than number3
        }
    }

    else
    {
        if(number2 > number3) // If number2 is larger than number1, compare it with number3
        {
            max_number = number2; // if number1 is not greater than number2, and number2 is greater than number3
        }
        else
        {
            max_number = number3; // if number1 is not greater than number2, and number2 is not greater than number3
        }
    }

    printf("The largest value among three numbers = %d", max_number); // Print the largest number

    return 0;
}