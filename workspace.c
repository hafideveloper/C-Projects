
// number comparison with conditional expressions

#include <stdio.h>
#include <stdbool.h>

int main(){

    int number1, number2;

    printf("Please enter two number values: ");
    scanf("%d%d", &number1, &number2);

    if(number1 > number2)
    {
        printf("%d is greater than", number1);
    }

    if(number2 > number1)
    {
        printf("%d is greater than", number2);
    }

    if(number1 == number2)
    {
        printf("Two numbers are equal");
    }

    return 0;
}