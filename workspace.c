
// Determining whether a given year is a leap year

#include <stdio.h>

int main(){

    int year;

    printf("Enter the year value: ");
    scanf("%d", &year);

    /*
    Leap year rules:
    1. A year is a leap year if it is divisible by 4 but not divisible by 100.
    2. Alternatively, a year is a leap year if it is divisible by 400.
    If none of these conditions are met, the year is not a leap year.
    */

    if(((year % 4 == 0) && (year % 100 != 0)) || year % 400 == 0) 
    {
        printf("The given year is a leap year.");
    }        
    else
    {
        printf("The given year is not a leap year.");
    }

    return 0;
}