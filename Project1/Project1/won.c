#include <stdio.h>

int main(void)
{
    int id, pass;
    printf("���̵�� �н����带 4���� ���ڷ� �Է��ϼ���:\n");

    printf("id:____\b\b\b\b");
    scanf_s("%d", &id);

    printf("pass:____\b\b\b\b");
    scanf_s("%d", &pass);
    printf("\a�Էµ� ���̵�� \"%d\"�̰� �н������ \"%d\"�Դϴ�.", id, pass);

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

    printf("ȯ���� �Է��Ͻÿ�. : ");
    scanf_s("%d", &c);

    printf("��ȭ�� �Է��Ͻÿ�. : ");
    scanf_s("%d", &w);

    d = (double)w / c;

    printf("��ȭ %d���� %f�޷� �Դϴ�.\n", w, d);

    return 0;
} */
/* {
    int exchange_rate;

    printf("ȯ���� �Է��ϼ���: ");
    scanf_s("%f", &exchange_rate);

    float krw_amount;
    printf("��ȭ �ݾ��� �Է��ϼ���: ");
    scanf_s("%f", &krw_amount);

    float usd_amount = krw_amount / exchange_rate;

    printf("ȯ���� �̱� �޷�: %.2f\n", usd_amount);

    return 0;
} */