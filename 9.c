#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 10000
int search(int* A, int size, int search_value);
int main() {
	int i, buf, search_value;
	int A[SIZE];
	srand((unsigned)time(NULL));
	for (i = 0; i < SIZE; i++) {
		A[i] = rand() % 300;
	}
	search_value = 200;
	buf = search(A, SIZE, search_value);
	if (buf == -1)
		printf("월급이 %d만원인 사람이 없습니다. ",search_value);
	else
		printf("월급이 %d만원인 사람의 인덱스=%d ",search_value, buf);

	return 0;
}

int search(int* A, int size, int search_value) {
	int i;
	for (i = 0; i < size; i++) {
		if (A[i] == search_value)
			return i;
	}
	return -1;
}