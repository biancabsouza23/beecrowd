#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
    map <char, int> jogadores;
    int valor_inicial, num_rodadas, valor;
    char jogador, jogador2;
    cin >> valor_inicial;
    cin >> num_rodadas;

    char chaves[] = {'D', 'E', 'F'};
    for(char jogador: chaves){
        jogadores[jogador] = valor_inicial;
    }

    while (num_rodadas--){
        char operacao;
        cin >> operacao;
        switch (operacao){
        case 'C':
            cin >> jogador >> valor;
            jogadores[jogador] -= valor;
            break;
        case 'V':
            cin >> jogador >> valor;
            jogadores[jogador] += valor;
            break;
        case 'A':
            cin >> jogador >> jogador2 >> valor;
            jogadores[jogador] += valor;
            jogadores[jogador2] -= valor;
            break;
        }
    }
    
    cout << jogadores['D'] << " " << jogadores['E'] << " " << jogadores['F'] << '\n';
    
    return 0;
}