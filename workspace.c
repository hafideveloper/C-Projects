// Using getchar() and putchar() for character input and output

#include <stdio.h>
#include <math.h>

int main(){

    char student_grade;
    printf("Enter student grade: ");

    student_grade = getchar(); // get the grade with getchar() and store it in the student_grade variable (takes only one character)

    putchar(student_grade); // output the grade with putchar()

    return 0;
}