#include <stdio.h>

int main(void)
{
	double r, b;

	printf("반지름을 입력하시오 : ");
	scanf_s("%lf", &r);
	
	b = r * r * 3.141592;

	printf("원의 면적은 : %.2f\n", b);

	
	//int x, y;

	//printf("정수를 입력하세요 : ");
	//scanf_s("%d", &x);
	//printf("정수를 입력하세요 : ");
	//scanf_s("%d", &y);

	//printf("두수의 합은 : %d\n", x + y);
	//int sum = x + y;
	//printf("x + y = %d\n\n", sum);

	//return 0;

	
}