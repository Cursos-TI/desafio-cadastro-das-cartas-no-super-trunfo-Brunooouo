#include <stdio.h>

int main(){

    char estado = 'A';
    char nome[] = "A01";
    char nome2[] = "Fortaleza";
    unsigned long int populacao = 10286780;
    float area = 1173.84;
    float pib = 256923874297.89;
    int turisticos = 74;
    float densidade;
    float percapita;
    float SuperPoder;

    densidade = (populacao / area);

    percapita = (pib / populacao);

    SuperPoder = (float) populacao + (float) area + (float) pib + (float) turisticos + (float) percapita + (float) (densidade / -1);

    
    char estado1 = 'B';
    char nome1[] = "B01";
    char nome3[] = "Pernambuco";
    unsigned long int populacao1 = 9539029;
    float area1 = 1945.90;
    float pib1 = 356342763154.64;
    int turisticos1 = 89;
    float densidade1;
    float percapita1;
    float SuperPoder1;
    
    densidade1 = (populacao1 / area1);

    percapita1 = (pib1 / populacao1);

    SuperPoder1 = (float) populacao1 + (float) area1 + (float) pib1 + (float) turisticos1 + (float) percapita1 + (float) (densidade1 / -1);

    
    char Carta1[] = "Carta 1 venceu";
    char Carta2[] = "Carta 2 venceu";

    int resultado1, resultado2, resultado3, resultado4, resultado5, resultado6, resultado7;
    resultado1 = (populacao > populacao1);
    resultado2 = (area > area1);
    resultado3 = (pib > pib1);
    resultado4 = (turisticos > turisticos1);
    resultado5 = (densidade > densidade1);
    resultado6 = (percapita > percapita1);
    resultado7 = (SuperPoder > SuperPoder1);
    
    printf("Comparação de Cartas:\n");
    printf("População: %s (%d)\n", Carta1, resultado1);
    printf("Área: %s (%d)\n", Carta2, resultado2);
    printf("PIB: %s (%d)\n", Carta2, resultado3);
    printf("Pontos Turísticos: %s (%d)\n",Carta2, resultado4);
    printf("Densidade Populacional: %s (%d)\n", Carta1, resultado5);
    printf("PIB per capita: %s (%d)\n", Carta2, resultado6);
    printf("Super Poder: %s (%d)\n", Carta2, resultado7);

    return 0;
}
