// cm, m and km unit conversions

#include <stdio.h>

int main(){

    float cm, m, km;

    printf("Enter the length in centimetres: ");
    scanf("%f", &cm);

    m = cm / 100.0;
    km = cm / 100000.0;
    
    printf("Length in metres = %.2f m \n", m);
    printf("Length in kilometres = %.2f km", km);

    return 0;
}