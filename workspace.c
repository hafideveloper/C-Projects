// Basic arithmetic operations

#include <stdio.h>

int main(){
    int number1, number2;
    int sum, difference, product, mode;
    float quotient;

    printf("Please enter two numbers: ");
    scanf("%d%d", &number1, &number2); // Take two numbers and write them to number1 and number2 (& -> pointer arithmetic)

    // perform arithmetic operations
    sum = number1 + number2;
    difference = number1 - number2;
    product = number1 * number2;
    quotient = (float)number1 / number2; // type casting
    mode = number1 % number2;

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", difference);
    printf("Product = %d\n", product); // print integer variable
    printf("Quotient = %f\n", quotient); // print decimal numbers (only f -> prints 6 digits after the dot)
    printf("Mode = %d", mode);

    return 0;
}