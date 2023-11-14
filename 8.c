#include<stdio.h>
#define SIZE 10
int array_sum(int* A, int size);
int main() {
	int A[SIZE] = { 1,2,3 };
	printf("A[] = 1 2 3 0 0 0 0 0 0 0\n");

	printf("월급의 합 = %d\n",array_sum(A, SIZE));

	return 0;
}
int array_sum(int* A, int size) {
	int sum = 0, i;
	for (i = 0; i < size; i++) {
		sum += A[i];
	}
	return sum;
}