#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    vector<int> dimensoes;
    int dim, alt_porta, larg_port;
    char resposta = 'N';

    for (int i = 0; i < 3; i++){
        cin >> dim;
        dimensoes.push_back(dim);
    }
    
    sort(dimensoes.begin(), dimensoes.end());

    cin >> alt_porta >> larg_port;

    if (dimensoes[0] <= alt_porta && dimensoes[1] <= larg_port || dimensoes[0] <= larg_port && dimensoes[1] <= alt_porta){
        resposta = 'S';
    }
    
    cout << resposta << '\n';

    return 0;
}