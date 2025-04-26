#include <stdio.h>

int main() {
    /*
    int a, b;
    printf("두 개의 숫자를 입력하세요: ");
    scanf_s("%d %d", &a, &b);

    while (b != 0) {
        int c = a % b;
        a = b;
        b = c;
        }

        printf("입력한 두 숫자의 최대공약수는: %d", a);
        */
    int a;
    
    do {
        printf("1---새로만들기\n");
        printf("2---파일열기\n");
        printf("3---파일닫기\n");
        printf("하나를 선택하시오. : ");
        scanf_s("%d", &a);
    } while (a != 1 & a != 2 & a != 3);
        printf("선택된 메뉴 = %d\n", a);
        return 0;
}

    /*
    int a, b, c;
    c = 0;
    printf("두 개의 숫자를 입력하세요: ");
    scanf_s("%d %d", &a, &b);
    for (int i = 1; i <= a && i <= b; ++i) {
        if (a % i == 0 && b % i == 0) {
            c = i;
        }
    }
    printf("입력한 두 숫자의 최대공약수는: %d", c);
	return 0;
    */