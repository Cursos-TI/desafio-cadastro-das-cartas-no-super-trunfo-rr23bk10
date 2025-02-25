#include <stdio.h>
#include <string.h>

// Estrutura para representar um país
typedef struct {
    char nome[50];
    int populacao;
    float area;
    float densidade_demografica;
    int pib;
} Carta;

// Função para exibir os atributos disponíveis
void exibirAtributos() {
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - Densidade Demografica\n");
    printf("4 - PIB\n");
}

// Função para obter a escolha do jogador e garantir que seja válida
int escolherAtributo(int atributoEscolhido) {
    int escolha;
    do {
        printf("Escolha um atributo: ");
        scanf("%d", &escolha);
        if (escolha < 1 || escolha > 4 || escolha == atributoEscolhido) {
            printf("Escolha invalida! Tente novamente.\n");
        }
    } while (escolha < 1 || escolha > 4 || escolha == atributoEscolhido);
    return escolha;
}

// Função para obter o valor do atributo
float obterValor(Carta carta, int atributo) {
    switch (atributo) {
        case 1: return carta.populacao;
        case 2: return carta.area;
        case 3: return carta.densidade_demografica;
        case 4: return carta.pib;
        default: return 0;
    }
}

// Função principal
int main() {
    // Cartas pré-cadastradas
    Carta carta1 = {"Brasil", 214000000, 8515767, 25.1, 1500000000};
    Carta carta2 = {"Argentina", 46000000, 2780400, 16.5, 500000000};
    
    // Exibir cartas
    printf("Carta 1: %s\n", carta1.nome);
    printf("Carta 2: %s\n", carta2.nome);
    
    // Escolha de atributos
    printf("Atributos disponiveis:\n");
    exibirAtributos();
    int atributo1 = escolherAtributo(0);
    int atributo2 = escolherAtributo(atributo1);
    
    // Comparação dos atributos
    float valor1_carta1 = obterValor(carta1, atributo1);
    float valor1_carta2 = obterValor(carta2, atributo1);
    float valor2_carta1 = obterValor(carta1, atributo2);
    float valor2_carta2 = obterValor(carta2, atributo2);
    
    int pontos_carta1 = 0, pontos_carta2 = 0;
    
    // Verificar vencedor para cada atributo
    pontos_carta1 += (atributo1 == 3) ? (valor1_carta1 < valor1_carta2) : (valor1_carta1 > valor1_carta2);
    pontos_carta2 += (atributo1 == 3) ? (valor1_carta2 < valor1_carta1) : (valor1_carta2 > valor1_carta1);
    
    pontos_carta1 += (atributo2 == 3) ? (valor2_carta1 < valor2_carta2) : (valor2_carta1 > valor2_carta2);
    pontos_carta2 += (atributo2 == 3) ? (valor2_carta2 < valor2_carta1) : (valor2_carta2 > valor2_carta1);
    
    // Soma dos atributos
    float soma_carta1 = valor1_carta1 + valor2_carta1;
    float soma_carta2 = valor1_carta2 + valor2_carta2;
    
    // Exibir resultado
    printf("\nResultado da comparacao:\n");
    printf("%s - %s: %.2f, %s: %.2f (Soma: %.2f)\n", carta1.nome, (atributo1 == 1) ? "Populacao" : (atributo1 == 2) ? "Area" : (atributo1 == 3) ? "Densidade Demografica" : "PIB", valor1_carta1, (atributo2 == 1) ? "Populacao" : (atributo2 == 2) ? "Area" : (atributo2 == 3) ? "Densidade Demografica" : "PIB", valor2_carta1, soma_carta1);
    printf("%s - %s: %.2f, %s: %.2f (Soma: %.2f)\n", carta2.nome, (atributo1 == 1) ? "Populacao" : (atributo1 == 2) ? "Area" : (atributo1 == 3) ? "Densidade Demografica" : "PIB", valor1_carta2, (atributo2 == 1) ? "Populacao" : (atributo2 == 2) ? "Area" : (atributo2 == 3) ? "Densidade Demografica" : "PIB", valor2_carta2, soma_carta2);
    
    if (soma_carta1 > soma_carta2) {
        printf("%s venceu!\n", carta1.nome);
    } else if (soma_carta2 > soma_carta1) {
        printf("%s venceu!\n", carta2.nome);
    } else {
        printf("Empate!\n");
    }
    
    return 0;
}
