#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    
    // Área para entrada de dados - Carta 1
    printf("Carta 1 \n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);  

    printf("Codigo: ");
    scanf(" %c", codigo1);

    printf("Cidade: ");
    getchar();  
    scanf(" %c", nomeCidade1);

    printf("Populacao: ");
    getchar();
    scanf(" %i", &populacao1);

    printf("Area (km2): ");
    getchar();
    scanf(" %f", &area1);

    printf("PIB (em bilhoes): ");
    getchar();
    scanf(" %f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    getchar();
    scanf(" %d", &pontosTuristicos1);

    // Área para entrada de dados - Carta 2
    printf("\nCarta 2 \n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);  

    printf("Codigo: ");
    scanf("%s", codigo2);

    printf("Cidade: ");
    getchar();  
    scanf("%[^\n]", nomeCidade2);

    printf("Populacao: ");
    getchar();
    scanf("%d", &populacao2);

    printf("Area (km2): ");
    getchar();
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    getchar();
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    getchar();
    scanf("%d", &pontosTuristicos2);

    // Área para exibição dos dados da cidade
    printf("\n=== Informacoes das Cartas: ===\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}
