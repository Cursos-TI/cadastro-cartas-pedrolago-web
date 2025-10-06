#include <stdio.h>

struct Carta {
    char estado[3];
    char codigo[4];
    char nome[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
    float super_poder;
};

int main() {
    struct Carta carta1, carta2;

    // Leitura dos dados da primeira carta
    scanf("%2s %3s %49[^\n] %lu %f %f %d",
          carta1.estado, carta1.codigo, carta1.nome,
          &carta1.populacao, &carta1.area, &carta1.pib,
          &carta1.pontos_turisticos);

    // Leitura dos dados da segunda carta
    scanf("%2s %3s %49[^\n] %lu %f %f %d",
          carta2.estado, carta2.codigo, carta2.nome,
          &carta2.populacao, &carta2.area, &carta2.pib,
          &carta2.pontos_turisticos);

    // Cálculos para a primeira carta
    carta1.densidade_populacional = carta1.populacao / carta1.area;
    carta1.pib_per_capita = carta1.pib / carta1.populacao;
    carta1.super_poder = carta1.populacao + carta1.area + carta1.pib +
                         carta1.pontos_turisticos + carta1.pib_per_capita +
                         (1.0 / carta1.densidade_populacional);

    // Cálculos para a segunda carta
    carta2.densidade_populacional = carta2.populacao / carta2.area;
    carta2.pib_per_capita = carta2.pib / carta2.populacao;
    carta2.super_poder = carta2.populacao + carta2.area + carta2.pib +
                         carta2.pontos_turisticos + carta2.pib_per_capita +
                         (1.0 / carta2.densidade_populacional);

    // Comparações
    printf("Comparação de Cartas:\n");

    // População
    printf("População: Carta %d venceu (%d)\n",
           (carta1.populacao > carta2.populacao) ? 1 : 2,
           (carta1.populacao > carta2.populacao) ? 1 : 0);

    // Área
    printf("Área: Carta %d venceu (%d)\n",
           (carta1.area > carta2.area) ? 1 : 2,
           (carta1.area > carta2.area) ? 1 : 0);

    // PIB
    printf("PIB: Carta %d venceu (%d)\n",
           (carta1.pib > carta2.pib) ? 1 : 2,
           (carta1.pib > carta2.pib) ? 1 : 0);

    // Pontos Turísticos
    printf("Pontos Turísticos: Carta %d venceu (%d)\n",
           (carta1.pontos_turisticos > carta2.pontos_turisticos) ? 1 : 2,
           (carta1.pontos_turisticos > carta2.pontos_turisticos) ? 1 : 0);

    // Densidade Populacional (menor valor vence)
    printf("Densidade Populacional: Carta %d venceu (%d)\n",
           (carta1.densidade_populacional < carta2.densidade_populacional) ? 1 : 2,
           (carta1.densidade_populacional < carta2.densidade_populacional) ? 1 : 0);

    // PIB per Capita
    printf("PIB per Capita: Carta %d venceu (%d)\n",
           (carta1.pib_per_capita > carta2.pib_per_capita) ? 1 : 2,
           (carta1.pib_per_capita > carta2.pib_per_capita) ? 1 : 0);

    // Super Poder
    printf("Super Poder: Carta %d venceu (%d)\n",
           (carta1.super_poder > carta2.super_poder) ? 1 : 2,
           (carta1.super_poder > carta2.super_poder) ? 1 : 0);

    return 0;
}