
// Creating the multiplication table of a given number

#include <stdio.h>

int main(){

    int i, number;

    // Receiving the number from the user for which the multiplication table will be created
    printf("Enter the number for which the multiplication table is to be created: ");
    scanf("%d", &number);

    //Printing the multiplication table from 1 to 10 for the given number
    for(i=1; i<=10; i++)
    {
        printf("%d * %d = %d\n", number, i, (number * i));
    }
       
    return 0;
}