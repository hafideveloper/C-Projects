
// Print all counting numbers up to a given number (with for and while loops)

#include <stdio.h>

int main(){

    int i, n;

    printf("Enter the upper limit value: ");
    scanf("%d", &n);

    // Print all counting numbers from 1 to n (using a for loop)
    printf("All counting numbers from 1 to %d : \n", n);

    for(i = 1; i<=n; i++)
    {
        printf("%d\n", i);
    }

    printf("...\n");

    // Initialize i to 1 before starting the while loop
    i=1;

    // Print numbers using a while loop
    while(i <= n)
    {
        printf("%d\n", i);
        i++;
    }
       
    return 0;
}