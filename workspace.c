
// Calculating the sum of all integers in a given interval (excluding the limits)

#include <stdio.h>

int main(){

    int i, lower_limit, upper_limit, sum = 0;

    // Prompt user to enter the lower limit value
    printf("Enter the lower limit value: ");
    scanf("%d", &lower_limit);

    // Prompt user to enter the upper limit value
    printf("Enter the upper limit value: ");
    scanf("%d", &upper_limit);

    // Calculate the sum of numbers, excluding the limits
    for(i = lower_limit + 1; i < upper_limit; i++)
    {
        sum += i;
    }

    // Display the result
    printf("Sum of the natural numbers between %d and %d (excluding the limits) =  %d", lower_limit, upper_limit, sum);

    return 0;
}