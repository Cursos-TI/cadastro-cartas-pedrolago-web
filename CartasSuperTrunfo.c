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
  
  // Área para entrada de dados
  printf("Carta 1 \n");
  printf("Estado (A-H)":);
  scanf("%s", estado1);

  printf("Código");
  scanf("%s",codigo1);

  printf("Cidade:");
  scanf("%[^\n]",nomeCidade1);

   printf("Populacao: ");
  scanf("%d", &populacao1);

  printf("Area (km2): ");
  scanf("%f", &area1);

  printf("PIB (em bilhoes): ");
  scanf("%f", &pib1);

  printf("Numero de Pontos Turisticos: ");
  scanf("%d", &pontosTuristicos1);


