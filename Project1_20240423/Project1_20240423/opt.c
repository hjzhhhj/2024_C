#include <stdio.h>
int main(void)
{
	int x, y;

	printf("���� 2�� : ");
	scanf_s("%d %d", &x, &y);

	printf("ū �� = %d\n", (x > y) ? x : y);
	printf("���� �� = %d\n", (x < y) ? x : y);
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
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &year);

	result = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
	printf("1 = ����, 0 = ���\n");
	printf("%d", result);


}
*/
/*
{
	int x, y;

	printf("�ΰ��� ������ �Է��Ͻÿ� : ");
		scanf_s("%d%d", &x, &y);

	printf("x == y�� ����� : %d\n", x == y);
	printf("x != y�� ����� : %d\n", x != y);
	printf("x > y�� ����� : %d\n", x > y);
	printf("x < y�� ����� : %d\n", x < y);
	printf("x >= y�� ����� : %d\n", x >= y);
	printf("x <= y�� ����� : %d", x <= y);

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

	//printf("���� x+1�� ���� : %d \n", x + 1);
	//printf("���� y=x+1�� ���� : %d \n", y = x + 1);
	//printf("���� y=10+(x=2+7)�� ���� : %d \n", y = 10 + ( x = 2 + 7 )) ;
	//printf("���� y=x=3�� ���� : %d \n", y = x = 3);

	return 0;
}
*/