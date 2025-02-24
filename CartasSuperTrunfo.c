#include <iostream>
#include <string>

using namespace std;

struct Carta {
    string nome;
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadeDemografica;
};

void compararCartas(Carta carta1, Carta carta2, int opcao) {
    cout << "\nComparando " << carta1.nome << " e " << carta2.nome << "\n";
    switch (opcao) {
        case 1:
            cout << "Atributo: População\n";
            cout << carta1.nome << ": " << carta1.populacao << " | " << carta2.nome << ": " << carta2.populacao << "\n";
            if (carta1.populacao > carta2.populacao) cout << "Vencedor: " << carta1.nome << "\n";
            else if (carta2.populacao > carta1.populacao) cout << "Vencedor: " << carta2.nome << "\n";
            else cout << "Empate!\n";
            break;
        case 2:
            cout << "Atributo: Área\n";
            cout << carta1.nome << ": " << carta1.area << " | " << carta2.nome << ": " << carta2.area << "\n";
            if (carta1.area > carta2.area) cout << "Vencedor: " << carta1.nome << "\n";
            else if (carta2.area > carta1.area) cout << "Vencedor: " << carta2.nome << "\n";
            else cout << "Empate!\n";
            break;
        case 3:
            cout << "Atributo: PIB\n";
            cout << carta1.nome << ": " << carta1.pib << " | " << carta2.nome << ": " << carta2.pib << "\n";
            if (carta1.pib > carta2.pib) cout << "Vencedor: " << carta1.nome << "\n";
            else if (carta2.pib > carta1.pib) cout << "Vencedor: " << carta2.nome << "\n";
            else cout << "Empate!\n";
            break;
        case 4:
            cout << "Atributo: Pontos Turísticos\n";
            cout << carta1.nome << ": " << carta1.pontosTuristicos << " | " << carta2.nome << ": " << carta2.pontosTuristicos << "\n";
            if (carta1.pontosTuristicos > carta2.pontosTuristicos) cout << "Vencedor: " << carta1.nome << "\n";
            else if (carta2.pontosTuristicos > carta1.pontosTuristicos) cout << "Vencedor: " << carta2.nome << "\n";
            else cout << "Empate!\n";
            break;
        case 5:
            cout << "Atributo: Densidade Demográfica\n";
            cout << carta1.nome << ": " << carta1.densidadeDemografica << " | " << carta2.nome << ": " << carta2.densidadeDemografica << "\n";
            if (carta1.densidadeDemografica < carta2.densidadeDemografica) cout << "Vencedor: " << carta1.nome << "\n";
            else if (carta2.densidadeDemografica < carta1.densidadeDemografica) cout << "Vencedor: " << carta2.nome << "\n";
            else cout << "Empate!\n";
            break;
        default:
            cout << "Opção inválida!\n";
    }
}

int main() {
    Carta brasil = {"Brasil", 212600000, 8515767, 2.1, 50, 24.96};
    Carta eua = {"EUA", 331000000, 9833517, 21.4, 100, 33.68};
    
    int escolha;
    cout << "Escolha um atributo para comparar:\n";
    cout << "1 - População\n";
    cout << "2 - Área\n";
    cout << "3 - PIB\n";
    cout << "4 - Pontos Turísticos\n";
    cout << "5 - Densidade Demográfica (vence o menor)\n";
    cout << "Opção: ";
    cin >> escolha;
    
    compararCartas(brasil, eua, escolha);
    
    return 0;
}
