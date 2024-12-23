
// Print all even numbers up to a given number (with for loop)

#include <stdio.h>

int main(){

    int i, n;

    // Prompt user to enter the upper limit value
    printf("Enter the upper limit value: ");
    scanf("%d", &n);

    printf("All even numbers from 1 to %d : \n", n);

    // Check the numbers from 1 to n with a loop
    for(i=1; i<=n; i++)
    {
        // Check if the number is even
        if(i%2 == 0) //If i is exactly divisible by 2, i.e. even
        {
            printf("%d\n", i);
        }
    }
    
    return 0;
}