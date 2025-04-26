#include <stdio.h>
int main(void)
{
	int x, y;

	printf("정수 2개 : ");
	scanf_s("%d %d", &x, &y);

	printf("큰 수 = %d\n", (x > y) ? x : y);
	printf("작은 수 = %d\n", (x < y) ? x : y);
}
/*
{
	int value, x;
	scanf_s("%d", &x);
	value = (x > 0) ? x : -x;
	printf("%d", value);

}
*/
/*
{
	int year, result;
	printf("연도를 입력하시오 : ");
	scanf_s("%d", &year);

	result = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
	printf("1 = 윤년, 0 = 평년\n");
	printf("%d", result);


}
*/
/*
{
	int x, y;

	printf("두개의 정수를 입력하시오 : ");
		scanf_s("%d%d", &x, &y);

	printf("x == y의 결과값 : %d\n", x == y);
	printf("x != y의 결과값 : %d\n", x != y);
	printf("x > y의 결과값 : %d\n", x > y);
	printf("x < y의 결과값 : %d\n", x < y);
	printf("x >= y의 결과값 : %d\n", x >= y);
	printf("x <= y의 결과값 : %d", x <= y);

}
/*
{
	int x = 10, y = 10, z = 33;

	x += 1;
	y *= 2;
	z %= 10 + 20;

	printf("x = %d, y = %d, z = %d\n", x, y ,z);

	return 0;
}
*/
/*
{
	int x, y;

	x = y = 1;

	x *= y + 1;
	x %= x + y;
	printf("x%d*=y%d+1\n");
	printf("x%d%=x%d+1\n");

	//printf("수식 x+1의 값은 : %d \n", x + 1);
	//printf("수식 y=x+1의 값은 : %d \n", y = x + 1);
	//printf("수식 y=10+(x=2+7)의 값은 : %d \n", y = 10 + ( x = 2 + 7 )) ;
	//printf("수식 y=x=3의 값은 : %d \n", y = x = 3);

	return 0;
}
*/