
// How the break command works (in a for loop)

#include <stdio.h>

int main(){

    int i = 0;

    for(i=1; i<=10; i++)
    {
        if (i == 4) {
            break;
        }
        printf("%d\n", i);
    }
       
    return 0;
}