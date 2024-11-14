// assigning values to a variable in different number systems

#include <stdio.h>

int main(){

    int a = 35;
    int b = 0b00100011;
    int c = 0x23;

    printf("a = %d\n", a); // In the number order of 10 (decimal)
    printf("b = %d\n", b); // In the number order of 2 (binary)
    printf("c = %d\n", c); // In the number order of 16 (hexadecimal)

    return 0;
}