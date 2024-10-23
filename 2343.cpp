#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    int quant, x, y;
    set<pair<int, int>> raios; 
    cin >> quant;

    while (quant) { 

        cin >> x >> y;
        pair<int, int> coordenada = {x, y};
        if(raios.find(coordenada) != raios.end()){
            cout << 1 << '\n';
            return 0;
        }

        raios.insert(coordenada);

        quant--;
    }
    
    cout << 0 << '\n';

    return 0;
}