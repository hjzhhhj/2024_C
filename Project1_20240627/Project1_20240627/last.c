#include <stdio.h>
#include <math.h> 
#include <stdlib.h>

int main(void)
{
    int x, y, answer, i;

    for (i = 0; i < 10; i++) {
        x = rand() % 100;
        y = rand() % 100;
        printf("%d + %d = ", x, y);
        scanf_s("%d", &answer);
        if (x + y == answer) {
            printf("�¾ҽ��ϴ�!\n");
        }
        else {
            printf("��!\n");
        }
    }
    /*
    char letter;
    printf("�����Ϸ��� Q�� �Է��Ͻÿ�.\n");

    while (1) {
        printf("�ҹ��ڸ� �Է��Ͻÿ� : ");
        scanf_s(" %c", &letter);
        if (letter >= 97 && letter <= 122) {
            letter -= 32;
            printf("��ȯ�� �빮�ڴ� %c�Դϴ�.\n\n", letter);
        }
        else if (letter == 81) {
            break;
        }

    }
    return 0;
    */
}
