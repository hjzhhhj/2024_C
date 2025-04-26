#include <stdio.h>

int main(void)
{
    int id, pass;
    printf("아이디와 패스워드를 4개의 숫자로 입력하세요:\n");

    printf("id:____\b\b\b\b");
    scanf_s("%d", &id);

    printf("pass:____\b\b\b\b");
    scanf_s("%d", &pass);
    printf("\a입력된 아이디는 \"%d\"이고 패스워드는 \"%d\"입니다.", id, pass);

    return 0;
}
/* {
    char code1 = 'a';
    char code2 = 97;
    char code3 = 33;

    printf("%c\n", code1);
    printf("%c\n\n", code2);
    printf("%d\n", code1);
    printf("%d\n\n", code2);
    printf("%c\n\n", code3);
    printf("%c\n\n", 7);
}*/
/* {
    int w, c;
    double d;

    printf("환율을 입력하시오. : ");
    scanf_s("%d", &c);

    printf("원화를 입력하시오. : ");
    scanf_s("%d", &w);

    d = (double)w / c;

    printf("원화 %d원은 %f달러 입니다.\n", w, d);

    return 0;
} */
/* {
    int exchange_rate;

    printf("환율을 입력하세요: ");
    scanf_s("%f", &exchange_rate);

    float krw_amount;
    printf("원화 금액을 입력하세요: ");
    scanf_s("%f", &krw_amount);

    float usd_amount = krw_amount / exchange_rate;

    printf("환전된 미국 달러: %.2f\n", usd_amount);

    return 0;
} */