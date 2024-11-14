// Simple interest calculation

#include <stdio.h>

int main(){

    float principal, time, interestRate, interestAmount;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter time: ");
    scanf("%f", &time);

    printf("Enter interest rate: ");
    scanf("%f", &interestRate);

    interestAmount = (principal * time * interestRate) / 100;

    printf("The amount of interest calculated by simple interest calculation = %f", interestAmount);

    return 0;
}