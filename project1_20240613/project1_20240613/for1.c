#include <stdio.h>

int main() {
	for (int i = 5; i >= 1; i--) {
		for (int j = 5; j >= i; j--) {
			printf("*");
		}
		printf("\n");
	}
	/*
	int a;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &a);
	printf("==================================\n");
	printf("  i \t i의 세제곱 \n");
	printf("==================================\n");
	for (int i = 1; i <= a; i++) {
		printf("   %d\t%d\n", i, i * i * i);
	}
	*/
/*
	int a, b, c;
	c = 0;
	scanf_s("%d %d", &a, &b);
	if (a > b) {
		for (int i = b; i >= a; i++) {
			c += i;
		}
		printf("%d", c);
	}
	else if (a < b) {
		for (int i = a; i <= b; i++) {
			c += i;
		}
		printf("%d", c);
	}
*/
/*
	int a = 0;
	for (int i = 1; i <= 10; i++) {
		a += i;
	}
	printf("1부터 10까지의 정수의 합 = %d", a);
	*/
}