// C02EXFBE.C

#include <stdio.h>
#include <math.h>

int main(void)
{
    char PAUSA;
    float C, F;

    printf("Entre a temperatura em graus Fahrenheit: ");
    scanf("%f", &F);
    while((getchar() != '\n') && (!EOF));

    C = (F-32.0) / 1.8;

    printf("Temperatura em graus Celsius: %5.1f", C);

    printf("\n");
    printf("Tecle <Enter> para encerrar... ");
    PAUSA = getchar();

    return 0;
}
