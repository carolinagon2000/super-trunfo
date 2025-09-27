/*
  super_trunfo.c
  Nível Aventureiro - Cadastro de 2 cartas do Super Trunfo (Países)
  Inclui densidade populacional e PIB per capita
*/

#include <stdio.h>

int main() {
    /* --- Carta 1 --- */
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade1;
    float pib_per_capita1;

    /* --- Carta 2 --- */
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade2;
    float pib_per_capita2;

    int c; // usado para limpar buffer

    /* Entrada - Carta 1 */
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Codigo (ex: A01): ");
    scanf("%3s", codigo1);
    while ((c = getchar()) != '\n' && c != EOF); // limpa buffer
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    while ((c = getchar()) != '\n' && c != EOF);
    printf("Area (em km2): ");
    scanf("%f", &area1);
    while ((c = getchar()) != '\n' && c != EOF);
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);
    while ((c = getchar()) != '\n' && c != EOF);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos1);
    while ((c = getchar()) != '\n' && c != EOF);

    /* Entrada - Carta 2 */
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Codigo (ex: B02): ");
    scanf("%3s", codigo2);
    while ((c = getchar()) != '\n' && c != EOF);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    while ((c = getchar()) != '\n' && c != EOF);
    printf("Area (em km2): ");
    scanf("%f", &area2);
    while ((c = getchar()) != '\n' && c != EOF);
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);
    while ((c = getchar()) != '\n' && c != EOF);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2);
    while ((c = getchar()) != '\n' && c != EOF);

    /* Calculando densidade e PIB per capita */
    densidade1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    densidade2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    /* Saída - Carta 1 */
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    /* Saída - Carta 2 */
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    return 0;
}
