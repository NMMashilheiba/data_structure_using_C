
#include<stdio.h>
int main() {
	char c, *cp;
	
	printf("sizeof char * = %lu\nsizeof *cp = %lu\nsizeof cp = %lu\n", sizeof(char *), sizeof(*cp), sizeof(cp));
	printf("sizeof c = %lu\n", sizeof(c));
}
