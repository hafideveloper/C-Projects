
// pointer concept

#include <stdio.h>

int main(){

    int number = 10;
    int * pointer;

    // the pointer is assigned the address of the variable ‘number’
    pointer = &number;

    printf("address of number variable = %d\n",  &number);
    printf("value of number variable = %d\n", number);

    printf("address of pointer variable = %d\n", &pointer);
    printf("value of pointer variable = %d\n", pointer);
    printf("value pointed to by number variable = %d\n", *pointer); // prints the value pointed to by the ‘pointer’ pointer (i.e. the variable ‘number’), 10

    return 0;
}