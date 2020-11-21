// C02EXFBD.C

#include <stdio.h>

int main(void)
{
    char PAUSA;
    int tempo;
    float vel, dist, litros;

    printf("Entre o tempo gasto: ");
    scanf("%i", &tempo);
    while((getchar() != '\n') && (!EOF));

    printf("Entre a velocidade media: ");
    scanf("%f", &vel);
    while((getchar() != '\n') && (!EOF));

    dist = tempo * vel;
    litros = dist / 12;

    printf("\nVelocidade media...................: %5.2f Km/h", vel);
    printf("\nTempo gasto........................: %i horas", tempo);
    printf("\nDistancia percorrida...............: %8.2f Km", dist);
    printf("\nLitros utilizados em combustivel...: %5.2f L", litros);

    printf("\n");
    printf("Tecle <Enter> para encerrar... ");
    PAUSA = getchar();

    return 0;
}
