#include <stdio.h>

// memo to store already calculated fib 
long int memo[1000];

long fib(int n);

int main(){
	int n;

	printf("Enter the nth term of the fibonacci series: ");
	scanf("%d", &n);

	for(int i = 0; i < 1000; i++){
		memo[i] = -1;
	}

	long int res = fib(n - 1);	// n - 1 since for index offseting
	printf("\n%ld\n", res);
}

// 0 1 1 2 3 5 8 
long fib(int n){
	// static long int counter = 1;

	// printf("%d, ", counter);
	// counter += 1;
	// if(counter % 50 == 0){
	// 	printf("\n");
	// }

	// base case
	if(n <= 1){
		return n;
	}

	// memoization
	if(memo[n] != -1){
		return memo[n];
	}

	memo[n] = fib(n -1) + fib(n - 2);

	return memo[n];
}			