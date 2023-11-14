#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void array_fill(int* A, int size);

int main() {
	int A[10] = { 0 }, size, i;
	size = sizeof(A) / sizeof(A[0]);

	srand((unsigned)time(NULL));

	array_fill(A, size);

	for (i = 0; i < size; i++)
		printf("%d ", A[i]);

	return 0;
}

void array_fill(int* A, int size) {
	int i;
	for (i = 0; i < size; i++) {
		*(A+i) = rand();
	}
}