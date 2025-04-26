#include <stdio.h>
#define SEED_MONEY 1000000

int main(void) {
/*
	for (int a = 1; a <= 6; a++) {
		for (int b = a; b <= 6; b++) {
			for (int c = b; c <= 6; c++) {
				if (a + b + c == 10) {
						printf("%d %d %d\n", a, b, c);
					}
				}
		}
	}
*/
	int year = 0, money = SEED_MONEY;
	while (1) {
		money = (money * 30) / 100;
		if (money > SEED_MONEY * 10) {
			break;
		}
		else {
			year++;
		}
	}
	printf("%d", year);

	return 0;
}