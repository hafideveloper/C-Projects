
// Finding all factors of a number

#include <stdio.h>

int main(){

    int i, number;

    printf("Enter the number to calculate the factors: ");
    scanf("%d", &number);

    printf("All factors of the number %d: \n", number);

    for(i=1; i<=number; i++)
    {
        //check if 'i' divides 'number' without remainder
        if(number % i == 0)
        {
            printf("%d, ", i);
        }
    }
       
    return 0;
}