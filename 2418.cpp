#include <iostream>
#include <iomanip>
using namespace std;
#include <vector>
#include <algorithm>

int main(){
    vector <float> notas;
    float nota, soma = 0, media;

    for(int i = 0; i < 5; i++){
        cin >> nota;
        notas.push_back(nota);
    }

    sort(notas.begin(), notas.end());

    for (int i = 1; i < 4; i++){
        soma += notas[i];
    }

    cout << fixed << setprecision(1);
    cout << soma << endl;
    
    return 0;
}