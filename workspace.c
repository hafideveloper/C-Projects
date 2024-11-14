// power/exponent calculations

#include <stdio.h>
#include <math.h> // To use the pow() function

int main(){

    double base, exponent, result;

    printf("Enter the base value: ");
    scanf("%lf", &base); //%lf -> used for decimal (double) numbers
    printf("Enter the exponent value: ");
    scanf("%lf", &exponent);

    result = pow(base, exponent); //calculate the base^force value

    printf("%.2lf ^ %.2lf = %.2lf", base, exponent, result);

    return 0;
}