#include <iostream>
using namespace std;
#include <vector>

int main(){
    vector <int> casas;
    int quant_casas, soma_casas, num_casa, sum_aux = 0;

    cin >> quant_casas;

    for(int i = 0; i < quant_casas; i++){
        cin >> num_casa;
        casas.push_back(num_casa);
    }

    cin >> soma_casas;

    for (int i = 0; i < quant_casas; i++){
        for (int j = i + 1; j < quant_casas; j++){
            sum_aux = casas[i] + casas[j];
            if(sum_aux == soma_casas){
                cout << casas[i] << " " << casas[j] << endl;
                return 0;
            }
        } 
    }
    
    return 0;
}