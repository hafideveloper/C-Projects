
// Calculating the sum of all integers in a given interval (including the limits)

#include <stdio.h>

int main(){

    int i, lower_limit, upper_limit, sum = 0;

    // Prompt user to enter the lower limit value
    printf("Enter the lower limit value: ");
    scanf("%d", &lower_limit);

    // Prompt user to enter the upper limit value
    printf("Enter the upper limit value: ");
    scanf("%d", &upper_limit);

    // Calculate the sum of all numbers
    for(i = lower_limit; i<=upper_limit; i++)
    {
        sum += i;
    }

    // Display the result
    printf("Sum of the natural numbers between %d and %d =  %d", lower_limit, upper_limit, sum);

    return 0;
}