// conversion operations between variable types (typecasting)

#include <stdio.h>

int main(){

     int number1 = 17, number2 = 5;

     int integerDivisionResult;
     float floatDivisionResult;
     double doubleDivisionResult;
     int intResultFromFloatDivision;

     integerDivisionResult = number1 / number2;
     printf("Integer Division Result = %d\n", integerDivisionResult);

     floatDivisionResult = (float) number1 / number2;
     printf("Float Division Result = %.20f\n", floatDivisionResult); //In decimal format, 20 digits after the comma 

     doubleDivisionResult = (double) number1 / number2;
     printf("Double Division Result = %.20f\n", doubleDivisionResult); 

     intResultFromFloatDivision = (int) floatDivisionResult;
     printf("Integerised version of the actual division result of float type = %d\n", intResultFromFloatDivision);
    
    return 0;
}