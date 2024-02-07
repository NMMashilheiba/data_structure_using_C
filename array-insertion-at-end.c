#include<stdio.h>
#include<stdlib.h>

int addAtEnd(int arr[], int freePos, int data);

int main(){
	int arr[10], n;

	printf("Enter how many elements: ");
	scanf("%d", &n);

	for(int i = 0; i < n; i++){
		printf("Entet the value:\n");
		scanf("%d", &arr[i]);
	}

	int freePos = n;
	freePos = addAtEnd(arr, freePos, 90);

	for(int i = 0; i < freePos; i++){
		printf("%d ", arr[i]);
	}
	printf("\n%d", freePos );
}

int addAtEnd(int arr[], int freePos, int data){
	arr[freePos] = data;
	freePos += 1;
	return freePos;
}