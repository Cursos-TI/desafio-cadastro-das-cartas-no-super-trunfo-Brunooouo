#include <stdio.h>

int main(){

    char estado = 'A';
    char nome[] = "A01";
    char nome2[] = "Fortaleza";
    int populacao = 2428678;
    float area = 1173.84;
    float pib = 256.89;
    int turisticos = 74;

    printf("Carta 1: \n");
    printf("Estado: %c \n", estado);
    printf("Código: %s \n",nome);
    printf("Nome da Cidade: %s \n", nome2);
    printf("População: %d \n", populacao);
    printf("Área: %.1f km²\n", area);
    printf("PIB: %.2f bilhões de reais \n", pib);
    printf("Pontos Turísticos: %d \n", turisticos);
    printf("\n");

    char estado1 = 'B';
    char nome1[] = "B01";
    char nome3[] = "Pernambuco";
    int populacao1 = 9539029;
    float area1 = 2945.90;
    float pib1 = 356.64;
    int turisticos1 = 89;

    printf("Carta 2: \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", nome1);
    printf("Nome da Cidade: %s \n", nome3);
    printf("População: %d \n", populacao1);
    printf("Área: %.1f km²\n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Pontos Turísticos: %d \n", turisticos1);

    return 0;
    


}
