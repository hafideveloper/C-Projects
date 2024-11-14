// Simple and compound interest calculation

#include <stdio.h>
#include <math.h>

int main(){

    float principal, time, interest_rate, simple_interest_amount, compound_interest_amount;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter time: ");
    scanf("%f", &time);

    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);

    simple_interest_amount = (principal * time * interest_rate) / 100; //simple interest calculation 

    printf("Interest calculated by simple interest calculation = %f", simple_interest_amount );

    compound_interest_amount = principal * (pow((1 + interest_rate / 100), time)); // compound interest calculation

    printf("Interest calculated by compound interest calculation = %f", compound_interest_amount);

    return 0;
}