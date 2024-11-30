
// simple calculator application (switch case)

#include <stdio.h>

int main(){

    char operation;
    float number1, number2, result=0.0f;

    printf("simple calculator application\n");
    printf("-----------------------------\n");
    printf("[number 1] [+ - * /] [number 2] enter\n");

    scanf("%f %c %f", &number1, &operation, &number2);

    // Using switch-case to perform the selected operation
    switch (operation)
    {
    case '+':
    result = number1 + number2;
        break;
    
    case '-':
    result = number1 - number2;
        break;

    case '*':
    result = number1 * number2;
        break;   

    case '/':
    // Prevent division by zero
        if (number2 == 0) {
            printf("Error: Division by zero is not allowed!\n");
            return 1; // Exit the program with an error code
        }
    result = number1 / number2;
        break; 
    
    default: // If an invalid operation is entered
        printf("Invalid operation!");
        return 1; // Exit the program with an error code
    }

    printf("%.2f %c %.2f = %.2f", number1, operation, number2, result);

    return 0; // Indicating successful program execution
}