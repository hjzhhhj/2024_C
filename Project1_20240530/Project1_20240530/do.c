#include <stdio.h>

int main() {
    /*
    int a, b;
    printf("�� ���� ���ڸ� �Է��ϼ���: ");
    scanf_s("%d %d", &a, &b);

    while (b != 0) {
        int c = a % b;
        a = b;
        b = c;
        }

        printf("�Է��� �� ������ �ִ�������: %d", a);
        */
    int a;
    
    do {
        printf("1---���θ����\n");
        printf("2---���Ͽ���\n");
        printf("3---���ϴݱ�\n");
        printf("�ϳ��� �����Ͻÿ�. : ");
        scanf_s("%d", &a);
    } while (a != 1 & a != 2 & a != 3);
        printf("���õ� �޴� = %d\n", a);
        return 0;
}

    /*
    int a, b, c;
    c = 0;
    printf("�� ���� ���ڸ� �Է��ϼ���: ");
    scanf_s("%d %d", &a, &b);
    for (int i = 1; i <= a && i <= b; ++i) {
        if (a % i == 0 && b % i == 0) {
            c = i;
        }
    }
    printf("�Է��� �� ������ �ִ�������: %d", c);
	return 0;
    */