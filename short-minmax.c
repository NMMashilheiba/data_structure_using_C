#include<stdio.h>

void short_max_method1();
void short_max_method2();
void short_max_method3();

int main(){
	short_max_method1();	
	short_max_method2();
	short_max_method3();
	
	return 0;
}

void short_max_method3(){
	short s;

	while (++s > 0);
	--s;
	printf("3: Max val for short data-type (signed) is %d\n", s);
}

void short_max_method2(){
	short s;
	short temp;

	s = 0;
	temp = s - 1;

	while (++s > ++temp);
	printf("2: Max val for short data-type (signed) is %d\n", temp);
}

void short_max_method1(){
	short s;
	short temp;

	s = 0;
	temp = s - 1;
	
	// loop to compute max val of short datatype
	while (s > temp){
		s++;		// when s overflows s bcome -ve
		temp++;
	}
	printf("1: Max val for short data-type (signed) is %d\n", temp);
}
