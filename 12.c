#include<stdio.h>
void get_int(int* px, int* py);
int main() {
	int px, py;
	get_int(&px, &py);
	printf("������ ���� %d", px + py);
	
	return 0;
}

void get_int(int* px, int* py) {
	printf("2���� ������ �Է��Ͻÿ�(��: 10 20): ");
	scanf_s("%d %d,", px, py);
}