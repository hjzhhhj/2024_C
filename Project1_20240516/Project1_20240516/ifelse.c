#include <stdio.h>
int main(void)
{
	char ch;
	printf("문자를 입력하시오. : ");

	ch = getchar();
	if (ch >= 'A' && ch <= 'Z') {
		printf("%c는 대문자입니다.", ch);
	}
	else if (ch <= 9 && ch >= 1) {
		("%c는 숫자입니다.", ch);
	}
	else if (ch >= 'a' && ch <= 'z') {
		("%c는 소문자입니다.", ch);
	}
	else {
		printf("%c는 그 외의 문자입니다.", ch);
	}

	return 0;
	/*
	int score;

	printf("성적을 입력하시오. : ");
	scanf_s("%d", &score);

	if (score >= 90)
		printf("학점 A");
	else if (score >= 80)
		printf("학점 B");
	else if (score >= 70)
		printf("학점 C");
	else if (score >= 60)
		printf("학점 D");
	else printf("학점 F");

		return 0;
		*/
	/*
	int a;
	printf("연도를 입력하시오. : ");
	scanf_s("%d", &a);
	if (a % 4 == 0 && a % 100 != 0) {
		printf("%d년은 윤년입니다.", a);
	}
	else if (a % 400 == 0) {
		printf("%d년은 윤년입니다.", a);
	}
	else ("윤년이 아닙니다.");

	return 0;
	*/
	/*
	int a, b, c;
	printf("분자와 분모를 입력하시오 : ");
	scanf_s("%d %d", &a, &b);
	if (b != 0) {
		c = a / b;
		printf("결과는 %d 입니다", c);
	}
	else ("나눌 수 없습니다.");

	return 0;
	*/
}