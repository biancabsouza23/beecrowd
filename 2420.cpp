#include <iostream>
using namespace std;
#include <vector>

int main(){
    vector <int> comprimentos;
    int num_territ, comp, sum_i = 0, soma = 0, div_territ;

    cin >> num_territ;

    for(int i = 0; i < num_territ; i++){
        cin >> comp;
        comprimentos.push_back(comp);
        soma += comp;
    }

    div_territ = soma / 2;

    for(int i = 0; i < num_territ; i++){
        sum_i += comprimentos[i];
        if(sum_i == div_territ){
            cout << i + 1 << endl;
            break;
        }
    }
    
    return 0;
}