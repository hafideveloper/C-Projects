
// Program to calculate the roots of a quadratic equation using switch-case
// Includes handling for real and distinct roots, complex roots, and equal roots

#include <stdio.h>
#include <math.h>

int main(){

    float a, b, c;
    float root1, root2, imaginary;
    float discriminant;

    printf("Enter the coefficients a, b, and c of the quadratic equation in the form (ax^2 + bx + c): ");
    scanf("%f%f%f", &a, &b, &c);

    // Calculate the discriminant to determine the nature of the roots.
    discriminant = (b * b) - (4 * a * c);

    switch (discriminant > 0)
    {
    case 1: // Case when discriminant > 0: Two distinct and real roots
        root1 = (-b + sqrt(discriminant)) / (2 * a); 
        root2 = (-b - sqrt(discriminant)) / (2 * a);        
        printf("There are two distinct and real roots: %.2f and %.2f", root1, root2);      
        break;
    
    case 0: // Case when discriminant <= 0: Need further checks for exact scenario
        switch (discriminant < 0)
        {
            case 1: 
            // Case when discriminant < 0: Two complex (imaginary) roots.
            root1 = root2 = -b / (2 * a);
            imaginary = sqrt(-discriminant) / (2 * a);
            printf("There are two distinct and complex roots: %.2f + i%.2f and %.2f - i%.2f", root1, imaginary, root2, imaginary);
            break;

            case 0:
            // Case when discriminant == 0: Two real and equal roots.
            root1 = root2 = -b / (2 * a);
            printf("There are two real roots equal to each other: %.2f and %.2f", root1, root2);
            break;

        }
    }
    return 0;
}