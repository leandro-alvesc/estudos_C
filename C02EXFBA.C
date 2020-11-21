// C02EXFBA.C

#include <stdio.h>

int main(void)
{
    int num, ant, suc;
    char PAUSA;

    printf("Digite um numero: ");
    scanf("%x", &num);
    while ((getchar() != '\n') && (!EOF));

    ant = num - 1;
    suc = num + 1;

    printf("\n");
    printf("Numero: %X\n", num);
    printf("Anterior: %X\n", ant);
    printf("Sucessor: %X\n", suc);

    printf("\n");
    printf("Tecle <Enter> para encerrar... ");
    PAUSA = getchar();

    return 0;

}
