#include<stdio.h>
int gcd(int x, int y);
void get_lcm_gcd(int x, int y, int *p_lcm, int *p_gcd);
int main() {
	int x, y, tmp, p_lcm, p_gcd;
	printf("두개의 정수를 입력하시오: ");
	scanf_s("%d %d", &x, &y);

	if (x < y) {
		tmp = x;
		x = y;
		y = tmp;
	}

	get_lcm_gcd(x, y, &p_lcm, &p_gcd);

	printf("최소공배수는 %d입니다.\n최대공약수는 %d입니다.\n",p_lcm, p_gcd);

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