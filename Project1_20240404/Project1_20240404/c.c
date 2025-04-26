#include <stdio.h>

int main(void)
{
	int x = 10;
	int y = 010;
	int z = 0x10;

	printf("x=%d\n", x);
	printf("y=%d\n", y);
	printf("z=%d\n\n", z);
	printf("x=%d\n", x);
	printf("y=%d\n", y);
	printf("z=%x\n\n", z);
	printf("x=%o\n", x);
	printf("y=%o\n", y);
	printf("z=%o\n\n", z);
	printf("x=%x\n", x);
	printf("y=%x\n", y);
	printf("z=%x\n\n", z);
	
	return 0;
}