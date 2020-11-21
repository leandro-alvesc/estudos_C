// C02EXFBC.C

#include <stdio.h>

int main(void)
{
    char PAUSA;
    float C, F;

    printf("Entre a temperatura em graus Celsius: ");
    scanf("%f", &C);
    while ((getchar() != '\n') && (!EOF));

    F = (9 * C + 160) / 5;

    printf("\n");
    printf("Temperatura convertida em graus Fahrenheit: %8.3f", F);

    printf("\n");
    printf("Tecle <Enter> para encerrar... ");
    PAUSA = getchar();

    return 0;
}
