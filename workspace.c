// Calculation of diameter and circumference of the circle

#include <stdio.h>
#include <math.h> //In order to use the M_PI count

int main(){

    float radius, diameter, circumference, area;

    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    diameter = 2 * radius;
    circumference = 2 * 3.14 * radius;
    area = 3.14 * (radius * radius);
    
    printf("Diameter of the circle = %.2f\n ", diameter);
    printf("The circumference of the circle = %.2f\n", circumference);
    printf("Area of the circle = %.2f ", area);

    return 0;
}