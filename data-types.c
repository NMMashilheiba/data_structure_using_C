/* Data types, Bits & Bytes
 * */

#include<stdio.h>

int main() {
	char c;
	int i;

	printf("c = 255, display value of c = %d\n", c = 255);
	printf("c = 128, display value of c = %d\n", c = 128); // DEFAULT arg promotion: a char arg in printf has a sign, it will pass into the integer.
	printf("c = 128, display value of c = %d\n", i = 128);
	printf("c = -1, displa value of c = %x\n", c = -1);
	printf("%d\n", c = -1);

	printf("i = -2, i in hexa = %x\n", i = -2);
	printf("i = 256, i in hexa = %x\n", i = 256);
	printf("i = -256, i in hexa = %x\n", i = -256);

	return 0;
}
