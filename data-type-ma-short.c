
#include<stdio.h>

int main() {
	short s, *sp;
	
	printf("sizeof short = %lu, s = %lu, short* = %lu, *sp = %lu\n", sizeof(short), sizeof(s), sizeof(short *), sizeof(*sp));
}
