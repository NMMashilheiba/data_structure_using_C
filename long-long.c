#include <stdio.h>

int main()
{
    long long l;
    long sl;

    l = 0xAABBCCDDEEFF00;
    sl = 0xAABBCCDDEEFF00;
    printf("Value of l = 0x%llx\n", l);
    printf("Value of l = 0x%lx\n", sl);
    printf("");
}