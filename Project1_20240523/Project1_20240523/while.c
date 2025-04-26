#include <stdio.h>

int main(void)
{
	int a;
	int b = 0;
	printf("정수를 입력하시오. : ");
	scanf_s("%d", &a);
	int i = 0;
	while (i <= a){
		i++;
		if (i % 2 == 0) {
			b += i;
		}
	}
	printf("1부터 %d까지의 짝수합은 %d입니다.", a, b);
	/*
	scanf_s("%d", &a);
	int i = 0;
	while (i <= a) {
		b += i;
		i++;
	}
	printf("1부터 %d까지의 합은 %d입니다.", a, b);
	*/
	/*
	int a = 1;
	int n = 10;
	printf("==============================\n");
	printf("     n\tn의 제곱\n");
	printf("==============================\n");
	while ( a <= n ) {
		printf("  %d \t %d\n", a, a * a);
		a++;
	}
	*/
	/*
	int a;
	int b = 0;
	printf("출력하고 싶은 단을 입력하세요 : ");
	scanf_s("%d", &a);
	while (b < 10) {
		b++;
		printf("%d * %d = %d\n", a, b, a * b);
	}
	*/
	/*
	int a, i;
	printf("출력하고 싶은 단을 입력하세요 : ");
	scanf_s("%d", &a);
	for (i = 1; i <= 9; i++) {
		printf("%d * %d = %d\n", a, i, a*i);
	}
	*/
}