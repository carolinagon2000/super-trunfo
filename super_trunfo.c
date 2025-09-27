#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade1, densidade2;
    float pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;

    printf("Digite os dados da Carta 1:\n");
    printf("Estado (A-H): "); scanf(" %c", &estado1);
    printf("Codigo (ex: A01): "); scanf("%3s", codigo1);
    printf("Nome da Cidade: "); scanf(" %[^\n]", cidade1);
    printf("Populacao: "); scanf("%lu", &populacao1);
    printf("Area (em km2): "); scanf("%f", &area1);
    printf("PIB (em bilhoes): "); scanf("%f", &pib1);
    printf("Numero de Pontos Turisticos: "); scanf("%d", &pontos_turisticos1);

    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (A-H): "); scanf(" %c", &estado2);
    printf("Codigo (ex: B02): "); scanf("%3s", codigo2);
    printf("Nome da Cidade: "); scanf(" %[^\n]", cidade2);
    printf("Populacao: "); scanf("%lu", &populacao2);
    printf("Area (em km2): "); scanf("%f", &area2);
    printf("PIB (em bilhoes): "); scanf("%f", &pib2);
    printf("Numero de Pontos Turisticos: "); scanf("%d", &pontos_turisticos2);

    densidade1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    densidade2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1.0 / densidade1);
    super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1.0 / densidade2);

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\nCodigo: %s\nNome da Cidade: %s\nPopulacao: %lu\nArea: %.2f km2\nPIB: %.2f bilhoes\nNumero de Pontos Turisticos: %d\nDensidade Populacional: %.2f\nPIB per Capita: %.2f\nSuper Poder: %.2f\n",
           estado1, codigo1, cidade1, populacao1, area1, pib1, pontos_turisticos1, densidade1, pib_per_capita1, super_poder1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\nCodigo: %s\nNome da Cidade: %s\nPopulacao: %lu\nArea: %.2f km2\nPIB: %.2f bilhoes\nNumero de Pontos Turisticos: %d\nDensidade Populacional: %.2f\nPIB per Capita: %.2f\nSuper Poder: %.2f\n",
           estado2, codigo2, cidade2, populacao2, area2, pib2, pontos_turisticos2, densidade2, pib_per_capita2, super_poder2);

    printf("\nComparacao de Cartas:\n");
    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder1 > super_poder2);

    return 0;
}

