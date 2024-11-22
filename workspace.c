
// boolean variables

#include <stdio.h>
#include <stdbool.h>

int main(){

    bool isUserAuthenticated = true;
    bool hasNetworkConnection = false;
    printf("%d\n", isUserAuthenticated ); // 1 (true)
    printf("%d\n", hasNetworkConnection ); // 0 (false)
    printf("\n...\n");

    printf("%d\n", 10 > 9); // 1 (true)

    int x = 10;
    int y = 9;
    printf("%d\n", x > y); // 1 (true)
    printf("\n...\n");

    printf("%d\n", 10 == 10); // 1 (true)
    printf("%d\n", 10 == 15); // 0 (false)
    printf("%d\n", 10 != 55); // 1 (true)

    return 0;
}