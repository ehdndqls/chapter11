#include<stdio.h>
int gcd(int x, int y);
void get_lcm_gcd(int x, int y, int *p_lcm, int *p_gcd);
int main() {
	int x, y, tmp, p_lcm, p_gcd;
	printf("�ΰ��� ������ �Է��Ͻÿ�: ");
	scanf_s("%d %d", &x, &y);

	if (x < y) {
		tmp = x;
		x = y;
		y = tmp;
	}

	get_lcm_gcd(x, y, &p_lcm, &p_gcd);

	printf("�ּҰ������ %d�Դϴ�.\n�ִ������� %d�Դϴ�.\n",p_lcm, p_gcd);

}
int gcd(int x, int y) {
	if (x % y == 0)
		return y;
	else
		return gcd(y, x % y);
}
void get_lcm_gcd(int x, int y, int* p_lcm, int* p_gcd) {
	*p_gcd = gcd(x,y);
	*p_lcm = (x * y) / *p_gcd;
}