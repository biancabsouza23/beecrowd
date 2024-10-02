#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {

    int quant, bac, dias, cont = 0, indice;
    double valor_atual, maior = 0.0;
    cin >> quant;

    while (quant) {
        
        cin >> bac >> dias;
        valor_atual = dias * log(bac);
        if (valor_atual > maior) {
            maior = valor_atual;
            indice = cont;
        }
        cont++;
        quant--;
    }

    cout << indice << '\n';  

    return 0;
}