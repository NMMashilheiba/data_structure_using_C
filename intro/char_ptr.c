#include<stdio.h>

int main() {
    char *ptr = 0;
    *ptr = 'A';     // write operation on memory address 0 or NULL, cannot be done
    
    printf("Value at ptr = %c\n", *ptr);
}