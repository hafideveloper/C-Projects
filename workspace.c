
//In Union all members share the same memory, so only the last assigned value is valid.

#include <stdio.h>
#include <string.h>
union Data
{
    int i;
    float f;
    char str[20];
};

int main(){
    
    union Data data;

    data.i = 10;
    data.f = 220.5;
    strcpy (data.str, "C programming");

    printf("Size of data : %d\n", sizeof(data));
    printf("data.i : %d\n", data.i);
    printf("data.f : %2f\n", data.f);
    printf("data.str : %s\n", data.str);
    printf("\n.....\n");

    data.i = 103;

    printf("Size of data : %d\n", sizeof(data));
    printf("data.i : %d\n", data.i);
    printf("data.f : %2f\n", data.f);
    printf("data.str : %s\n", data.str);
    printf("\n.....\n");

    data.f = -203.45;

    printf("Size of data : %d\n", sizeof(data));
    printf("data.i : %d\n", data.i);
    printf("data.f : %2f\n", data.f);
    printf("data.str : %s\n", data.str);
    printf("\n.....\n");

    return 0;
}