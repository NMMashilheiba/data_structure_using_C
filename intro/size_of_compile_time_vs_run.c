#include<stdio.h>

int main() {
    int a, b = 1, c = 1;

    a = sizeof(c = ++b + 1);        // this line evaluated on compile time not run time
    printf("a = %d, b = %d, c = %d\n", a, b, c);    
}