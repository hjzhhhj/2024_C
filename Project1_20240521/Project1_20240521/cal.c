#include <stdio.h>

int main() 
{
	int a, b, c, d;
	printf("2���� ������ �Է��Ͻÿ�. : ");
	scanf_s("%d %d", &a, &b);
	printf("+(1), -(2), *(3), /(4), %%(5) : ");
	scanf_s("%d", &c);
	switch (c) {
	case 1 : {
		d = a + b;
		printf("%d + %d = %d", a, b, d);
	}
	case 2 : {
		d = a - b;
		printf("%d - %d = %d", a, b, d);
	}
	case 3 : {
		d = a * b;
		printf("%d * %d = %d", a, b, d);
	}
	case 4 : {
		d = a / b;
		printf("%d / %d = %d", a, b, d);
	}
	case 5 : {
		d = a % b;
		printf("%d %% %d = %d", a, b, d);
	}
	}
	/*
	int a;
	printf("���� �Է��Ͻÿ�. : ");
	scanf_s("%d", &a);
	switch (a) {
	case 1: case 3: case 5: case 7: case 8: case 10: case 12: printf("%d���� �ϼ��� 31�� �Դϴ�.", a); break;
	case 4: case 6: case 9: case 11: printf("%d���� �ϼ��� 30�� �Դϴ�.", a); break;
	case 2: printf("%d���� �ϼ��� 28�� �Դϴ�.", a); break;
	}
	*/
	/*
	int a, b, c, d;
	printf("2���� ������ �Է��Ͻÿ�. : ");
	scanf_s("%d %d", &a, &b);
	printf("+(1), -(2), *(3), /(4), %%(5) : ");
	scanf_s("%d", &c);
	if (c == 1) {
		d = a + b;
		printf("%d + %d = %d", a, b, d);
	}
	else if (c == 2) {
		d = a - b;
		printf("%d - %d = %d", a, b, d);
	}
	else if (c == 3) {
		d = a * b;
		printf("%d * %d = %d", a, b, d);
	}
	else if (c == 4) {
		d = a / b;
		printf("%d / %d = %d", a, b, d);
	}
	else if (c == 5) {
		d = a % b;
		printf("%d %% %d = %d", a, b, d);
	}
	else printf("1, 2, 3, 4, 5�� �Է��ؾ��մϴ�.");
	*/
	return 0;
}