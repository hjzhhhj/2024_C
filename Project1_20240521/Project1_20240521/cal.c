#include <stdio.h>

int main() 
{
	int a, b, c, d;
	printf("2개의 정수를 입력하시오. : ");
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
	printf("달을 입력하시오. : ");
	scanf_s("%d", &a);
	switch (a) {
	case 1: case 3: case 5: case 7: case 8: case 10: case 12: printf("%d월의 일수는 31일 입니다.", a); break;
	case 4: case 6: case 9: case 11: printf("%d월의 일수는 30일 입니다.", a); break;
	case 2: printf("%d월의 일수는 28일 입니다.", a); break;
	}
	*/
	/*
	int a, b, c, d;
	printf("2개의 정수를 입력하시오. : ");
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
	else printf("1, 2, 3, 4, 5중 입력해야합니다.");
	*/
	return 0;
}