// Assigning values to variables

#include <stdio.h>

int main(){
    int x = 5, y = 6, z = 50; // assign values to different variables on the same line
    printf("%d", x + y + z);
    /*prints the sum of the current values of variables x, y and z
    "%d" is used to print an integer value*/
    printf("\n...\n"); // Skip to a new line with ‘\n’ and then print ‘...’ and then skip to the next line

    x = y = z = 50;
    /* in this line, the value of the variables becomes 50 in a sequential manner. first the value of 50 is equalised to z. the value of the variable z is assigned to y... 
    (assignment is made from right to left)*/
    printf("%d", x + y + z);

    return 0;
}