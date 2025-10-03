#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

// Área para definição das variáveis para armazenar as propriedades das cidades
int main() {
    
    // Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    
    // Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    
  // Área para entrada de dados

    printf("=== SUPER TRUNFO  ===\n");
    
    printf("--- CARTA 1 ---\n");
    
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("\n");
    
    // Código
    printf("Código da Carta (ex: %c01): ", estado1);
    scanf("%3s", codigo1);
    printf("\n");
    
    // Nome da Cidade
    printf("Nome da Cidade: ");
    getchar(); // Limpa o buffer
    fgets(nomeCidade1, 50, stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0; // Remove o \n
    printf("\n");
    
    // População
    printf("População: ");
    scanf("%d", &populacao1);
    printf("\n");
    
    // Área
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("\n");
    
    // PIB
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("\n");
    
    // Pontos Turísticos
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);
    printf("\n");
    
    getchar(); // Limpa o buffer para a próxima carta
    
    // ========== CARTA 2 ==========
    printf("--- CARTA 2 ---\n");
    
    // Estado
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("\n");
    
    // Código
    printf("Código da Carta (ex: %c01): ", estado2);
    scanf("%3s", codigo2);
    printf("\n");
    
    // Nome da Cidade
    printf("Nome da Cidade: ");
    getchar(); // Limpa o buffer
    fgets(nomeCidade2, 50, stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0; // Remove o \n
    printf("\n");
    
    // População
    printf("População: ");
    scanf("%d", &populacao2);
    printf("\n");
    
    // Área
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("\n");
    
    // PIB
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("\n");
    
    // Pontos Turísticos
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);
    printf("\n");
    
    // Área para exibição dos dados da cidade
    printf("=== CARTAS CADASTRADAS ===\n\n");
    
    // Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("\n");
    
    // Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("\n");
    
    printf("=== FIM DO CADASTRO ===\n");
    
    return 0;
}  