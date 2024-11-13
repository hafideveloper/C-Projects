// Operation of the ++ operator

#include <stdio.h>

int main(){
    int i;

    i = 0;
    printf("%d\n", i);
    printf("%d\n", i++); // first the current value of variable i is printed, then the value is incremented
    printf("%d\n", i);
    printf("%d\n", ++i); // first the value of variable i is incremented, then printed
    printf("%d\n", i);

    return 0;
}