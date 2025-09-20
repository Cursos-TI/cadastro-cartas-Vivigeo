#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado, estado2;
    char codigodacarta[50], codigodacarta2[50];
    char nomedacidade[50], nomedacidade2[50];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int numerodepontosturisticos, numerodepontosturisticos2;

  // Área para entrada de dados
    printf("Carta 1:\n");

    printf("Digite o Estado: \n");
    scanf("%s", &estado);

    printf("Digite o Codigo da carta: \n");
    scanf("%s", &codigodacarta);
    
    printf("Digite o Nome da cidade: \n");
    scanf("%s", &nomedacidade);

    printf("Digite a Populacao: \n");
    scanf("%d", &populacao);

    printf("Digite a Area: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite o Numero de pontos turisticos: \n");
    scanf("%d", &numerodepontosturisticos);

    // Área para entrada de dados
    printf("Carta 2:\n");

    printf("Digite o Estado: \n");
    scanf("%s", &estado2);

    printf("Digite o Codigo da carta: \n");
    scanf("%s", &codigodacarta2);

    printf("Digite o Nome da cidade: \n");
    scanf("%s", &nomedacidade2);

    printf("Digite a Populacao: \n");
    scanf("%d", &populacao2);

    printf("Digite a Area: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o Numero de pontos turisticos: \n");
    scanf("%d", &numerodepontosturisticos2);


  // Área para exibição dos dados da cidade
    printf("Estado: %s\n" , estado);
    printf("Codigo da carta: %s\n" , codigodacarta);
    printf("Nome da cidade: %s\n", nomedacidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Numero de pontos turisticos: %d\n", numerodepontosturisticos);


  // Área para exibição dos dados da cidade
    printf("Estado: %s\n" , estado2);
    printf("Codigo da carta: %s\n" , codigodacarta2);
    printf("Nome da cidade: %s\n", nomedacidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Numero de pontos turisticos: %d\n", numerodepontosturisticos2);


return 0;
} 
