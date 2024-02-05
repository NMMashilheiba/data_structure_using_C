#include<stdio.h>

int main() {
    int a = 1, b = 3, c = 2;

    if(a > b)
        if(b > c)
            printf("a > b and b > c");
    else    // a deciving else!!
        printf("something else.\n");
}