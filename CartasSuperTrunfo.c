#include <stdio.h>

int main(){

    //Para conseguir deixar a saída de dados igual ao exemplo, tive que fazer algumas mudanças nas variáveis.
    char estado = 'A';
    char nome[] = "A01";
    char nome2[] = "Fortaleza";
    //Mudei a população por conta que não havia percebido que tinha colocado um número grande demais.
    int populacao = 10286780;
    float area = 1173.84;
    //Mudei o pib por conta que aprendi só agora a como deixar 5 números quando for imprimir.
    float pib = 256923874297.89;
    int turisticos = 74;
    float densidade;
    float percapita;

    printf("Carta 1: \n");
    printf("Estado: %c \n", estado);
    printf("Código: %s \n",nome);
    printf("Nome da Cidade: %s \n", nome2);
    printf("População: %d \n", populacao);
    printf("Área: %.2f km²\n", area);

    //Adicionei o 1e9 para deixar apenas 3 dígitos.
    printf("PIB: %.2f bilhões de reais \n", pib / 1e9);
    printf("Números de Pontos Turísticos: %d \n", turisticos);

    densidade = (populacao / area);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade);

    percapita = (pib / populacao);
    printf("PIB per capita: %.2f reais \n", percapita);
    printf("\n");
    

    char estado1 = 'B';
    char nome1[] = "B01";
    char nome3[] = "Pernambuco";
    int populacao1 = 9539029;
    //Mudei a area1 por conta do mesmo motivo da população da Carta 1.
    float area1 = 1945.90;
    //Mudei o pib1 por conta que aprendi só agora a como deixar 5 números quando for imprimir.
    float pib1 = 356342763154.64;
    int turisticos1 = 89;
    float densidade1;
    float percapita1;

    printf("Carta 2: \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", nome1);
    printf("Nome da Cidade: %s \n", nome3);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km²\n", area1);

    //Adicionei o 1e9 para deixar apenas 3 dígitos.
    printf("PIB: %.2f bilhões de reais \n", pib1 / 1e9);
    printf("Números de Pontos Turísticos: %d \n", turisticos1);

    densidade1 = (populacao1 / area1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade1);

    percapita1 = (pib1 / populacao1);
    printf("PIB per capita: %.2f reais \n", percapita1);
    printf("\n");

    return 0;
 
}
