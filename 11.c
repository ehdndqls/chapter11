#include<stdio.h>
#define SIZE 4
void merge(int* A, int* B, int* C, int size);
int main() {
	int A[SIZE] = { 2,5,7,8 };
	int B[SIZE] = { 1,3,4,6 };
	int C[SIZE * 2] = { 0 };
	int i;

	merge(A, B, C, SIZE);
	printf("A[] = 2 5 7 8\n");
	printf("B[] = 1 3 4 6\n");
	printf("C[] = ");
	for (i = 0; i < SIZE * 2; i++) {
		printf("%d ", C[i]);
	}

	return 0;
}

void merge(int* A, int* B, int* C, int size) {
	int index_A = 0;
	int index_B = 0;
	int index_C = 0;
	while (1) {
		if (A[index_A] > B[index_B]) {
			C[index_C] = B[index_B];
			index_B++;
			index_C++;
			if (index_B == 4) {
				for (index_A; index_A < size; index_A++, index_C++)
					C[index_C] = A[index_A];
				break;
			}
		}
		else {
			C[index_C] = A[index_A];
			index_A++;
			index_C++;
			if (index_A == 4) {
				for (index_B; index_B < size; index_B++, index_C++)
					C[index_C] = B[index_B];
				break;
			}
		}
	}

}