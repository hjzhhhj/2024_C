#include <stdio.h>
#define TAX_RATE 0.2

int main(void)
{
	int x = 13;
	int y = -13;

	printf("x = %08X\n", x);
	printf("y = %08X\n", y);
	printf("x+y = %08X\n\n", x+y);

	return 0;
/*
{
	const int MONTHS = 12;
	int m_salary, y_salary;

	printf("������ �Է��Ͻÿ�.:");
	scanf_s("%d", &m_salary);
	y_salary = MONTHS * m_salary;
	printf("������ %d�Դϴ�.", y_salary);
	printf("������ %f�Դϴ�.", y_salary * TAX_RATE);
	return 0;
	*/
}