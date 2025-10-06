#include <stdio.h>
#include <string.h>

int main() {
    
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos1;
    
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos2;
    
    // Área para entrada de dados
    printf("--- CARTA 1: ---\n");

    printf("Digite o estado da carta 1: ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta 1: ");
    scanf("%3s", codigo1);  
    printf("Digite o nome da cidade da carta 1: ");
    getchar();  
    fgets(cidade1, 50, stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;  
    
    printf("Digite a população da carta 1: ");
    scanf("%lu", &populacao1);
    printf("Digite a área da carta 1: ");
    scanf("%f", &area1);
    printf("Digite o PIB da carta 1: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da carta 1: ");
    scanf("%d", &pontos1);
    
    printf("\n--- CARTA 2: ---\n");
    printf("Digite o estado da carta 2: ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta 2: ");
    scanf("%3s", codigo2);  
    printf("Digite o nome da cidade da carta 2: ");
    getchar();  
    fgets(cidade2, 50, stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;  
    
    printf("Digite a população da carta 2: ");
    scanf("%lu", &populacao2);
    printf("Digite a área da carta 2: ");
    scanf("%f", &area2);
    printf("Digite o PIB da carta 2: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da carta 2: ");
    scanf("%d", &pontos2);
    
   
    if (area1 <= 0 || area2 <= 0 || populacao1 <= 0 || populacao2 <= 0) {
        printf("\nErro: População e área devem ser valores positivos!\n");
        return 1;
    }
    
    // Área para cálculos 
    float densidade1 = (float)populacao1 / area1;
    float densidade2 = (float)populacao2 / area2;
    
    float pib_per_capita1 = (pib1 * 1000000000.0f) / (float)populacao1;
    float pib_per_capita2 = (pib2 * 1000000000.0f) / (float)populacao2;
    
    float super_poder1 = (float)populacao1 + area1 + pib1 + (float)pontos1 + 
                        pib_per_capita1 + (1.0f / densidade1);
    
    float super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontos2 + 
                        pib_per_capita2 + (1.0f / densidade2);
    
    // Área para exibição dos dados 
    printf("\n--- RESULTADOS DAS CARTAS ---\n");
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);
    
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);
    
    // Comparação das cartas
    printf("\n--- COMPARAÇÃO DE CARTAS ---\n");
    
    int resultado_populacao = (populacao1 > populacao2) ? 1 : 0;
    printf("População: Carta %d venceu (%d)\n", 
           (resultado_populacao ? 1 : 2), resultado_populacao);
    
    int resultado_area = (area1 > area2) ? 1 : 0;
    printf("Área: Carta %d venceu (%d)\n", 
           (resultado_area ? 1 : 2), resultado_area);
    
    int resultado_pib = (pib1 > pib2) ? 1 : 0;
    printf("PIB: Carta %d venceu (%d)\n", 
           (resultado_pib ? 1 : 2), resultado_pib);
    
    int resultado_pontos = (pontos1 > pontos2) ? 1 : 0;
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", 
           (resultado_pontos ? 1 : 2), resultado_pontos);
    
    int resultado_densidade = (densidade1 < densidade2) ? 1 : 0;
    printf("Densidade Populacional: Carta %d venceu (%d)\n", 
           (resultado_densidade ? 1 : 2), resultado_densidade);
    
    int resultado_pib_per_capita = (pib_per_capita1 > pib_per_capita2) ? 1 : 0;
    printf("PIB per Capita: Carta %d venceu (%d)\n", 
           (resultado_pib_per_capita ? 1 : 2), resultado_pib_per_capita);
    
    int resultado_super_poder = (super_poder1 > super_poder2) ? 1 : 0;
    printf("Super Poder: Carta %d venceu (%d)\n", 
           (resultado_super_poder ? 1 : 2), resultado_super_poder);

    return 0;
}