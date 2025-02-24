#include <stdio.h>
#include <string.h>

// Estrutura para representar uma carta de país
typedef struct {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_demografica;
} Carta;

// Função para exibir o menu e obter a escolha do usuário
int exibirMenu() {
    int escolha;
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Escolha: ");
    scanf("%d", &escolha);
    return escolha;
}

// Função para comparar duas cartas com base no atributo escolhido
void compararCartas(Carta carta1, Carta carta2, int atributo) {
    printf("\nComparando %s e %s:\n", carta1.nome, carta2.nome);

    switch (atributo) {
        case 1: // População
            printf("Atributo: População\n");
            printf("%s: %d\n", carta1.nome, carta1.populacao);
            printf("%s: %d\n", carta2.nome, carta2.populacao);
            if (carta1.populacao > carta2.populacao) {
                printf("%s vence!\n", carta1.nome);
            } else if (carta1.populacao < carta2.populacao) {
                printf("%s vence!\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2: // Área
            printf("Atributo: Área\n");
            printf("%s: %.2f\n", carta1.nome, carta1.area);
            printf("%s: %.2f\n", carta2.nome, carta2.area);
            if (carta1.area > carta2.area) {
                printf("%s vence!\n", carta1.nome);
            } else if (carta1.area < carta2.area) {
                printf("%s vence!\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("%s: %.2f\n", carta1.nome, carta1.pib);
            printf("%s: %.2f\n", carta2.nome, carta2.pib);
            if (carta1.pib > carta2.pib) {
                printf("%s vence!\n", carta1.nome);
            } else if (carta1.pib < carta2.pib) {
                printf("%s vence!\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: // Pontos Turísticos
            printf("Atributo: Número de Pontos Turísticos\n");
            printf("%s: %d\n", carta1.nome, carta1.pontos_turisticos);
            printf("%s: %d\n", carta2.nome, carta2.pontos_turisticos);
            if (carta1.pontos_turisticos > carta2.pontos_turisticos) {
                printf("%s vence!\n", carta1.nome);
            } else if (carta1.pontos_turisticos < carta2.pontos_turisticos) {
                printf("%s vence!\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // Densidade Demográfica
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.2f\n", carta1.nome, carta1.densidade_demografica);
            printf("%s: %.2f\n", carta2.nome, carta2.densidade_demografica);
            if (carta1.densidade_demografica < carta2.densidade_demografica) {
                printf("%s vence!\n", carta1.nome);
            } else if (carta1.densidade_demografica > carta2.densidade_demografica) {
                printf("%s vence!\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }
}

int main() {
    // Exemplo de cartas pré-cadastradas
    Carta carta1 = {"Brasil", 213993437, 8515767.049, 1.445, 15, 25.1};
    Carta carta2 = {"Argentina", 45195777, 2780400.0, 0.449, 10, 16.2};

    int escolha;

    do {
        escolha = exibirMenu();
        if (escolha >= 1 && escolha <= 5) {
            compararCartas(carta1, carta2, escolha);
        } else {
            printf("Opção inválida! Tente novamente.\n");
        }
    } while (escolha < 1 || escolha > 5);

    return 0;
}