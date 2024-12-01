
// Printing counting numbers up to a given number with a for loop

#include <stdio.h>

int main(){

    int i, n;

    printf("Enter the upper limit value: ");
    scanf("%d", &n);

    printf("All counting numbers from 1 to %d: \n", n);

    /* Loop from 1 to the given number 'n'
       'i' is initialized to 1, the loop continues while 'i' is less than or equal to 'n', 
       and 'i' is incremented by 1 in each iteration
    */

    for(i = 1; i<=n; i++)
    {
        printf("%d\n", i);
    }
    
    return 0;
}