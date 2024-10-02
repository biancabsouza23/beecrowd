#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
    set<int> registros;
    int quant_registros, registro;

    cin >> quant_registros;

    for (int i = 0; i < quant_registros; i++){
        cin >> registro;
        registros.insert(registro);
    }

    cout << registros.size() << '\n';

    return 0;
}