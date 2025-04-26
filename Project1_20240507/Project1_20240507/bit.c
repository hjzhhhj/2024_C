#include <stdio.h>
int main() {
	int number;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &number);
	if (number < 0) number *= -1;
	printf("%d", number);


	/*double c, f;

	scanf_s("%lf", &f);

	c = (f - 32)* (5.0 / 9) ;
	printf("%lf", c);*/
	/*int i;
	double f;
	f = 5 / 4;

	printf("%f\n", f);
	f = (double)5 / 4;
	printf("%f\n", f);

	f = 5.0 / 4;
	printf("%f\n", f);
	return 0;*/
}
//int main() {
//	int x, y, z;
//
//	x = 2 + 3, 5 - 3;
//	printf("x = %d\n", x);
//	printf("x = %d\n", x);
//	printf("Thank"), printf("you!\n");
//
//	x = 2, y = 3, z = 4;
//
//	printf("x = %d, y = %d, z = %d", x, y, z);
//
//	return 0;
//}