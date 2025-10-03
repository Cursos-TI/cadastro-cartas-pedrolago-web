#include <stdio.h>
#include <string.h> // Adicione esta linha para usar strcspn

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
    scanf("%3s", codigo1);
    // REMOVE getchar() daqui

    printf("Cidade: ");
    getchar(); // MOVER getchar() para AQUI, antes do fgets
    fgets(nomeCidade1, 50, stdin);
    // Remove o \n do final da string lida pelo fgets
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0;

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    getchar(); // Limpa o \n do buffer antes da segunda carta

    // Área para entrada de dados - Carta 2
    printf("Carta 2 \n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo: ");
    scanf("%3s", codigo2);
    // REMOVE getchar() daqui

    printf("Cidade: ");
    getchar(); // MOVER getchar() para AQUI, antes do fgets
    fgets(nomeCidade2, 50, stdin);
    // Remove o \n do final da string lida pelo fgets
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
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