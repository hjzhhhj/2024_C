#include <stdio.h>

int main(void) {
		int a, b, c;
		double d;

		a = 0; b = 0; c = 0; d = 0;

		printf("�����Ϸ��� ������ �Է��Ͻÿ�.\n");

		while ( a >= 0 ) {
			printf("������ �Է��Ͻÿ� : ");
			scanf_s("%d", &a);

			if (a >= 0) {
				b += a;  
				c++;
			}
		}

		printf("������ ����� %f�Դϴ�.\n", d);
		return 0;

	/*
	int a = 0;
	int b = 0;
	int c = 0;

	printf("�����Ϸ��� ������ �Է��Ͻÿ�.\n");
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &a);

	while (a >= 0) {
		b += a;
		c++;

		printf("������ �Է��Ͻÿ� : ");
		scanf_s("%d", &a);
	}

	if (c > 0) {
		double d = (double)b / c;
		printf("������ ����� %f�Դϴ�.\n", d);
	}
	else
	{
		printf("�Էµ� ������ �����ϴ�.\n");
	}

		return 0;
		*/
		/*
		int i = 3;
		while (i)
		{
			printf("%d�� ���Դϴ�.\n", i);
			i--;
		}
		printf("%d�� �����Դϴ�.", i);
		*/
		/*
		int a = 0;
		int b = 0;
		for (int i = 0; i < 5; i++) {
			printf("���� �Է��Ͻÿ� : ");
				scanf_s("%d", &a);
			b += a;
		}
		printf("�հ�� %d�Դϴ�.", b);
		*/
		/*
		int i, n, sumE, sumO;

		printf("input number : ");
		scanf_s("%d", &n);

		i = 0;
		sumE = 0;
		sumO = 0;

		while (i<=n)
		{
			if (i % 5 == 0) sumE += i;
			else sumO += i;
			i++;
		}
		printf("even=%d, odd=%d\n totsal=%d\n", sumE, sumO, sumE + sumO);
		*/
}
