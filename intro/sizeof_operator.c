#include<stdio.h>

// binary operator in C need its operand to be of same datatype
int main(){
    
    if(sizeof(int) > -1){       // here -1 is also treated as unsigned int, thus it is the largest  
        printf("True");
    } else {
        printf("False");
    }
}