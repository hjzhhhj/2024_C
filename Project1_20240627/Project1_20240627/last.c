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
            printf("맞았습니다!\n");
        }
        else {
            printf("땡!\n");
        }
    }
    /*
    char letter;
    printf("종료하려면 Q를 입력하시오.\n");

    while (1) {
        printf("소문자를 입력하시오 : ");
        scanf_s(" %c", &letter);
        if (letter >= 97 && letter <= 122) {
            letter -= 32;
            printf("변환된 대문자는 %c입니다.\n\n", letter);
        }
        else if (letter == 81) {
            break;
        }

    }
    return 0;
    */
}
