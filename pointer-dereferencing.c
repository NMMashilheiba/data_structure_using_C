#include <stdio.h>

// pointer is just the physical address in memory
int main()
{
    int age = 30;
    int *pAge = &age;

    double gpa = 3.9;
    double *pGpa = &gpa;

    char grade = 'A';
    char *pGrade = &grade;

    printf("%p \n", pAge);
    printf("%d \n", *pAge); // dereferencing

    // printf("%d", *&*&age); // multiple dereference

    return 0;
}