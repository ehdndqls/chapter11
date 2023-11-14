#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 10
void convert(double* grades, double* scores, int size);
int main() {
	int i;
	double grades[SIZE] = { 0 };
	double scores[SIZE] = { 0 };
	
	srand((unsigned)time(NULL));

	for (i = 0; i < SIZE; i++) {
		grades[i] = (double)(rand() % 44) / 10;
		printf("%05.2lf ", grades[i]);
	}
	printf("\n");
	convert(grades, scores, SIZE);
	
	for (i = 0; i < SIZE; i++) 
		printf("%05.2lf ", scores[i]);
	
	return 0;
}
void convert(double* grades, double* scores, int size) {
	int i;
	for (i = 0; i < size; i++) {
		scores[i] = grades[i] * 100.0 / 4.3;
	}
}