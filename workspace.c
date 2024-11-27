
// Determining whether a given year is a leap year

#include <stdio.h>
#include <math.h>

int main(){

    float a, b, c;
    float root1, root2, imaginary;
    float discriminant;

    printf("Enter the coefficients a, b, and c of the quadratic equation in the form (ax^2 + bx + c): ");
    scanf("%f%f%f", &a, &b, &c);

    // Calculate the discriminant (b^2 - 4ac)
    discriminant = (b * b) - (4 * a * c);

    // If discriminant is positive, two distinct real roots exist
    if(discriminant > 0) 
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a); // Calculate first root
        root2 = (-b - sqrt(discriminant)) / (2 * a); // Calculate second root

        printf("There are two distinct and real roots: %.2f and %.2f", root1, root2);
    }

    // If discriminant is zero, two real roots are equal
    else if (discriminant == 0)
    {
        root1 = root2 = -b / (2 * a); // Calculate equal real roots

        printf("There are two real roots equal to each other: %.2f and %.2f", root1, root2);
    }

    // If discriminant is negative, two complex roots exist
    else if(discriminant < 0)
    {
        root1 = root2 = -b / (2 * a); // Calculate real part of the complex roots
        imaginary = sqrt(-discriminant) / (2 * a); // Calculate imaginary part of the complex roots
        printf("There are two distinct and complex roots: %.2f + i%.2f and %.2f - i%.2f", root1, imaginary, root2, imaginary);
    }

    return 0;
}