// Calculation of rectangle area and perimeter

#include <stdio.h>

int main(){

    float height, width, perimeter, area;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &height);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    perimeter = 2 * (height + width);
    printf("Rectangle perimeter = %f\n ", perimeter);

    area = height * width;
    printf("Rectangle area = %f", area);

    return 0;
}