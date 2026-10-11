/*
 * week4_2_struct_student.c
 * Author: Diana
 * Student ID: 260ADB164
 * Description:
 *   Demonstrates defining and using a struct in C.
 *   Define a 'Student' struct with name, id and grade, create two
 *   instances with the values from the instructions, and print them.
 *
 *   This program reads no input. Output must match the format in the
 *   Week 4 instructions exactly (it is checked by the autograder).
 */

#include <stdio.h>
#include <string.h>


struct Student {
    char name[50];
    int id;
    float grade;
};


int main(void) {
    struct Student students[2] = {
        {"Alice Johnson", 1001, 9.1},
        {"Bob Smith", 1002, 8.7}
    };
    for (int i=0; i<2; i++){
        printf("Student %d: %s, ID: %d, Grade: %.1f \n", i+1, students[i].name, students[i].id, students[i].grade);
    }


    return 0;
}
