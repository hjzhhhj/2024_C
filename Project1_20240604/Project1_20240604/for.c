#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, c;
    double b;
    b = 0;
    printf("���Ϻ����� ���� �Է¹��� ���ΰ���? : ");
    scanf_s("%d", &c);
    printf("���ϱ������� ���� �Է¹��� ���ΰ���? : ");
    scanf_s("%d", &a);
    do {
        printf("%d�ϳ� ���� �ݾ� = %lf\n", c, b);
        c++;
        b = (a * 2);
    } while (a != c); {

    }
    /*
    int a;
    double b;
    a = 1; b = 1;

    do {
        printf("%d�ϳ� ���� �ݾ� = %lf\n", a, b);
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
        printf("���� �Է��Ͻÿ� : ");
        scanf_s("%d", &guess);
        tries++;
        if (guess < answer) {
            printf("UP!\n");
        } else if (guess > answer) {
            printf("DOWN!\n");
        }
    } while (guess != answer);

    printf("�����Դϴ�! �õ� Ƚ��: %d\n", tries);
    */
    return 0;
}
