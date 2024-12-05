
// Calculation of the sum of all integers from 1 to a given number

#include <stdio.h>

int main(){

    int i, n, sum = 0;

    printf("Enter the upper limit value: ");
    scanf("%d", &n);

    printf("All counting numbers from 1 to %d: \n", n);

    for(i = 1; i<=n; i++)
    {
        sum += i;
    }

    printf("Sum of the first %d natural numbers = %d", n, sum);

    return 0;
}