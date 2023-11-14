#include<stdio.h>
#define SIZE 10
void array_add(int* A, int* B, int* C, int size);
void array_print(int* array, int size);
int main() {
	int A[SIZE] = { 1,2,3 };
	int B[SIZE] = { 0 };
	int C[SIZE];
	int i = 0;

	array_add(A, B, C, SIZE);
	printf("A[] = 1 2 3 0 0 0 0 0 0 0 \n");
	printf("B[] = 0 0 0 0 0 0 0 0 0 0 \n");
	printf("C[] =");
	for (i = 0; i < SIZE; i++)
		printf(" %d", C[i]);

	return 0;
}

void array_add(int* A, int* B, int* C, int size) {
	int i;
	for (i = 0; i < size; i++)
		C[i] = A[i] + B[i];
}