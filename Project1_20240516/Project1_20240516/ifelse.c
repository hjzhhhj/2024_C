#include <stdio.h>
int main(void)
{
	char ch;
	printf("���ڸ� �Է��Ͻÿ�. : ");

	ch = getchar();
	if (ch >= 'A' && ch <= 'Z') {
		printf("%c�� �빮���Դϴ�.", ch);
	}
	else if (ch <= 9 && ch >= 1) {
		("%c�� �����Դϴ�.", ch);
	}
	else if (ch >= 'a' && ch <= 'z') {
		("%c�� �ҹ����Դϴ�.", ch);
	}
	else {
		printf("%c�� �� ���� �����Դϴ�.", ch);
	}

	return 0;
	/*
	int score;

	printf("������ �Է��Ͻÿ�. : ");
	scanf_s("%d", &score);

	if (score >= 90)
		printf("���� A");
	else if (score >= 80)
		printf("���� B");
	else if (score >= 70)
		printf("���� C");
	else if (score >= 60)
		printf("���� D");
	else printf("���� F");

		return 0;
		*/
	/*
	int a;
	printf("������ �Է��Ͻÿ�. : ");
	scanf_s("%d", &a);
	if (a % 4 == 0 && a % 100 != 0) {
		printf("%d���� �����Դϴ�.", a);
	}
	else if (a % 400 == 0) {
		printf("%d���� �����Դϴ�.", a);
	}
	else ("������ �ƴմϴ�.");

	return 0;
	*/
	/*
	int a, b, c;
	printf("���ڿ� �и� �Է��Ͻÿ� : ");
	scanf_s("%d %d", &a, &b);
	if (b != 0) {
		c = a / b;
		printf("����� %d �Դϴ�", c);
	}
	else ("���� �� �����ϴ�.");

	return 0;
	*/
}