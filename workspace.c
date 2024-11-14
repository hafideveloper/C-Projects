// square root calculation

#include <stdio.h>
#include <math.h> // To use the sqrt() function

int main(){

    double number, squareRoot;

    printf("Enter the number to calculate the square root: ");
    scanf("%lf", &number);

    squareRoot = sqrt(number);
    printf("%.2lf square root of the number = %.2lf", number, squareRoot);

    return 0;
}