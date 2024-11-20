
// enumerated type

#include <stdio.h>
#include <string.h>
enum Levels
{
    LOW,
    MEDIUM,
    HIGH
};

int main(){

    enum Levels RoomTemperature = LOW;

    // Print the integer value of RoomTemperature (which will be 0 since LOW is the first value)
    printf("%d", RoomTemperature);

    return 0;
}