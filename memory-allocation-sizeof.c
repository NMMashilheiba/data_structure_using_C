
#include<stdio.h>

int main() {
	char c;
	printf("sizeof c = %lu, %lu\n", sizeof(c), sizeof(char));
	printf("sizeof void = %lu\n", sizeof(void));
	printf("sizeof 100 = %lu, 0xFFFFFFFF = %lu, 0xFFFFFFFFFF = %lu\n", sizeof(100), sizeof(0xFFFFFFFF), sizeof(0xFFFFFFFFFF));
}


/* 100 --> Numerical value: int
 * 0x FF FF FF FF --> byte x 4 = 4 bytes
 * 0x FF FF FF FF FF --> byte x 5 = 5 bytes => 8
*/
