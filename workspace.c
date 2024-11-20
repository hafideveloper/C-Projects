
// access to variable addresses

#include <stdio.h>

int main(){

    char character = 'C';
    int integer = 1;
    float real_number = 10.4f;
    long long large_integer = 98989898911;

    printf("value of character variable = %c, address of character variable = %u\n", character, &character);
    printf("value of integer variable = %c, address of integer variable = %u\n", integer, &integer);
    printf("value of real_number variable = %c, address of real_number variable = %u\n", real_number, &real_number);
    printf("value of large_integer variable = %c, address of large_integer variable = %u\n", large_integer, &large_integer);

    return 0;
}