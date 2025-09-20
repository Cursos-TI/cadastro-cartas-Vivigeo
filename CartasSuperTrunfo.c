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
    printf("carta 1:\n");

    printf("Digite o estado: \n");
    scanf("%s", &estado);

    printf("Digite o codigodacarta: \n");
    scanf("%s", &codigodacarta);
    
    printf("Digite o nomedacidade: \n");
    scanf("%s", &nomedacidade);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao);

    printf("Digite a area: \n");
    scanf("%f", &area);

    printf("Digite o pib: \n");
    scanf("%f", &pib);

    printf("Digite o numerodepontosturisticos: \n");
    scanf("%d", &numerodepontosturisticos);

    // Área para entrada de dados
    printf("carta 2:\n");

    printf("Digite o estado2: \n");
    scanf("%s", &estado2);

    printf("Digite o codigodacarta2 \n");
    scanf("%s", &codigodacarta2);

    printf("Digite o nomedacidade2: \n");
    scanf("%s", &nomedacidade2);

    printf("Digite a populacao2: \n");
    scanf("%d", &populacao2);

    printf("Digite a area2: \n");
    scanf("%f", &area2);

    printf("Digite o pib2: \n");
    scanf("%f", &pib2);

    printf("Digite o numerodepontosturisticos2: \n");
    scanf("%d", &numerodepontosturisticos2);


  // Área para exibição dos dados da cidade
    printf("estado: %s\n" , estado);
    printf("codigodacarta: %s\n" , codigodacarta);
    printf("nomedacidade: %s\n", nomedacidade);
    printf("populacao: %d\n", populacao);
    printf("area: %f\n", area);
    printf("pib: %f\n", pib);
    printf("numerodepontosturisticos: %d\n", numerodepontosturisticos);


  // Área para exibição dos dados da cidade
    printf("estado2: %s\n" , estado2);
    printf("codigodacarta2: %s\n" , codigodacarta2);
    printf("nomedacidade2: %s\n", nomedacidade2);
    printf("populacao2: %d\n", populacao2);
    printf("area2: %f\n", area2);
    printf("pib2: %f\n", pib2);
    printf("numerodepontosturisticos2: %d\n", numerodepontosturisticos2);


return 0;
} 
