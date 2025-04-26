#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, c;
    double b;
    b = 0;
    printf("몇일부터의 값을 입력받을 것인가요? : ");
    scanf_s("%d", &c);
    printf("몇일까지의의 값을 입력받을 것인가요? : ");
    scanf_s("%d", &a);
    do {
        printf("%d일날 현재 금액 = %lf\n", c, b);
        c++;
        b = (a * 2);
    } while (a != c); {

    }
    /*
    int a;
    double b;
    a = 1; b = 1;

    do {
        printf("%d일날 현재 금액 = %lf\n", a, b);
        a++;
        b = b * 2;
    } while (a != 31); {

    }
    */
    /*
    srand((unsigned)time(NULL));

    int answer = rand() % 100;
    int guess;
    int tries = 0;

    do {
        printf("값을 입력하시오 : ");
        scanf_s("%d", &guess);
        tries++;
        if (guess < answer) {
            printf("UP!\n");
        } else if (guess > answer) {
            printf("DOWN!\n");
        }
    } while (guess != answer);

    printf("정답입니다! 시도 횟수: %d\n", tries);
    */
    return 0;
}
