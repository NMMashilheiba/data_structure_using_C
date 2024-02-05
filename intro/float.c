#include<stdio.h>

// by default C has an affinity for double datatype
int main() {
    float f = 0.1;      // 0.1 ==> Double data-type

    if(f == 0.1){       // f nad 0.1 shoulc be same datatype to compare
        printf("True\n");
    } else {
        printf("False\n");
    }
}