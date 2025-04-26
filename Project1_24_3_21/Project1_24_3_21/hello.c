#include <stdio.h>
/*처음 만나는 프로그램 언어*/
int main(void)
{
	int x;
	int y;
	int a;
	int b;
	int c;
	int d;

	x = 20;
	y = 10;
	a = x + y;
	b = x - y;
	c = x * y;
	d = x / y;

	printf("두 수의 합 : %d\n", a);
	printf("두 수의 차 : %d\n", b);
	printf("두 수의 곱 : %d\n", c);
	printf("두 수의 몫 : %d\n", d);


/*
{
	int x;
	int y;
	int sum;
	x = 20;
	y = 10;

	printf("두수 합 ; %d\n", x + y);

	sum = x + y;

	printf("x + y = %d\n", sum);
	*/
	/*
	printf("Hello world!\n");
	printf("%d", 1 + 1);
	printf("안녕하세요? 저의 이름은 정희진입니다,\n저는 지금 학교에서 최인녀선생님의 가르침을 받고있습니다 ㅎㅎ");
	*/
	return 0;
}