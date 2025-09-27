/*
  super_trunfo.c
  Nível Novato - Cadastro de 2 cartas do Super Trunfo (Países)

  Como funciona:
  - O programa pede ao usuário para digitar os dados de duas cartas.
  - Cada carta tem: Estado, Código, Cidade, População, Área, PIB e Pontos Turísticos.
  - Depois, o programa mostra os dados digitados na tela.

  Importante: não usamos estruturas de repetição nem condições.
*/

#include <stdio.h>

int main() {
    /* --- Carta 1 --- */
    char estado1;             // letra A-H
    char codigo1[4];          // ex: A01 (3 chars + '\0')
    char cidade1[50];         // nome da cidade
    int populacao1;           // população inteira
    float area1;              // área em km2
    float pib1;               // PIB (em bilhões)
    int pontos_turisticos1;   // número inteiro

    /* --- Carta 2 --- */
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    /* Entrada - Carta 1 */
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo (ex: A01): ");
    scanf("%3s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);   // lê até encontrar ENTER

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (em km2): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos1);

    /* Entrada - Carta 2 */
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo (ex: B02): ");
    scanf("%3s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (em km2): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2);

    /* Saída - Carta 1 */
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);

    /* Saída - Carta 2 */
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);

    return 0;
}