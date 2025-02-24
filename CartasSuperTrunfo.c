#include <stdio.h>
#include <string.h>

int main() {
    // Variáveis para a primeira carta
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // Variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    // Leitura dos dados da primeira carta
    printf("Cadastro da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Leitura dos dados da segunda carta
    printf("\nCadastro da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Exibição dos dados das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    // Menu interativo
    int opcao;
    printf("\nEscolha o atributo para comparar as cartas:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    // Lógica de comparação
    switch (opcao) {
        case 1: // População
            if (populacao1 > populacao2) {
                printf("\n%s vence com %d habitantes!\n", cidade1, populacao1);
            } else if (populacao2 > populacao1) {
                printf("\n%s vence com %d habitantes!\n", cidade2, populacao2);
            } else {
                printf("\nEmpate! Ambas têm %d habitantes.\n", populacao1);
            }
            break;

        case 2: // Área
            if (area1 > area2) {
                printf("\n%s vence com %.2f km²!\n", cidade1, area1);
            } else if (area2 > area1) {
                printf("\n%s vence com %.2f km²!\n", cidade2, area2);
            } else {
                printf("\nEmpate! Ambas têm %.2f km².\n", area1);
            }
            break;

        case 3: // PIB
            if (pib1 > pib2) {
                printf("\n%s vence com %.2f bilhões de reais!\n", cidade1, pib1);
            } else if (pib2 > pib1) {
                printf("\n%s vence com %.2f bilhões de reais!\n", cidade2, pib2);
            } else {
                printf("\nEmpate! Ambas têm %.2f bilhões de reais.\n", pib1);
            }
            break;

        case 4: // Pontos Turísticos
            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("\n%s vence com %d pontos turísticos!\n", cidade1, pontos_turisticos1);
            } else if (pontos_turisticos2 > pontos_turisticos1) {
                printf("\n%s vence com %d pontos turísticos!\n", cidade2, pontos_turisticos2);
            } else {
                printf("\nEmpate! Ambas têm %d pontos turísticos.\n", pontos_turisticos1);
            }
            break;

        case 5: // Densidade Demográfica
            float densidade1 = populacao1 / area1;
            float densidade2 = populacao2 / area2;
            if (densidade1 < densidade2) {
                printf("\n%s vence com densidade demográfica de %.2f hab/km²!\n", cidade1, densidade1);
            } else if (densidade2 < densidade1) {
                printf("\n%s vence com densidade demográfica de %.2f hab/km²!\n", cidade2, densidade2);
            } else {
                printf("\nEmpate! Ambas têm densidade demográfica de %.2f hab/km².\n", densidade1);
            }
            break;

        default:
            printf("\nOpção inválida! Tente novamente.\n");
            break;
    }

    return 0;
}