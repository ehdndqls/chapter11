#include<stdio.h>
#define SIZE 10
void array_copy(int* A, int* B, int size);
int main() {
	int A[SIZE] = { 1,2,3 };
	int B[SIZE];
	int i;

	array_copy(A, B, SIZE);
	
	printf("A[] = { 1, 2, 3, 0, 0, 0, 0, 0, 0, 0 }\n");
	printf("B[] = {");
	for (i = 0; i < SIZE; i++)
		printf(" %d", B[i]);
	printf(" }\n"); 

	return 0;
}

void array_copy(int* A, int* B, int size) {
	int i;
	for (i = 0; i < size; i++) {
		B[i] = A[i];
	}
}