#include <stdio.h>

int main(void) {
		int a, b, c;
		double d;

		a = 0; b = 0; c = 0; d = 0;

		printf("종료하려면 음수를 입력하시오.\n");

		while ( a >= 0 ) {
			printf("성적을 입력하시오 : ");
			scanf_s("%d", &a);

			if (a >= 0) {
				b += a;  
				c++;
			}
		}

		printf("성적의 평균은 %f입니다.\n", d);
		return 0;

	/*
	int a = 0;
	int b = 0;
	int c = 0;

	printf("종료하려면 음수를 입력하시오.\n");
	printf("성적을 입력하시오 : ");
	scanf_s("%d", &a);

	while (a >= 0) {
		b += a;
		c++;

		printf("성적을 입력하시오 : ");
		scanf_s("%d", &a);
	}

	if (c > 0) {
		double d = (double)b / c;
		printf("성적의 평균은 %f입니다.\n", d);
	}
	else
	{
		printf("입력된 성적이 없습니다.\n");
	}

		return 0;
		*/
		/*
		int i = 3;
		while (i)
		{
			printf("%d은 참입니다.\n", i);
			i--;
		}
		printf("%d는 거짓입니다.", i);
		*/
		/*
		int a = 0;
		int b = 0;
		for (int i = 0; i < 5; i++) {
			printf("값을 입력하시오 : ");
				scanf_s("%d", &a);
			b += a;
		}
		printf("합계는 %d입니다.", b);
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
