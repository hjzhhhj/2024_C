#include <stdio.h>

int main(void)
{
	int a;
	int b = 0;
	printf("������ �Է��Ͻÿ�. : ");
	scanf_s("%d", &a);
	int i = 0;
	while (i <= a){
		i++;
		if (i % 2 == 0) {
			b += i;
		}
	}
	printf("1���� %d������ ¦������ %d�Դϴ�.", a, b);
	/*
	scanf_s("%d", &a);
	int i = 0;
	while (i <= a) {
		b += i;
		i++;
	}
	printf("1���� %d������ ���� %d�Դϴ�.", a, b);
	*/
	/*
	int a = 1;
	int n = 10;
	printf("==============================\n");
	printf("     n\tn�� ����\n");
	printf("==============================\n");
	while ( a <= n ) {
		printf("  %d \t %d\n", a, a * a);
		a++;
	}
	*/
	/*
	int a;
	int b = 0;
	printf("����ϰ� ���� ���� �Է��ϼ��� : ");
	scanf_s("%d", &a);
	while (b < 10) {
		b++;
		printf("%d * %d = %d\n", a, b, a * b);
	}
	*/
	/*
	int a, i;
	printf("����ϰ� ���� ���� �Է��ϼ��� : ");
	scanf_s("%d", &a);
	for (i = 1; i <= 9; i++) {
		printf("%d * %d = %d\n", a, i, a*i);
	}
	*/
}